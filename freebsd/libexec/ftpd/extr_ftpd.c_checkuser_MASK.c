
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct group {scalar_t__ gr_gid; char** gr_mem; } ;
struct TYPE_2__ {scalar_t__ pw_gid; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *,size_t*) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 struct group* FUNC_5 (char*) ;
 char* FUNC_6 (size_t) ;
 int FUNC_7 (char*,char*,size_t) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_8 (char*,char*) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (char*,char*) ;
 char* FUNC_11 (char*,char*) ;

__attribute__((used)) static int
FUNC_12(char *VAR_2, char *VAR_3, int VAR_4, char **VAR_5, int *VAR_6)
{
 FILE *VAR_7;
 int VAR_8 = 0;
 size_t VAR_9;
 char *VAR_10, *VAR_11, *VAR_12;

 if (VAR_6 != ((void*)0))
  *VAR_6 = 0;
 if ((VAR_7 = FUNC_3(VAR_2, "r")) != ((void*)0)) {
  while (!VAR_8 && (VAR_10 = FUNC_2(VAR_7, &VAR_9)) != ((void*)0)) {

   if (VAR_10[0] == '#')
    continue;
   if (VAR_10[VAR_9 - 1] == '\n') {
    VAR_10[VAR_9 - 1] = '\0';
    VAR_11 = ((void*)0);
   } else {
    if ((VAR_11 = FUNC_6(VAR_9 + 1)) == ((void*)0))
     FUNC_0("Ran out of memory.");
    FUNC_7(VAR_11, VAR_10, VAR_9);
    VAR_11[VAR_9] = '\0';
    VAR_10 = VAR_11;
   }

   VAR_12 = FUNC_11(VAR_10, " \t");

   if (VAR_12 == ((void*)0))
    goto nextline;



   if (VAR_12[0] == '@') {
    int VAR_13 = 0;
    struct group *VAR_14;

    if (VAR_12[1] == '\0')
     VAR_8 = 1;
    else {
     if ((VAR_14 = FUNC_5(VAR_12+1)) == ((void*)0))
      goto nextline;



     if (VAR_4 && VAR_14->gr_gid == VAR_1->pw_gid)
      VAR_8 = 1;



     while (!VAR_8 && VAR_14->gr_mem[VAR_13])
      VAR_8 = FUNC_8(VAR_3,
       VAR_14->gr_mem[VAR_13++])
       == 0;
    }
   }



   else
    VAR_8 = FUNC_8(VAR_12, VAR_3) == 0;



   if (VAR_8 && VAR_5) {
    if ((VAR_12 = FUNC_11(((void*)0), "")) != ((void*)0))
     VAR_12 += FUNC_10(VAR_12, " \t");
    if (VAR_12 && *VAR_12) {
      if ((*VAR_5 = FUNC_9(VAR_12)) == ((void*)0))
      FUNC_0("Ran out of memory.");
    } else
     *VAR_5 = ((void*)0);
   }
nextline:
   if (VAR_11)
    FUNC_4(VAR_11);
  }
  (void) FUNC_1(VAR_7);
 } else if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_0;
 return (VAR_8);
}
