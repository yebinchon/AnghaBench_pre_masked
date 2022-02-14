
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {unsigned long flag; int val; int * name; } ;


 int FUNC_0 (char*,char*,char*) ;
 unsigned long FUNC_1 (char*,int *,int ) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (int *,char*) ;
 char* FUNC_4 (char**,char*) ;

int FUNC_5(char *VAR_0, char **VAR_1, struct option *VAR_2,
        char **VAR_3, char **VAR_4, unsigned long *VAR_5,
        unsigned long *VAR_6)
{
 char *VAR_7;
 char *VAR_8;
 int VAR_9;

 do {
  if ((VAR_7 = FUNC_4(VAR_1, ",")) == ((void*)0))
   return 0;
 } while (*VAR_7 == '\0');
 *VAR_3 = VAR_7;

 *VAR_4 = ((void*)0);
 if ((VAR_8 = FUNC_2 (VAR_7, '=')) != ((void*)0)) {
  *VAR_8++ = 0;
  if (VAR_6)
   *VAR_6 = FUNC_1(VAR_8, ((void*)0), 0);
  *VAR_4 = VAR_8;
 }

 for (VAR_9 = 0; VAR_2[VAR_9].name != ((void*)0); VAR_9++) {
  if (!FUNC_3(VAR_2[VAR_9].name, VAR_7)) {
   if (!VAR_2[VAR_9].flag && (!VAR_8 || !*VAR_8)) {
    FUNC_0("%s: the %s option requires an argument\n",
           VAR_0, VAR_7);
    return -1;
   }

   if (VAR_5 && VAR_2[VAR_9].flag)
    *VAR_5 |= VAR_2[VAR_9].flag;

   return VAR_2[VAR_9].val;
  }
 }
 FUNC_0("%s: Unrecognized mount option %s\n", VAR_0, VAR_7);
 return -1;
}
