
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int dp_spa; } ;
typedef TYPE_2__ dsl_pool_t ;
struct TYPE_8__ {TYPE_1__* ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
struct TYPE_6__ {TYPE_2__* dd_pool; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_1 (TYPE_3__*,int ,int,int ,char*,char*) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ,char*,char*,char*,...) ;
 int FUNC_5 (int ,char*,int ) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char const*,char*,int) ;
 int FUNC_9 (int ) ;

int
FUNC_10(dsl_dataset_t *VAR_4, const char *VAR_5, char *VAR_6,
    char *VAR_7)
{
 int VAR_8;
 dsl_pool_t *VAR_9 = VAR_4->ds_dir->dd_pool;


 VAR_8 = FUNC_1(VAR_4, FUNC_9(VAR_2), 1,
     VAR_1, VAR_6, VAR_7);
 if (VAR_8 != 0) {
  return (VAR_8);
 }





 if (VAR_6[0] == '/') {
  char *VAR_10 = FUNC_2(VAR_1, VAR_0);
  char *VAR_11 = VAR_10;
  const char *VAR_12;
  if (FUNC_6(VAR_7, VAR_3) == 0) {
   VAR_12 = "";
  } else {
   FUNC_0(FUNC_8(VAR_5, VAR_7, FUNC_7(VAR_7)));
   VAR_12 = VAR_5 + FUNC_7(VAR_7);
   if (VAR_12[0] == '/')
    VAR_12++;
  }

  FUNC_5(VAR_9->dp_spa, VAR_11, VAR_1);






  if (FUNC_6(VAR_11, "/") == 0)
   VAR_11++;






  char *VAR_13 = VAR_6;
  if (VAR_6[1] == '\0' && (VAR_11[0] != '\0' ||
      VAR_12[0] != '\0'))
   VAR_13 = VAR_6 + 1;

  if (VAR_12[0] == '\0') {
   (void) FUNC_4(VAR_6, VAR_1, "%s%s",
       VAR_11, VAR_13);
  } else {
   (void) FUNC_4(VAR_6, VAR_1, "%s%s%s%s",
       VAR_11, VAR_13, VAR_12[0] == '@' ? "" : "/",
       VAR_12);
  }
  FUNC_3(VAR_10, VAR_1);
 }

 return (0);
}
