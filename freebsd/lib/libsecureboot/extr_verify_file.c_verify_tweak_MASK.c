
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
typedef scalar_t__ off_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (char*) ;
 unsigned char* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 () ;
 size_t FUNC_8 (unsigned char*,int ) ;
 size_t FUNC_9 (unsigned char*,int ) ;

__attribute__((used)) static void
FUNC_10(int VAR_3, off_t VAR_4, struct stat *VAR_5,
    char *VAR_6, int *VAR_7,
    int *VAR_8, int *VAR_9)
{
 if (FUNC_4(VAR_6, "off") == 0) {
  *VAR_9 = 0;
 } else if (FUNC_4(VAR_6, "strict") == 0) {

  *VAR_7 = VAR_2;
  *VAR_8 = 1;

  if (!FUNC_7()) {
   FUNC_2("verify self tests failed");
  }
 } else if (FUNC_4(VAR_6, "modules") == 0) {

  *VAR_7 = VAR_1;
 } else if (FUNC_4(VAR_6, "try") == 0) {

  *VAR_7 = VAR_1 + 1;
 } else if (FUNC_4(VAR_6, "verbose") == 0) {
  *VAR_8 = 1;
 } else if (FUNC_4(VAR_6, "quiet") == 0) {
  *VAR_8 = 0;
 } else if (FUNC_5(VAR_6, "trust", 5) == 0) {

  unsigned char *VAR_10;
  size_t VAR_11;

  if (VAR_4 > 0)
   FUNC_1(VAR_3, 0, VAR_0);
  VAR_10 = FUNC_3(VAR_3, VAR_5->st_size);
  if (VAR_10 == ((void*)0))
   return;
  if (FUNC_6(VAR_6, "revoke")) {
   VAR_11 = FUNC_9(VAR_10, VAR_5->st_size);
   FUNC_0(3, ("revoked %d trust anchors\n",
    (int) VAR_11));
  } else {
   VAR_11 = FUNC_8(VAR_10, VAR_5->st_size);
   FUNC_0(3, ("added %d trust anchors\n",
    (int) VAR_11));
  }
 }
}
