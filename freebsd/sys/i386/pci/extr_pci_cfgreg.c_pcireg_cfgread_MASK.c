
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int,int,int,int,int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_7(int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = -1;
 int VAR_7;

 FUNC_3(&VAR_0);
 VAR_7 = FUNC_6(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_7 != 0) {
  switch (VAR_5) {
  case 1:
   VAR_6 = FUNC_0(VAR_7);
   break;
  case 2:
   VAR_6 = FUNC_2(VAR_7);
   break;
  case 4:
   VAR_6 = FUNC_1(VAR_7);
   break;
  }
  FUNC_5();
 }
 FUNC_4(&VAR_0);
 return (VAR_6);
}
