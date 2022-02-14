
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fv_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fv_softc*,int ) ;
 int FUNC_1 (struct fv_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct fv_softc *VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_6 = 0;
 while(VAR_5--) {
  VAR_6 <<= 1;
  FUNC_1(VAR_4, VAR_0, VAR_3);
  FUNC_2(10);
  FUNC_1(VAR_4, VAR_0, VAR_3 | VAR_1);
  FUNC_2(10);
  if (FUNC_0(VAR_4, VAR_0) & VAR_2)
   VAR_6 |= 1;
 }

 return (VAR_6);
}
