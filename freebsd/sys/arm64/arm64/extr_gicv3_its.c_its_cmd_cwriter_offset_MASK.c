
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct its_cmd {int dummy; } ;
struct gicv3_its_softc {struct its_cmd* sc_its_cmd_base; } ;



__attribute__((used)) static inline uint64_t
FUNC_0(struct gicv3_its_softc *VAR_0, struct its_cmd *VAR_1)
{
 uint64_t VAR_2;

 VAR_2 = (VAR_1 - VAR_0->sc_its_cmd_base) * sizeof(*VAR_1);

 return (VAR_2);
}
