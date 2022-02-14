
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ handle; } ;
typedef TYPE_1__ xlate_handle_node_t ;
struct TYPE_15__ {int len; int data; } ;
typedef TYPE_2__ svn_stringbuf_t ;
struct TYPE_16__ {int len; int data; } ;
typedef TYPE_3__ svn_string_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int ,int ,int *) ;
 int * FUNC_2 (int ,int ,int *) ;
 int * FUNC_3 (TYPE_1__*,int ,int ,TYPE_2__**,int *) ;
 int FUNC_4 (TYPE_1__**,int *) ;
 int FUNC_5 (TYPE_1__*,int ,int *) ;
 int * FUNC_6 (int *,int ) ;
 TYPE_3__* FUNC_7 (TYPE_3__ const*,int *) ;
 TYPE_3__* FUNC_8 (TYPE_2__*) ;

svn_error_t *
FUNC_9(const svn_string_t **VAR_1,
                       const svn_string_t *VAR_2,
                       apr_pool_t *VAR_3)
{
  svn_stringbuf_t *VAR_4;
  xlate_handle_node_t *VAR_5;
  svn_error_t *VAR_6;

  FUNC_0(FUNC_4(&VAR_5, VAR_3));

  if (VAR_5->handle)
    {
      VAR_6 = FUNC_3(VAR_5, VAR_2->data, VAR_2->len, &VAR_4, VAR_3);
      if (! VAR_6)
        VAR_6 = FUNC_2(VAR_4->data, VAR_4->len, VAR_3);
      if (! VAR_6)
        *VAR_1 = FUNC_8(VAR_4);
    }
  else
    {
      VAR_6 = FUNC_1(VAR_2->data, VAR_2->len, VAR_3);
      if (! VAR_6)
        *VAR_1 = FUNC_7(VAR_2, VAR_3);
    }

  return FUNC_6(VAR_6,
                                  FUNC_5
                                     (VAR_5,
                                      VAR_0,
                                      VAR_3));
}
