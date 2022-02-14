
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char**,char*,char*,char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int **,int *,int ) ;
 int FUNC_5 (char*,int *,int *,int) ;
 char* FUNC_6 (char*,char) ;
 char* FUNC_7 (char*,size_t) ;

__attribute__((used)) static char *
FUNC_8(char *VAR_4, nvlist_t *VAR_5, char **VAR_6)
{
 int VAR_7 = 0;
 char *VAR_8, *VAR_9;


 char *VAR_10 = FUNC_6(VAR_4, '/');
 if (VAR_10 != ((void*)0)) {
  size_t VAR_11 = VAR_10 - VAR_4;
  VAR_8 = FUNC_7(VAR_4, VAR_11);
 } else {
  VAR_8 = VAR_4;
 }

 if (VAR_5 == ((void*)0)) {
  VAR_7 = FUNC_4(VAR_8, &VAR_5, ((void*)0), 0);
  if (VAR_7 != 0) {
   FUNC_1("Tried to read config of pool \"%s\" but "
       "spa_get_stats() failed with error %d\n",
       VAR_8, VAR_7);
  }
 }

 (void) FUNC_0(&VAR_9, "%s%s", VAR_8, VAR_0);
 FUNC_2(VAR_5, VAR_3, VAR_9);

 VAR_7 = FUNC_5(VAR_9, VAR_5, ((void*)0),
     VAR_2 | VAR_1);
 if (VAR_7 != 0) {
  FUNC_1("Tried to import pool \"%s\" but spa_import() failed "
      "with error %d\n", VAR_9, VAR_7);
 }

 if (VAR_6 != ((void*)0) && VAR_10 != ((void*)0))
  (void) FUNC_0(VAR_6, "%s%s", VAR_9, VAR_10);

 if (VAR_4 != VAR_8)
  FUNC_3(VAR_8);

 return (VAR_9);
}
