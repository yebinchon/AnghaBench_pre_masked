
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int * FUNC_3 (int *,char*,int ,int ,int ,int ,int *,int *,int *,int *,int *,int *) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_5 (char const*,int *) ;

__attribute__((used)) static svn_error_t * FUNC_6(svn_boolean_t VAR_2, apr_pool_t *VAR_3)
{
  const char *VAR_4
    = FUNC_1("The following repository back-end (FS) modules are available:\n\n");

  svn_stringbuf_t *VAR_5;

  VAR_5 = FUNC_5(VAR_4, VAR_3);
  FUNC_0(FUNC_2(VAR_5, VAR_3));






  return FUNC_3(((void*)0), "svnserve", VAR_1, VAR_2, VAR_0,
                             VAR_5->data,
                             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_3);
}
