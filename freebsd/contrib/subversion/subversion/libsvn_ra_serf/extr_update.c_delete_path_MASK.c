
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int body_template; } ;
typedef TYPE_2__ report_context_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__**,char*,char const*,int *) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_1,
            const char *VAR_2,
            apr_pool_t *VAR_3)
{
  report_context_t *VAR_4 = VAR_1;
  svn_stringbuf_t *VAR_5 = ((void*)0);

  FUNC_1(&VAR_5, "S:missing", VAR_2, VAR_3);

  FUNC_0(FUNC_2(VAR_4->body_template, VAR_5->data, &VAR_5->len));

  return VAR_0;
}
