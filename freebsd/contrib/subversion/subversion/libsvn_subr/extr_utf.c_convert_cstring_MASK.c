
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ handle; } ;
typedef TYPE_1__ xlate_handle_node_t ;
struct TYPE_7__ {char* data; } ;
typedef TYPE_2__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (int *,char const*,int ) ;
 int FUNC_2 (char const*,int ,int *) ;
 int FUNC_3 (TYPE_1__*,char const*,int ,TYPE_2__**,int *) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char **VAR_1,
                const char *VAR_2,
                xlate_handle_node_t *VAR_3,
                apr_pool_t *VAR_4)
{
  if (VAR_3->handle)
    {
      svn_stringbuf_t *VAR_5;
      FUNC_0(FUNC_3(VAR_3, VAR_2, FUNC_4(VAR_2),
                                   &VAR_5, VAR_4));
      *VAR_1 = VAR_5->data;
    }
  else
    {
      apr_size_t VAR_6 = FUNC_4(VAR_2);
      FUNC_0(FUNC_2(VAR_2, VAR_6, VAR_4));
      *VAR_1 = FUNC_1(VAR_4, VAR_2, VAR_6);
    }
  return VAR_0;
}
