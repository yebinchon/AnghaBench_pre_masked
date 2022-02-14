
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_8__ {int ra_session; int pool; TYPE_5__* root_op; int base_revision; } ;
typedef TYPE_1__ svn_client__mtcc_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_9__ {scalar_t__ kind; void* performed_stat; } ;
typedef TYPE_2__ mtcc_op_t ;
typedef int apr_pool_t ;
struct TYPE_10__ {int * children; scalar_t__ kind; void* performed_stat; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 () ;
 int * VAR_8 ;
 scalar_t__ FUNC_4 (char const*) ;
 void* VAR_9 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char const**,int *,char const*,void*,TYPE_1__*,int *,int *) ;
 int FUNC_7 (TYPE_2__**,int *,char const*,TYPE_5__*,void*,int ,int ,int ,int *) ;
 int * FUNC_8 (int ,int *,int ,char const*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_9 (int ,char const*,int ,scalar_t__*,int *) ;
 int FUNC_10 (char const*) ;

svn_error_t *
FUNC_11(svn_node_kind_t *VAR_13,
                            const char *VAR_14,
                            svn_boolean_t VAR_15,
                            svn_client__mtcc_t *VAR_16,
                            apr_pool_t *VAR_17)
{
  const char *VAR_18;
  svn_revnum_t VAR_19;
  mtcc_op_t *VAR_20;

  FUNC_2(FUNC_10(VAR_14));

  if (FUNC_4(VAR_14) && FUNC_0(VAR_16)
      && !VAR_16->root_op->performed_stat)
    {

      FUNC_1(FUNC_9(VAR_16->ra_session, "", VAR_16->base_revision,
                                VAR_13, VAR_17));

      VAR_16->root_op->performed_stat = VAR_9;
      if (*VAR_13 == VAR_11)
        {
          VAR_16->root_op->kind = VAR_4;
          VAR_16->root_op->children = ((void*)0);
        }
      return VAR_8;
    }

  FUNC_1(FUNC_7(&VAR_20, ((void*)0), VAR_14, VAR_16->root_op, VAR_9, VAR_0,
                       VAR_0, VAR_16->pool, VAR_17));

  if (!VAR_20 || (VAR_15 && !VAR_20->performed_stat))
    {
      FUNC_1(FUNC_6(&VAR_18, &VAR_19,
                              VAR_14, VAR_9, VAR_16,
                              VAR_17, VAR_17));

      if (!VAR_18)
        *VAR_13 = VAR_12;
      else
        FUNC_1(FUNC_9(VAR_16->ra_session, VAR_18,
                                  VAR_19, VAR_13, VAR_17));

      if (VAR_20 && *VAR_13 == VAR_10)
        {
          if (VAR_20->kind == VAR_3 || VAR_20->kind == VAR_1)
            VAR_20->performed_stat = VAR_9;
          else if (VAR_20->kind == VAR_4 || VAR_20->kind == VAR_2)
            return FUNC_8(VAR_6, ((void*)0),
                                     FUNC_5("Can't perform file operation "
                                       "on '%s' as it is not a file"),
                                     VAR_14);
        }
      else if (VAR_20 && *VAR_13 == VAR_11)
        {
          if (VAR_20->kind == VAR_4 || VAR_20->kind == VAR_2)
            VAR_20->performed_stat = VAR_9;
          else if (VAR_20->kind == VAR_3 || VAR_20->kind == VAR_1)
            return FUNC_8(VAR_5, ((void*)0),
                                     FUNC_5("Can't perform directory operation "
                                       "on '%s' as it is not a directory"),
                                     VAR_14);
        }
      else if (VAR_20 && (VAR_20->kind == VAR_3 || VAR_20->kind == VAR_4))
        {
          return FUNC_8(VAR_7, ((void*)0),
                                   FUNC_5("Can't open '%s' as it does not exist"),
                                   VAR_14);
        }

      return VAR_8;
    }


  if (VAR_20->kind == VAR_3 || VAR_20->kind == VAR_1)
    {
      *VAR_13 = VAR_10;
      return VAR_8;
    }
  else if (VAR_20->kind == VAR_4 || VAR_20->kind == VAR_2)
    {
      *VAR_13 = VAR_11;
      return VAR_8;
    }
  FUNC_3();
}
