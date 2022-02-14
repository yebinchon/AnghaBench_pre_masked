
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fv_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fv_softc*,int ,int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(struct fv_softc *VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;

 while(VAR_6--) {
  VAR_7 = ((VAR_5) >> VAR_6) & 0x1 ? VAR_2 : 0;
  FUNC_0(VAR_4, VAR_0, VAR_7 | VAR_3);
  FUNC_1(10);
  FUNC_0(VAR_4, VAR_0, VAR_7 | VAR_3 | VAR_1);
  FUNC_1(10);
 }

 return (0);
}
