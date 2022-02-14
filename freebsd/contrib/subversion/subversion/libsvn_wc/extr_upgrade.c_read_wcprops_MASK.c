
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_stream_t ;
struct TYPE_14__ {int apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int *,int ,int *,int *,int *) ;
 int FUNC_5 (char const*,int *) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 (int ,int *,int ,int ) ;
 TYPE_2__* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 TYPE_2__* FUNC_10 (int *,TYPE_1__**,char*,scalar_t__*,int *) ;
 TYPE_2__* FUNC_11 (int **,char const*,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(apr_hash_t **VAR_4,
             const char *VAR_5,
             apr_pool_t *VAR_6,
             apr_pool_t *VAR_7)
{
  svn_stream_t *VAR_8;
  svn_error_t *VAR_9;

  *VAR_4 = FUNC_3(VAR_6);

  VAR_9 = FUNC_11(&VAR_8, VAR_5,
                                VAR_3,
                                VAR_7, VAR_7);


  if (VAR_9 && FUNC_0(VAR_9->apr_err))
    {
      FUNC_6(VAR_9);
      return VAR_1;
    }
  FUNC_1(VAR_9);


  FUNC_1(FUNC_4(*VAR_4, VAR_2, VAR_8,
                            VAR_6, VAR_7));


  while (1729)
    {
      svn_stringbuf_t *VAR_10;
      svn_boolean_t VAR_11;

      FUNC_1(FUNC_10(VAR_8, &VAR_10, "\n", &VAR_11, VAR_6));
      if (VAR_11)
        {
          if (VAR_10->len > 0)
            return FUNC_7
              (VAR_0, ((void*)0),
               FUNC_2("Missing end of line in wcprops file for '%s'"),
               FUNC_5(VAR_5, VAR_7));
          break;
        }
      FUNC_1(FUNC_4(*VAR_4, VAR_10->data, VAR_8,
                                VAR_6, VAR_7));
    }

  return FUNC_8(FUNC_9(VAR_8));
}
