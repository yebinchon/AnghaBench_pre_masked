
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int new_nd ;
typedef int nd_file ;
typedef int nd ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (char*,int,char const*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int,char*,char*,char*,char const*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 char* VAR_5 ;
 int FUNC_9 (int ,char*,char const*,...) ;

__attribute__((used)) static int FUNC_10(const char *VAR_6, const char *VAR_7, int VAR_8)
{
 int VAR_9;
 char VAR_10[128];
 char VAR_11[64];
 char VAR_12[VAR_3];
 FILE *VAR_13;

 FUNC_7(VAR_12, sizeof(VAR_12), "%s/%s/%s/node_desc",
   VAR_5, VAR_4, VAR_6);
 VAR_12[sizeof(VAR_12)-1] = '\0';

 VAR_13 = FUNC_3(VAR_12, "r+");
 if (!VAR_13) {
  FUNC_9(VAR_1, "Failed to open %s\n", VAR_12);
  return -VAR_0;
 }

 if (!FUNC_2(VAR_10, sizeof(VAR_10), VAR_13)) {
  FUNC_9(VAR_1, "Failed to read %s\n", VAR_12);
  VAR_9 = -VAR_0;
  goto error;
 }
 FUNC_5(VAR_10);

 FUNC_0(VAR_11, sizeof(VAR_11), VAR_6, VAR_7);

 if (!VAR_8 && FUNC_8(VAR_11, VAR_10, sizeof(VAR_11)) == 0) {
  FUNC_9(VAR_2, "%s: no change (%s)\n", VAR_6, VAR_11);
 } else {
  FUNC_9(VAR_2, "%s: change (%s) -> (%s)\n",
   VAR_6, VAR_10, VAR_11);
  FUNC_6(VAR_13);
  FUNC_4(VAR_13, VAR_11);
 }

 VAR_9 = 0;
error:
 FUNC_1(VAR_13);
 return VAR_9;
}
