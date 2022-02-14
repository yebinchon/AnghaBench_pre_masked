
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_13__ {int flags; int refcount; int env; int key; } ;
typedef TYPE_1__ bdb_env_t ;
typedef int bdb_env_key_t ;
struct TYPE_14__ {TYPE_4__* error_info; TYPE_1__* bdb; int env; } ;
typedef TYPE_2__ bdb_env_baton_t ;
typedef int apr_pool_t ;
struct TYPE_15__ {int refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int ,int *,int,TYPE_1__*) ;
 TYPE_2__* FUNC_2 (int *,int) ;
 int VAR_4 ;
 int FUNC_3 (int *,TYPE_2__*,int ,int ) ;
 int VAR_5 ;
 TYPE_1__* FUNC_4 (int *,scalar_t__*) ;
 int FUNC_5 (int *,int *,char const*,int *) ;
 int VAR_6 ;
 int FUNC_6 (TYPE_1__*) ;
 int * FUNC_7 (TYPE_1__*,int,int) ;
 int VAR_7 ;
 int FUNC_8 (TYPE_1__**,char const*,int ) ;
 char* FUNC_9 (int ) ;
 TYPE_4__* FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ) ;
 int * FUNC_12 (int ,int *,char*) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_15(bdb_env_baton_t **VAR_8,
                          const char *VAR_9,
                          u_int32_t VAR_10, int VAR_11,
                          apr_pool_t *VAR_12)
{
  bdb_env_key_t VAR_13;
  bdb_env_t *VAR_14;
  svn_boolean_t VAR_15;







  FUNC_0(FUNC_5(&VAR_13, ((void*)0), VAR_9, VAR_12));

  VAR_14 = FUNC_4(&VAR_13, &VAR_15);
  if (VAR_15)
    return FUNC_12(VAR_2, ((void*)0),
                            FUNC_9(VAR_1));


  if (VAR_14 && VAR_14->flags != VAR_10)
    {

      if ((VAR_10 ^ VAR_14->flags) & VAR_0)
        {
          if (VAR_10 & VAR_0)
            return FUNC_12(VAR_2, ((void*)0),
                                    "Reopening a public Berkeley DB"
                                    " environment with private attributes");
          else
            return FUNC_12(VAR_2, ((void*)0),
                                    "Reopening a private Berkeley DB"
                                    " environment with public attributes");
        }


      return FUNC_12(VAR_2, ((void*)0),
                              "Reopening a Berkeley DB environment"
                              " with different attributes");
    }

  if (!VAR_14)
    {
      svn_error_t *VAR_16;

      FUNC_0(FUNC_8(&VAR_14, VAR_9, FUNC_14(VAR_6)));
      VAR_16 = FUNC_7(VAR_14, VAR_10, VAR_11);
      if (VAR_16)
        {

          FUNC_11(FUNC_6(VAR_14));
          return FUNC_13(VAR_16);
        }

      FUNC_1(VAR_5, &VAR_14->key, sizeof VAR_14->key, VAR_14);
      VAR_14->flags = VAR_10;
      VAR_14->refcount = 1;
    }
  else
    {
      ++VAR_14->refcount;
    }

  *VAR_8 = FUNC_2(VAR_12, sizeof **VAR_8);
  (*VAR_8)->env = VAR_14->env;
  (*VAR_8)->bdb = VAR_14;
  (*VAR_8)->error_info = FUNC_10(VAR_14);
  ++(*VAR_8)->error_info->refcount;
  FUNC_3(VAR_12, *VAR_8, VAR_7,
                            VAR_4);

  return VAR_3;
}
