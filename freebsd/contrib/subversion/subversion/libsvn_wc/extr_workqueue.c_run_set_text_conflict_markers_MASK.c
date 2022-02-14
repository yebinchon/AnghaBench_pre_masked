
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int work_item_baton_t ;
typedef int svn_wc__db_t ;
struct TYPE_10__ {scalar_t__ len; int data; struct TYPE_10__* next; TYPE_1__* children; } ;
typedef TYPE_2__ svn_skel_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;
struct TYPE_9__ {TYPE_2__* next; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int *,char const*,char const*,char const*,char const*,int *,int *) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int *,int *,int *,int *) ;
 int FUNC_5 (char const**,int *,char const*,char const*,int *,int *) ;
 int FUNC_6 (int *,char const*,TYPE_2__*,int *,int *) ;
 int FUNC_7 (TYPE_2__**,int *,int *,int *,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(work_item_baton_t *VAR_1,
                              svn_wc__db_t *VAR_2,
                              const svn_skel_t *VAR_3,
                              const char *VAR_4,
                              svn_cancel_func_t VAR_5,
                              void *VAR_6,
                              apr_pool_t *VAR_7)
{
  const svn_skel_t *VAR_8 = VAR_3->children->next;
  const char *VAR_9;
  const char *VAR_10;
  const char *VAR_11 = ((void*)0);
  const char *VAR_12 = ((void*)0);
  const char *VAR_13 = ((void*)0);

  VAR_9 = FUNC_1(VAR_7, VAR_8->data, VAR_8->len);
  FUNC_0(FUNC_5(&VAR_10, VAR_2, VAR_4,
                                  VAR_9, VAR_7, VAR_7));

  VAR_8 = VAR_8->next;
  VAR_9 = VAR_8->len ? FUNC_1(VAR_7, VAR_8->data, VAR_8->len)
                           : ((void*)0);

  if (VAR_9)
    {
      FUNC_0(FUNC_5(&VAR_11, VAR_2, VAR_4,
                                      VAR_9,
                                      VAR_7, VAR_7));
    }

  VAR_8 = VAR_8->next;
  VAR_9 = VAR_8->len ? FUNC_1(VAR_7, VAR_8->data, VAR_8->len)
                           : ((void*)0);
  if (VAR_9)
    {
      FUNC_0(FUNC_5(&VAR_12, VAR_2, VAR_4,
                                      VAR_9,
                                      VAR_7, VAR_7));
    }

  VAR_8 = VAR_8->next;
  VAR_9 = VAR_8->len ? FUNC_1(VAR_7, VAR_8->data, VAR_8->len)
                           : ((void*)0);

  if (VAR_9)
    {
      FUNC_0(FUNC_5(&VAR_13, VAR_2, VAR_4,
                                      VAR_9,
                                      VAR_7, VAR_7));
    }
  {

    svn_skel_t *VAR_14;

    FUNC_0(FUNC_7(&VAR_14, ((void*)0), ((void*)0), VAR_2, VAR_10,
                                     VAR_7, VAR_7));

    if (! VAR_14)
      {

        VAR_14 = FUNC_3(VAR_7);

        FUNC_0(FUNC_4(VAR_14, ((void*)0), ((void*)0),
                                                    VAR_7,
                                                    VAR_7));
      }


    FUNC_0(FUNC_2(VAR_14, VAR_2,
                                                    VAR_10,
                                                    VAR_13,
                                                    VAR_11,
                                                    VAR_12,
                                                    VAR_7,
                                                    VAR_7));

    FUNC_0(FUNC_6(VAR_2, VAR_10, VAR_14,
                                        ((void*)0), VAR_7));
  }
  return VAR_0;
}
