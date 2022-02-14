
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int nvpair_t ;
typedef int nvlist_t ;
struct TYPE_4__ {int paths; char** path; int can_be_active; } ;
typedef TYPE_1__ importargs_t ;
typedef int args ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char*,int) ;
 int VAR_2 ;
 int * FUNC_3 (int *,int *) ;
 char* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int **) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,int,char*,char*,char*) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*,char*) ;
 char* FUNC_11 (char*,char*) ;
 char* FUNC_12 (int,int ) ;
 int FUNC_13 (int) ;
 int * FUNC_14 (int ,TYPE_1__*) ;

__attribute__((used)) static char *
FUNC_15(char **VAR_3, nvlist_t **VAR_4, int VAR_5, char **VAR_6)
{
 nvlist_t *VAR_7;
 nvlist_t *VAR_8 = ((void*)0);
 char *VAR_9 = ((void*)0);
 char *VAR_10 = ((void*)0);
 char VAR_11 = '\0';
 int VAR_12 = 0;
 importargs_t VAR_13;

 FUNC_0(&VAR_13, sizeof (VAR_13));
 VAR_13.paths = VAR_5;
 VAR_13.path = VAR_6;
 VAR_13.can_be_active = VAR_0;

 if ((VAR_10 = FUNC_10(*VAR_3, "/@")) != ((void*)0)) {
  VAR_11 = *VAR_10;
  *VAR_10 = '\0';
 }

 VAR_7 = FUNC_14(VAR_2, &VAR_13);

 if (VAR_7 != ((void*)0)) {
  nvpair_t *VAR_14 = ((void*)0);
  while ((VAR_14 = FUNC_3(VAR_7, VAR_14)) != ((void*)0)) {
   FUNC_13(FUNC_5(VAR_14, VAR_4) == 0);
   if (FUNC_6(*VAR_4, *VAR_3)) {
    VAR_12++;
    if (VAR_8 != ((void*)0)) {

     if (VAR_9 != ((void*)0)) {
      (void) FUNC_7("%s\n", VAR_9);
      FUNC_1(VAR_8, 8);
      VAR_9 = ((void*)0);
     }
     (void) FUNC_7("%s\n",
         FUNC_4(VAR_14));
     FUNC_1(*VAR_4, 8);
    } else {
     VAR_8 = *VAR_4;
     VAR_9 = FUNC_4(VAR_14);
    }
   }
  }
 }
 if (VAR_12 > 1)
  (void) FUNC_2("\tMatched %d pools - use pool GUID "
      "instead of pool name or \n"
      "\tpool name part of a dataset name to select pool", VAR_12);

 if (VAR_10)
  *VAR_10 = VAR_11;



 if (VAR_9 && (FUNC_11(*VAR_3, VAR_9) != *VAR_3)) {
  int VAR_15 = 1 + FUNC_9(VAR_9) + ((VAR_10) ? FUNC_9(VAR_10) : 0);

  *VAR_3 = FUNC_12(VAR_15, VAR_1);
  (void) FUNC_8(*VAR_3, VAR_15, "%s%s", VAR_9, VAR_10 ? VAR_10 : "");
 }

 *VAR_4 = VAR_9 ? VAR_8 : ((void*)0);

 return (VAR_9);
}
