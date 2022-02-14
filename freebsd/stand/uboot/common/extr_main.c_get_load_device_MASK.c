
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int d_unit; } ;
struct disk_devdesc {int d_slice; int d_partition; TYPE_1__ dd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct disk_devdesc*,char const*,int *) ;
 char* FUNC_1 (char*,int*) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (char*,...) ;
 size_t FUNC_4 (char const*,char*) ;
 size_t FUNC_5 (char const*) ;
 int FUNC_6 (char const*,char**,int) ;
 int FUNC_7 (char const*,char**,int) ;
 char* FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9(int *VAR_4, int *VAR_5, int *VAR_6, int *VAR_7)
{
 struct disk_devdesc VAR_8;
 char *VAR_9;
 const char *VAR_10;
 char *VAR_11;

 *VAR_4 = VAR_0;
 *VAR_5 = -1;
 *VAR_6 = VAR_3;
 *VAR_7 = VAR_2;

 VAR_9 = FUNC_8("loaderdev");
 if (VAR_9 == ((void*)0)) {
  FUNC_3("U-Boot env: loaderdev not set, will probe all devices.\n");
  return;
 }
 FUNC_3("U-Boot env: loaderdev='%s'\n", VAR_9);

 VAR_10 = FUNC_1(VAR_9, VAR_4);
 if (*VAR_4 & VAR_1) {
  size_t VAR_12 = FUNC_5(VAR_10);
  if (FUNC_4(VAR_10, " .") == VAR_12 && FUNC_4(VAR_10, ":") >= VAR_12 - 1 &&
      FUNC_0(&VAR_8, VAR_10, ((void*)0)) == 0) {
   *VAR_5 = VAR_8.dd.d_unit;
   *VAR_6 = VAR_8.d_slice;
   *VAR_7 = VAR_8.d_partition;
   return;
  }
 }


 while (*VAR_10 == ' ')
  VAR_10++;


 if ((*VAR_4 == VAR_0) || (*VAR_10 == '\0')) {
  return;
 }


 if (!FUNC_2(*VAR_10)) {
  *VAR_4 = VAR_0;
  return;
 }


 *VAR_5 = FUNC_6(VAR_10, &VAR_11, 10);
 VAR_10 = VAR_11;


 if (*VAR_10 == '\0') {
  return;
 }


 if (*VAR_10 != ':') {
  *VAR_4 = VAR_0;
  *VAR_5 = -1;
  return;
 }

 VAR_10++;


 if ('\0' == *VAR_10 )
  return;


 if (!(*VAR_4 & VAR_1)) {
  *VAR_4 = VAR_0;
  *VAR_5 = -1;
  return;
 }

 *VAR_6 = FUNC_7(VAR_10, &VAR_11, 10);


 if (VAR_10 == VAR_11) {
  *VAR_4 = VAR_0;
  *VAR_5 = -1;
  *VAR_6 = VAR_3;
  return;
 }

 VAR_10 = VAR_11;


 if (*VAR_10 == '\0')
  return;


 if (*VAR_10 != '.') {
  *VAR_4 = VAR_0;
  *VAR_5 = -1;
  *VAR_6 = VAR_3;
  return;
 }

 VAR_10++;


 if (*VAR_10 == '\0')
  return;

 *VAR_7 = FUNC_6(VAR_10, &VAR_11, 10);
 VAR_10 = VAR_11;


 if (*VAR_11 == '\0')
  return;


 *VAR_4 = VAR_0;
 *VAR_5 = -1;
 *VAR_6 = VAR_3;
 *VAR_7 = VAR_2;
}
