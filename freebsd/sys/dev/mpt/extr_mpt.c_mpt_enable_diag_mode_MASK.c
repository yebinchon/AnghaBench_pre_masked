
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpt_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct mpt_softc*,int ) ;
 int FUNC_2 (struct mpt_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct mpt_softc *VAR_9)
{
 int VAR_10;

 VAR_10 = 20;
 while (--VAR_10) {

  if ((FUNC_1(VAR_9, VAR_7) & VAR_1) != 0)
   break;


  FUNC_2(VAR_9, VAR_8, 0xFF);
  FUNC_2(VAR_9, VAR_8, VAR_2);
  FUNC_2(VAR_9, VAR_8, VAR_3);
  FUNC_2(VAR_9, VAR_8, VAR_4);
  FUNC_2(VAR_9, VAR_8, VAR_5);
  FUNC_2(VAR_9, VAR_8, VAR_6);

  FUNC_0(100000);
 }
 if (VAR_10 == 0)
  return (VAR_0);
 return (0);
}
