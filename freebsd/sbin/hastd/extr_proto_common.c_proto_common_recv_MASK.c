
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (int,int*) ;
 int FUNC_3 (int,unsigned char*,size_t,int ) ;
 int FUNC_4 (int,int ) ;

int
FUNC_5(int VAR_7, unsigned char *VAR_8, size_t VAR_9, int *VAR_10)
{
 ssize_t VAR_11;

 FUNC_0(VAR_7 >= 0);

 if (VAR_8 == ((void*)0)) {


  FUNC_0(VAR_9 == 0);

  if (FUNC_4(VAR_7, VAR_5) == -1)
   return (VAR_6);
  return (0);
 }

 FUNC_0(VAR_8 != ((void*)0));
 FUNC_0(VAR_9 > 0);

 do {
  VAR_11 = FUNC_3(VAR_7, VAR_8, VAR_9, VAR_4);
 } while (VAR_11 == -1 && VAR_6 == VAR_1);
 if (VAR_11 == 0) {
  return (VAR_2);
 } else if (VAR_11 == -1) {






  if (VAR_6 == VAR_0 && FUNC_1(VAR_7))
   VAR_6 = VAR_3;
  return (VAR_6);
 }
 if (VAR_10 == ((void*)0))
  return (0);
 return (FUNC_2(VAR_7, VAR_10));
}
