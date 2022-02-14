
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;
typedef int token_buf ;
typedef int target_fs ;
typedef int libzfs_handle_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,...) ;
 int * FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,int ,char*,int,int *,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_7(libzfs_handle_t *VAR_7, const char *VAR_8,
    boolean_t VAR_9)
{
 char VAR_10[VAR_3];

 FUNC_4(VAR_7, FUNC_0(VAR_1,
     "checksum mismatch or incomplete stream"));

 if (!VAR_9)
  return;
 (void) FUNC_2(VAR_10, VAR_8, sizeof (VAR_10));
 *FUNC_1(VAR_10, '@') = '\0';
 zfs_handle_t *VAR_11 = FUNC_5(VAR_7, VAR_10,
     VAR_5 | VAR_6);
 if (VAR_11 == ((void*)0))
  return;

 char VAR_12[VAR_2];
 int VAR_13 = FUNC_6(VAR_11, VAR_4,
     VAR_12, sizeof (VAR_12),
     ((void*)0), ((void*)0), 0, VAR_0);
 if (VAR_13 == 0) {
  FUNC_4(VAR_7, FUNC_0(VAR_1,
      "checksum mismatch or incomplete stream.\n"
      "Partially received snapshot is saved.\n"
      "A resuming stream can be generated on the sending "
      "system by running:\n"
      "    zfs send -t %s"),
      VAR_12);
 }
 FUNC_3(VAR_11);
}
