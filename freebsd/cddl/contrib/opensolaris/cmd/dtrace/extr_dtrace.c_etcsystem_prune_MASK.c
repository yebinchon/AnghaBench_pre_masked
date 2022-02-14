
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t st_size; scalar_t__ st_gid; scalar_t__ st_uid; int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,char*,int) ;
 scalar_t__ FUNC_2 (char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,struct stat*) ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 int FUNC_8 () ;
 char* FUNC_9 (size_t) ;
 int FUNC_10 (char*,int,...) ;
 size_t FUNC_11 (int,char*,size_t) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,size_t,char*,char*,int) ;
 int FUNC_14 (char*) ;
 char* FUNC_15 (char*,char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int,char*,int) ;

__attribute__((used)) static void
FUNC_18(void)
{
 struct stat VAR_7;
 size_t VAR_8;
 char *VAR_9, *VAR_10, *VAR_11;
 int VAR_12;
 char *VAR_13 = VAR_6, *VAR_14;

 if ((VAR_12 = FUNC_10(VAR_13, VAR_2)) == -1)
  FUNC_5("failed to open %s", VAR_13);

 if (FUNC_7(VAR_12, &VAR_7) == -1)
  FUNC_5("failed to fstat %s", VAR_13);

 if ((VAR_9 = FUNC_9((VAR_8 = VAR_7.st_size) + 1)) == ((void*)0))
  FUNC_5("failed to allocate memory for %s", VAR_13);

 if (FUNC_11(VAR_12, VAR_9, VAR_8) != VAR_8)
  FUNC_5("failed to read %s", VAR_13);

 VAR_9[VAR_8] = '\0';
 (void) FUNC_3(VAR_12);

 if ((VAR_10 = FUNC_15(VAR_9, VAR_4)) == ((void*)0))
  goto out;

 if (FUNC_14(VAR_9) != VAR_8) {
  FUNC_5("embedded nul byte in %s; manual repair of %s "
      "required\n", VAR_13, VAR_13);
 }

 if (FUNC_15(VAR_10 + 1, VAR_4) != ((void*)0)) {
  FUNC_5("multiple start sentinels in %s; manual repair of %s "
      "required\n", VAR_13, VAR_13);
 }

 if ((VAR_11 = FUNC_15(VAR_9, VAR_5)) == ((void*)0)) {
  FUNC_5("missing end sentinel in %s; manual repair of %s "
      "required\n", VAR_13, VAR_13);
 }

 if (VAR_10 > VAR_11) {
  FUNC_5("end sentinel preceeds start sentinel in %s; manual "
      "repair of %s required\n", VAR_13, VAR_13);
 }

 VAR_11 += FUNC_14(VAR_5) + 1;
 FUNC_1(VAR_11, VAR_10, FUNC_14(VAR_11) + 1);

 VAR_14 = FUNC_0(VAR_8 = FUNC_14(VAR_13) + 80);
 (void) FUNC_13(VAR_14, VAR_8, "%s.dtrace.%d", VAR_13, FUNC_8());

 if ((VAR_12 = FUNC_10(VAR_14,
     VAR_3 | VAR_0 | VAR_1, VAR_7.st_mode)) == -1)
  FUNC_5("failed to create %s", VAR_14);

 if (FUNC_17(VAR_12, VAR_9, FUNC_14(VAR_9)) < FUNC_14(VAR_9)) {
  (void) FUNC_16(VAR_14);
  FUNC_5("failed to write to %s", VAR_14);
 }

 (void) FUNC_3(VAR_12);

 if (FUNC_2(VAR_14, VAR_7.st_uid, VAR_7.st_gid) != 0) {
  (void) FUNC_16(VAR_14);
  FUNC_5("failed to chown(2) %s to uid %d, gid %d", VAR_14,
      (int)VAR_7.st_uid, (int)VAR_7.st_gid);
 }

 if (FUNC_12(VAR_14, VAR_13) == -1)
  FUNC_5("rename of %s to %s failed", VAR_14, VAR_13);

 FUNC_4("cleaned up forceload directives in %s\n", VAR_13);
out:
 FUNC_6(VAR_9);
}
