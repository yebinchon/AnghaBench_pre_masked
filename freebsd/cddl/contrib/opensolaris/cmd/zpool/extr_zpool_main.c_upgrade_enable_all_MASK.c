
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zpool_handle_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_2__ {char* fi_uname; char* fi_guid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char**,char*,char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (char*,char const*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_5 (int) ;
 int * FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int ) ;

__attribute__((used)) static int
FUNC_9(zpool_handle_t *VAR_5, int *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 boolean_t VAR_10 = VAR_1;
 nvlist_t *VAR_11 = FUNC_6(VAR_5);

 VAR_9 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  const char *VAR_12 = VAR_4[VAR_7].fi_uname;
  const char *VAR_13 = VAR_4[VAR_7].fi_guid;
  if (!FUNC_3(VAR_11, VAR_13)) {
   char *VAR_14;
   FUNC_5(-1 != FUNC_0(&VAR_14, "feature@%s", VAR_12));
   VAR_8 = FUNC_8(VAR_5, VAR_14,
       VAR_3);
   if (VAR_8 != 0) {
    FUNC_1(VAR_14);
    return (VAR_8);
   }
   VAR_9++;

   if (VAR_10) {
    (void) FUNC_4(FUNC_2("Enabled the "
        "following features on '%s':\n"),
        FUNC_7(VAR_5));
    VAR_10 = VAR_0;
   }
   (void) FUNC_4(FUNC_2("  %s\n"), VAR_12);
   FUNC_1(VAR_14);
  }
 }

 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_9;
 return (0);
}
