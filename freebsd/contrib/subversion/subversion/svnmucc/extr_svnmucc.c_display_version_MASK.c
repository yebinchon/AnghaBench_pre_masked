
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int ,int ,int ,int ,int *,int *,int *,int *,int *,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_3 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(apr_pool_t *VAR_3)
{
  const char *VAR_4
    = "The following repository access (RA) modules are available:\n\n";
  svn_stringbuf_t *VAR_5;

  VAR_5 = FUNC_3(VAR_4, VAR_3);
  FUNC_0(FUNC_2(VAR_5, VAR_3));

  FUNC_0(FUNC_1(((void*)0), "svnmucc", VAR_2, VAR_0, VAR_0,
                              VAR_5->data,
                              ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_3));

  return VAR_1;
}
