
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(char *VAR_2)
{
 (void) FUNC_1(VAR_1, "Usage:\n    %s -l [-is] dir-to-look-in "
     "file-in-dir [xfile-on-file]\n", VAR_2);
 (void) FUNC_1(VAR_1, "    %s -i [-ls] dir-to-look-in "
     "file-in-dir [xfile-on-file]\n", VAR_2);
 (void) FUNC_1(VAR_1, "    %s -s [-il] dir-to-look-in "
     "file-in-dir [xfile-on-file]\n", VAR_2);
 (void) FUNC_1(VAR_1, "\t    Perform a lookup\n");
 (void) FUNC_1(VAR_1, "\t    -l == lookup\n");
 (void) FUNC_1(VAR_1, "\t    -i == request FIGNORECASE\n");
 (void) FUNC_1(VAR_1, "\t    -s == request stat(2) and xvattr info\n");
 (void) FUNC_1(VAR_1, "    %s -r [-ea] [-b buffer-size-in-bytes] "
     "dir-to-look-in [file-in-dir]\n", VAR_2);
 (void) FUNC_1(VAR_1, "    %s -e [-ra] [-b buffer-size-in-bytes] "
     "dir-to-look-in [file-in-dir]\n", VAR_2);
 (void) FUNC_1(VAR_1, "    %s -a [-re] [-b buffer-size-in-bytes] "
     "dir-to-look-in [file-in-dir]\n", VAR_2);
 (void) FUNC_1(VAR_1, "\t    Perform a readdir\n");
 (void) FUNC_1(VAR_1, "\t    -r == readdir\n");
 (void) FUNC_1(VAR_1, "\t    -e == request extended entries\n");
 (void) FUNC_1(VAR_1, "\t    -a == request access filtering\n");
 (void) FUNC_1(VAR_1, "\t    -b == buffer size (default 4K)\n");
 (void) FUNC_1(VAR_1, "    %s -A path\n", VAR_2);
 (void) FUNC_1(VAR_1, "\t    Look up _PC_ACCESS_FILTERING "
     "for path with pathconf(2)\n");
 (void) FUNC_1(VAR_1, "    %s -E path\n", VAR_2);
 (void) FUNC_1(VAR_1, "\t    Look up _PC_SATTR_EXISTS "
     "for path with pathconf(2)\n");
 (void) FUNC_1(VAR_1, "    %s -S path\n", VAR_2);
 (void) FUNC_1(VAR_1, "\t    Look up _PC_SATTR_EXISTS "
     "for path with pathconf(2)\n");
 FUNC_0(VAR_0);
}
