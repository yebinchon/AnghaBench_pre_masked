
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (char const*,int,char const*,int) ;
 scalar_t__ FUNC_2 (char const*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,int,char*,char const*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char const*,char*) ;
 size_t FUNC_8 (void const*,int,size_t,int *) ;
 int FUNC_9 (char const*,int,int) ;
 size_t FUNC_10 (void const*) ;
 scalar_t__ FUNC_11 (int,void const*,scalar_t__) ;

int
FUNC_12(const char *VAR_2, int VAR_3,
    const char *VAR_4, int VAR_5, int VAR_6, const void *VAR_7)
{
 int VAR_8;
 FUNC_0(VAR_2, VAR_3);
 VAR_8 = FUNC_9(VAR_4, VAR_0 | VAR_1, VAR_5 >= 0 ? VAR_5 : 0644);
 if (VAR_8 < 0) {
  FUNC_5(VAR_2, VAR_3, "Could not create %s", VAR_4);
  FUNC_4(((void*)0));
  return (0);
 }
 if (0 != FUNC_2(VAR_4, VAR_5)) {
  FUNC_5(VAR_2, VAR_3, "Could not chmod %s", VAR_4);
  FUNC_4(((void*)0));
  FUNC_3(VAR_8);
  return (0);
 }
 if (VAR_7 != ((void*)0)) {
  ssize_t VAR_9;

  if (VAR_6 < 0)
   VAR_9 = (ssize_t)FUNC_10(VAR_7);
  else
   VAR_9 = (ssize_t)VAR_6;
  if (VAR_9 != FUNC_11(VAR_8, VAR_7, VAR_9)) {
   FUNC_3(VAR_8);
   FUNC_5(VAR_2, VAR_3,
       "Could not write to %s", VAR_4);
   FUNC_4(((void*)0));
   FUNC_3(VAR_8);
   return (0);
  }
 }
 FUNC_3(VAR_8);
 FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
 return (1);

}
