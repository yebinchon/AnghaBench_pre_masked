
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ioat_softc {scalar_t__ version; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ioat_softc*,int ,int ) ;
 int FUNC_1 (struct ioat_softc*,int ,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct ioat_softc *VAR_2, uint64_t VAR_3)
{

 if (VAR_2->version >= VAR_1)
  FUNC_0(VAR_2, VAR_0, VAR_3);
 else
  FUNC_1(VAR_2, VAR_0, VAR_3);
}
