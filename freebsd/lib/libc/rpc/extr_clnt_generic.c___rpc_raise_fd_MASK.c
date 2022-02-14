
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int) ;

int
FUNC_4(int VAR_3)
{
 int VAR_4;

 if (VAR_3 >= VAR_2)
  return (VAR_3);

 if ((VAR_4 = FUNC_1(VAR_3, VAR_0, VAR_2)) == -1)
  return (VAR_3);

 if (FUNC_2(VAR_4) == -1) {
  FUNC_0(VAR_4);
  return (VAR_3);
 }

 if (FUNC_0(VAR_3) == -1) {

  (void) FUNC_3(VAR_1,
   "could not close() fd %d; mem & fd leak", VAR_3);
 }

 return (VAR_4);
}
