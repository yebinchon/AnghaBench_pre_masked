
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int KBDC ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static int
FUNC_13(KBDC VAR_7, int VAR_8)
{




 int VAR_9;
 int VAR_10;
 int VAR_11;

 if (!FUNC_6(VAR_7, VAR_6)) {

  return VAR_0;
 }


 FUNC_12(VAR_7, VAR_2);


 FUNC_2(VAR_7, 100);


 VAR_11 = FUNC_5(VAR_7) & ~VAR_4;
 VAR_10 = FUNC_3(VAR_7);
 if (VAR_10 == -1) {

  FUNC_7(VAR_7, VAR_11);
  FUNC_6(VAR_7, VAR_1);
  return VAR_0;
 }
 FUNC_10(VAR_7);
 if (!(VAR_8 & VAR_5))
  FUNC_11(VAR_7);

 VAR_9 = FUNC_4(VAR_7);
 FUNC_7(VAR_7, VAR_11 | VAR_4);
 FUNC_9(VAR_7, VAR_6, VAR_6);
 FUNC_6(VAR_7, VAR_1);
 return (FUNC_1(VAR_7, VAR_3) ? 0 : VAR_9);
}
