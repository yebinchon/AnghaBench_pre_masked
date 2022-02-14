
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (int *,char*,int ) ;
 int VAR_1 ;
 int * FUNC_2 (int ,int ) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__**,int *,char*) ;
 int FUNC_5 (TYPE_1__**,int *,int ,char*,char*,char const*,int ) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_revnum_t VAR_3,
                        apr_pool_t *VAR_4)
{
  svn_stringbuf_t *VAR_5 = FUNC_3(VAR_4);

  if (FUNC_0(VAR_3))
    {
      const char *VAR_6;
      VAR_6 = FUNC_1(VAR_4, "%ld", VAR_3);
      FUNC_5(&VAR_5, VAR_4, VAR_2, "against",
                            "revision", VAR_6, VAR_0);
    }

  FUNC_4(&VAR_5, VAR_4, "target");

  return FUNC_2(VAR_5->data, VAR_1);
}
