
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uargs ;
struct ufs_args {int fspec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int,struct ufs_args*,int) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,char*,unsigned int) ;
 int FUNC_9 (char*,char*) ;
 unsigned int FUNC_10 (char const*) ;

__attribute__((used)) static int
FUNC_11(const char *VAR_8)
{
 static char VAR_9[512];
 int VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13 = 0;
 unsigned int VAR_14;

 for (VAR_14 =0; VAR_8 && VAR_14 < FUNC_10(VAR_8); VAR_14++) {
  switch(VAR_8[VAR_14]) {
  case 'L':
   VAR_13++;
   break;
  case 'R':
   VAR_11++;
   break;
  case 'U':
   VAR_12++;
   break;
  default:
   FUNC_2(1, "test4: unknown option %c", VAR_8[VAR_14]);
  }
 }
 if (VAR_11) {
  struct ufs_args VAR_15;
  VAR_15.fspec = FUNC_0("/diskdev");

  if (FUNC_4(VAR_3, VAR_0,
      VAR_2 | (VAR_13 ? VAR_1 : 0),
      &VAR_15, sizeof(VAR_15)) == -1)
   FUNC_1(1, "mount ffs rw %s", VAR_0);
 }

 if (VAR_12) {




  VAR_10 = FUNC_5("unlinked_file",
      VAR_5| VAR_4 | VAR_6, 0644);
  if (VAR_10 < 0)
   FUNC_1(1, "create %s", "unlinked_file");
  FUNC_9(VAR_9, "test unlinked_file");
  FUNC_8(VAR_10, VAR_9, FUNC_10(VAR_9));
  if (FUNC_7("unlinked_file") == -1)
   FUNC_1(1, "unlink unlinked_file");
  if (FUNC_3(VAR_10) == -1)
   FUNC_1(1, "fsync unlinked_file");
  FUNC_6(VAR_7, ((void*)0));
  FUNC_2(1, "reboot failed");
  return 1;
 }
 return 0;
}
