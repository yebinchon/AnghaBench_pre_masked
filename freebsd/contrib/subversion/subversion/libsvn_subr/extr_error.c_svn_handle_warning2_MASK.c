
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int apr_err; int pool; } ;
typedef TYPE_1__ svn_error_t ;
typedef int buf ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,char*,char const*,char const*,...) ;
 int FUNC_3 (TYPE_1__ const*,char*,int) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;

void
FUNC_6(FILE *VAR_0, const svn_error_t *VAR_1, const char *VAR_2)
{
  char VAR_3[256];
  FUNC_4(FUNC_2
                  (VAR_0, VAR_1->pool,
                   FUNC_0("%swarning: W%06d: %s\n"),
                   VAR_2, VAR_1->apr_err,
                   FUNC_3(VAR_1, VAR_3, sizeof(VAR_3))));
  FUNC_1(VAR_0);
}
