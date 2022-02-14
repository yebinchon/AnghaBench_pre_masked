
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aslookup {scalar_t__ as_debug; scalar_t__ as_f; } ;
typedef scalar_t__ sa_family_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int * FUNC_1 (char*,int,scalar_t__) ;
 int FUNC_2 (scalar_t__,char*,...) ;
 int FUNC_3 (char*,char*,...) ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

unsigned int
FUNC_6(void *VAR_1, char *VAR_2, sa_family_t VAR_3)
{
 struct aslookup *VAR_4 = VAR_1;
 char VAR_5[1024];
 unsigned int VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_6 = 0;
 VAR_7 = VAR_8 = 0;
 VAR_9 = (VAR_3 == VAR_0) ? 128 : 32;
 (void)FUNC_2(VAR_4->as_f, "!r%s/%d,l\n", VAR_2, VAR_9);
 (void)FUNC_0(VAR_4->as_f);
 while (FUNC_1(VAR_5, sizeof(VAR_5), VAR_4->as_f) != ((void*)0)) {
  VAR_5[sizeof(VAR_5) - 1] = '\0';
  if (VAR_7 == 0) {
   VAR_7 = VAR_5[0];
   switch (VAR_7) {
       case 'A':

    FUNC_3(VAR_5, "A%d\n", &VAR_8);







    break;
       case 'C':
       case 'D':
       case 'E':
       case 'F':




    break;
   }
   if (VAR_7 == 'A')

    continue;
  }

  if (VAR_8 == 0)

   VAR_7 = VAR_5[0];
  if (VAR_7 != 'A')

   break;


  VAR_8 -= FUNC_4(VAR_5);


  if (VAR_6 == 0 && FUNC_5(VAR_5, "origin:", 7) == 0) {
   FUNC_3(VAR_5 + 7, " AS%u", &VAR_6);






  }
 }

 return (VAR_6);
}
