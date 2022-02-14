
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elfhints_hdr {int version; int strtab; scalar_t__ strsize; scalar_t__ dirlistlen; int spare; scalar_t__ dirlist; int magic; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char**,char*,char const*) ;
 char** VAR_2 ;
 int FUNC_1 (int,char*,char*,...) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int,char*) ;
 scalar_t__ FUNC_6 (int *,char*,char*) ;
 scalar_t__ FUNC_7 (char*,int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct elfhints_hdr*,int,int,int *) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_12 (char,int *) ;
 int FUNC_13 (char*,char const*) ;
 scalar_t__ FUNC_14 (char*) ;

__attribute__((used)) static void
FUNC_15(const char *VAR_4)
{
 struct elfhints_hdr VAR_5;
 char *VAR_6;
 int VAR_7;
 FILE *VAR_8;
 int VAR_9;

 if (FUNC_0(&VAR_6, "%s.XXXXXX", VAR_4) == -1)
  FUNC_2(1, "Out of memory");
 if ((VAR_7 = FUNC_11(VAR_6)) == -1)
  FUNC_1(1, "mkstemp(%s)", VAR_6);
 if (FUNC_3(VAR_7, 0444) == -1)
  FUNC_1(1, "fchmod(%s)", VAR_6);
 if ((VAR_8 = FUNC_5(VAR_7, "wb")) == ((void*)0))
  FUNC_1(1, "fdopen(%s)", VAR_6);

 VAR_5.magic = VAR_0;
 VAR_5.version = 1;
 VAR_5.strtab = sizeof VAR_5;
 VAR_5.strsize = 0;
 VAR_5.dirlist = 0;
 FUNC_10(VAR_5.spare, 0, sizeof VAR_5.spare);


 if (VAR_3 > 0) {
  VAR_5.strsize += FUNC_14(VAR_2[0]);
  for (VAR_9 = 1; VAR_9 < VAR_3; VAR_9++)
   VAR_5.strsize += 1 + FUNC_14(VAR_2[VAR_9]);
 }
 VAR_5.dirlistlen = VAR_5.strsize;
 VAR_5.strsize++;


 if (FUNC_9(&VAR_5, 1, sizeof VAR_5, VAR_8) != sizeof VAR_5)
  FUNC_1(1, "%s: write error", VAR_6);

 if (VAR_3 > 0) {
  if (FUNC_7(VAR_2[0], VAR_8) == VAR_1)
   FUNC_1(1, "%s: write error", VAR_6);
  for (VAR_9 = 1; VAR_9 < VAR_3; VAR_9++)
   if (FUNC_6(VAR_8, ":%s", VAR_2[VAR_9]) < 0)
    FUNC_1(1, "%s: write error", VAR_6);
 }
 if (FUNC_12('\0', VAR_8) == VAR_1 || FUNC_4(VAR_8) == VAR_1)
  FUNC_1(1, "%s: write error", VAR_6);

 if (FUNC_13(VAR_6, VAR_4) == -1)
  FUNC_1(1, "rename %s to %s", VAR_6, VAR_4);
 FUNC_8(VAR_6);
}
