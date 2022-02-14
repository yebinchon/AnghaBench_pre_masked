
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ handle; } ;
typedef TYPE_1__ xlate_handle_node_t ;
struct TYPE_10__ {char* data; } ;
typedef TYPE_2__ svn_stringbuf_t ;
struct TYPE_11__ {int len; int data; } ;
typedef TYPE_3__ svn_string_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int ,int ,int *) ;
 int * FUNC_3 (int ,int ,int *) ;
 int * FUNC_4 (TYPE_1__*,int ,int ,TYPE_2__**,int *) ;
 int FUNC_5 (TYPE_1__**,int *) ;
 int FUNC_6 (TYPE_1__*,int ,int *) ;
 int * FUNC_7 (int *,int ) ;

svn_error_t *
FUNC_8(const char **VAR_1,
                                 const svn_string_t *VAR_2,
                                 apr_pool_t *VAR_3)
{
  xlate_handle_node_t *VAR_4;
  svn_error_t *VAR_5;

  FUNC_0(FUNC_5(&VAR_4, VAR_3));

  if (VAR_4->handle)
    {
      VAR_5 = FUNC_3(VAR_2->data, VAR_2->len, VAR_3);
      if (! VAR_5)
        {
          svn_stringbuf_t *VAR_6;

          VAR_5 = FUNC_4(VAR_4, VAR_2->data, VAR_2->len,
                                     &VAR_6, VAR_3);
          if (! VAR_5)
            *VAR_1 = VAR_6->data;
        }
    }
  else
    {
      VAR_5 = FUNC_2(VAR_2->data, VAR_2->len, VAR_3);
      if (! VAR_5)
        *VAR_1 = FUNC_1(VAR_3, VAR_2->data, VAR_2->len);
    }

  VAR_5 = FUNC_7(
          VAR_5,
          FUNC_6(VAR_4, VAR_0, VAR_3));

  return VAR_5;
}
