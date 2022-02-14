
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_wc__db_t ;
struct TYPE_11__ {TYPE_1__* children; } ;
typedef TYPE_2__ svn_skel_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_10__ {TYPE_2__* next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 char const* VAR_1 ;
 int FUNC_2 (TYPE_2__**,TYPE_2__*,char const*) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_5 (char const*,TYPE_2__*,int *) ;
 int FUNC_6 (char const**,int *,char const*,char const*,int *,int *) ;

svn_error_t *
FUNC_7(svn_skel_t *VAR_2,
                                        svn_wc__db_t *VAR_3,
                                        const char *VAR_4,
                                        const char *VAR_5,
                                        const char *VAR_6,
                                        const char *VAR_7,
                                        apr_pool_t *VAR_8,
                                        apr_pool_t *VAR_9)
{
  svn_skel_t *VAR_10;
  svn_skel_t *VAR_11;

  FUNC_0(FUNC_2(&VAR_10, VAR_2,
                                 VAR_1));

  FUNC_1(!VAR_10);





  VAR_10 = FUNC_3(VAR_8);
  VAR_11 = FUNC_3(VAR_8);

if (VAR_7)
    {
      const char *VAR_12;

      FUNC_0(FUNC_6(&VAR_12,
                                    VAR_3, VAR_4, VAR_7,
                                    VAR_8, VAR_9));
      FUNC_5(VAR_12, VAR_11, VAR_8);
    }
  else
    FUNC_4(FUNC_3(VAR_8), VAR_11);

  if (VAR_5)
    {
      const char *VAR_13;

      FUNC_0(FUNC_6(&VAR_13,
                                    VAR_3, VAR_4, VAR_5,
                                    VAR_8, VAR_9));
      FUNC_5(VAR_13, VAR_11, VAR_8);
    }
  else
    FUNC_4(FUNC_3(VAR_8), VAR_11);

  if (VAR_6)
    {
      const char *VAR_14;

      FUNC_0(FUNC_6(&VAR_14,
                                    VAR_3, VAR_4, VAR_6,
                                    VAR_8, VAR_9));
      FUNC_5(VAR_14, VAR_11, VAR_8);
    }
  else
    FUNC_4(FUNC_3(VAR_8), VAR_11);

  FUNC_4(VAR_11, VAR_10);
  FUNC_5(VAR_1, VAR_10,
                        VAR_8);


  FUNC_4(VAR_10, VAR_2->children->next);

  return VAR_0;
}
