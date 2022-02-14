
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ichwd_softc {int tco_version; } ;


 int VAR_0 ;
 int FUNC_0 (struct ichwd_softc*,int ,int) ;
 int FUNC_1 (struct ichwd_softc*,int ,int) ;

__attribute__((used)) static __inline void
FUNC_2(struct ichwd_softc *VAR_1)
{
 if (VAR_1->tco_version == 1)
  FUNC_0(VAR_1, VAR_0, 1);
 else
  FUNC_1(VAR_1, VAR_0, 1);
}
