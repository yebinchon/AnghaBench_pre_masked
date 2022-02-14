
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pd_visible; scalar_t__ pd_attr; char* pd_name; } ;
typedef TYPE_1__ zprop_desc_t ;
typedef int zfs_deleg_note_t ;
typedef int opt_desc ;
typedef scalar_t__ boolean_t ;
struct TYPE_5__ {char* z_perm; int z_note; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char const*,...) ;
 char* FUNC_4 (int ) ;
 char* FUNC_5 (char*) ;
 int VAR_6 ;
 int FUNC_6 (char const**,size_t,int,int ) ;
 int * VAR_7 ;
 int * VAR_8 ;
 TYPE_3__* VAR_9 ;
 TYPE_1__* FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(boolean_t VAR_10, boolean_t VAR_11, const char *VAR_12)
{
 const char *VAR_13[] = {
  "-h", FUNC_5("show this help message and exit"),
  "-l", FUNC_5("set permission locally"),
  "-d", FUNC_5("set permission for descents"),
  "-u", FUNC_5("set permission for user"),
  "-g", FUNC_5("set permission for group"),
  "-e", FUNC_5("set permission for everyone"),
  "-c", FUNC_5("set create time permission"),
  "-s", FUNC_5("define permission set"),

  "-r", FUNC_5("remove permissions recursively"),
 };
 size_t VAR_14 = sizeof (VAR_13) / sizeof (char *);
 size_t VAR_15 = VAR_14 - 2;
 const char *VAR_16[VAR_5];
 int VAR_17;
 size_t VAR_18 = 0;
 FILE *VAR_19 = VAR_11 ? VAR_8 : VAR_7;
 zprop_desc_t *VAR_20 = FUNC_7();
 const char *VAR_21 = FUNC_5("%-16s %-14s\t%s\n");

 (void) FUNC_3(VAR_19, FUNC_5("Usage: %s\n"), FUNC_4(VAR_10 ? VAR_2 :
     VAR_1));
 (void) FUNC_3(VAR_19, "%s", FUNC_5("Options:\n"));
 for (VAR_17 = 0; VAR_17 < (VAR_10 ? VAR_14 : VAR_15); VAR_17++) {
  const char *VAR_22 = VAR_13[VAR_17++];
  const char *VAR_23 = VAR_13[VAR_17];
  (void) FUNC_3(VAR_19, FUNC_5("  %-10s  %s\n"), VAR_22, VAR_23);
 }

 (void) FUNC_3(VAR_19, "%s", FUNC_5("\nThe following permissions are "
     "supported:\n\n"));
 (void) FUNC_3(VAR_19, VAR_21, FUNC_5("NAME"), FUNC_5("TYPE"),
     FUNC_5("NOTES"));
 for (VAR_17 = 0; VAR_17 < VAR_4; VAR_17++) {
  const char *VAR_24 = VAR_9[VAR_17].z_perm;
  zfs_deleg_note_t VAR_25 = VAR_9[VAR_17].z_note;
  const char *VAR_26 = FUNC_1(VAR_25);
  const char *VAR_27 = FUNC_0(VAR_25);
  (void) FUNC_3(VAR_19, VAR_21, VAR_24, VAR_26, VAR_27);
 }

 for (VAR_17 = 0; VAR_17 < VAR_5; VAR_17++) {
  zprop_desc_t *VAR_28 = &VAR_20[VAR_17];
  if (VAR_28->pd_visible != VAR_0)
   continue;

  if (VAR_28->pd_attr == VAR_3)
   continue;

  VAR_16[VAR_18++] = VAR_28->pd_name;
 }
 VAR_16[VAR_18] = ((void*)0);

 FUNC_6(VAR_16, VAR_18, sizeof (char *), VAR_6);

 for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++)
  (void) FUNC_3(VAR_19, VAR_21, VAR_16[VAR_17], FUNC_5("property"), "");

 if (VAR_12 != ((void*)0))
  (void) FUNC_3(VAR_19, FUNC_5("\nzfs: error: %s"), VAR_12);

 FUNC_2(VAR_11 ? 0 : 2);
}
