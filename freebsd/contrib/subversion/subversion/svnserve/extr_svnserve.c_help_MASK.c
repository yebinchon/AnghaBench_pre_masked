
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {scalar_t__ optch; scalar_t__ name; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,char*,...) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const**,TYPE_1__*,int ,int *) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_5(apr_pool_t *VAR_3)
{
  apr_size_t VAR_4;
  FUNC_3(FUNC_2(FUNC_0("usage: svnserve [-d | -i | -t | -X] "
                                      "[options]\n"
                                      "Subversion repository server.\n"
                                      "Type 'svnserve --version' to see the "
                                      "program version.\n"
                                      "\n"
                                      "Valid options:\n"),
                                      VAR_1, VAR_3));

  for (VAR_4 = 0; VAR_2[VAR_4].name && VAR_2[VAR_4].optch; VAR_4++)
    {
      const char *VAR_5;
      FUNC_4(&VAR_5, VAR_2 + VAR_4, VAR_0, VAR_3);
      FUNC_3(FUNC_1(VAR_1, VAR_3, "  %s\n", VAR_5));
    }
  FUNC_3(FUNC_1(VAR_1, VAR_3, "\n"));
}
