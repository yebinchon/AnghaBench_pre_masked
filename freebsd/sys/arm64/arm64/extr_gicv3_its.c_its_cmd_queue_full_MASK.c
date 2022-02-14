
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct its_cmd {int dummy; } ;
struct gicv3_its_softc {int sc_its_cmd_next_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gicv3_its_softc*,int ) ;

__attribute__((used)) static inline bool
FUNC_1(struct gicv3_its_softc *VAR_2)
{
 size_t VAR_3, VAR_4;


 VAR_4 = (VAR_2->sc_its_cmd_next_idx + 1) %
     (VAR_1 / sizeof(struct its_cmd));

 VAR_3 = FUNC_0(VAR_2, VAR_0) / sizeof(struct its_cmd);





 return (VAR_4 == VAR_3);
}
