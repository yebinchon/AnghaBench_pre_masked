
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,int *) ;
 int * FUNC_3 (int *,int ,int ,int ,int ,int ,int *,int *,int *,int *,int *,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_5 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(const char *VAR_2,
        svn_boolean_t VAR_3,
        apr_pool_t *VAR_4)
{
  svn_stringbuf_t *VAR_5 =
    FUNC_5(FUNC_1("The following repository access (RA) modules "
                           "are available:\n\n"),
                         VAR_4);

  FUNC_0(FUNC_4(VAR_5, VAR_4));
  return FUNC_3(((void*)0), FUNC_2(VAR_2, VAR_4),
                             VAR_1, VAR_3, VAR_0, VAR_5->data,
                             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_4);
}
