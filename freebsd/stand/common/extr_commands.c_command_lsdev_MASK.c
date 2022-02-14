
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int line ;
struct TYPE_2__ {char* dv_name; scalar_t__ (* dv_print ) (int) ;} ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 (int,char**,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char*,char*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(int VAR_4, char *VAR_5[])
{
 int VAR_6, VAR_7, VAR_8;
 char VAR_9[80];

 VAR_6 = 0;
 VAR_2 = 1;
 VAR_3 = 1;
 while ((VAR_7 = FUNC_0(VAR_4, VAR_5, "v")) != -1) {
  switch (VAR_7) {
  case 'v':
   VAR_6 = 1;
   break;
  case '?':
  default:

   return (VAR_0);
  }
 }
 VAR_5 += (VAR_2);
 VAR_4 -= (VAR_2);

 FUNC_2();
 for (VAR_8 = 0; VAR_1[VAR_8] != ((void*)0); VAR_8++) {
  if (VAR_1[VAR_8]->dv_print != ((void*)0)) {
   if (VAR_1[VAR_8]->dv_print(VAR_6))
    break;
  } else {
   FUNC_4(VAR_9, sizeof(VAR_9), "%s: (unknown)\n",
       VAR_1[VAR_8]->dv_name);
   if (FUNC_3(VAR_9))
    break;
  }
 }
 FUNC_1();
 return (VAR_0);
}
