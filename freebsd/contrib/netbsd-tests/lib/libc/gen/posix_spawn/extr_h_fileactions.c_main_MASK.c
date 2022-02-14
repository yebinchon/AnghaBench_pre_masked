
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__ FUNC_3 (int,struct stat*) ;
 char* FUNC_4 () ;
 scalar_t__ FUNC_5 (struct stat*,struct stat*,int) ;
 int FUNC_6 (int,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int,char*,int) ;

int
FUNC_10(int VAR_7, char **VAR_8)
{
 int VAR_9 = VAR_3;
 char VAR_10[VAR_0];
 struct stat VAR_11, VAR_12;

 FUNC_7(VAR_10, "test...");

 if (FUNC_6(3, VAR_10, VAR_0) != -1 || VAR_4 != VAR_1) {
  FUNC_2(VAR_5, "%s: filedesc 3 is not closed\n",
      FUNC_4());
  VAR_9 = VAR_2;
 }

 if (FUNC_6(4, VAR_10, VAR_0) != -1 || VAR_4 != VAR_1) {
  FUNC_2(VAR_5, "%s: filedesc 4 is not closed\n",
      FUNC_4());
  VAR_9 = VAR_2;
 }

 if (FUNC_9(5, VAR_10, VAR_0) <= 0) {
  FUNC_2(VAR_5, "%s: could not write to filedesc 5\n",
      FUNC_4());
  VAR_9 = VAR_2;
 }

 if (FUNC_9(6, VAR_10, VAR_0) <= 0) {
  FUNC_2(VAR_5, "%s: could not write to filedesc 6\n",
      FUNC_4());
  VAR_9 = VAR_2;
 }

 FUNC_0(VAR_6);
 if (FUNC_3(FUNC_1(VAR_6), &VAR_11) != 0) {
  FUNC_2(VAR_5, "%s: could not fstat stdout\n",
      FUNC_4());
  VAR_9 = VAR_2;
 }
 if (FUNC_3(7, &VAR_12) != 0) {
  FUNC_2(VAR_5, "%s: could not fstat filedesc 7\n",
      FUNC_4());
  VAR_9 = VAR_2;
 }
 if (FUNC_9(7, VAR_10, FUNC_8(VAR_10)) <= 0) {
  FUNC_2(VAR_5, "%s: could not write to filedesc 7\n",
      FUNC_4());
  VAR_9 = VAR_2;
 }
 if (FUNC_5(&VAR_11, &VAR_12, sizeof VAR_11) != 0) {
  FUNC_2(VAR_5, "%s: stat results differ\n", FUNC_4());
  VAR_9 = VAR_2;
 }

 return VAR_9;
}
