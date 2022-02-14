
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int name; scalar_t__ value; } ;
typedef TYPE_1__ svn_prop_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
struct TYPE_7__ {scalar_t__ old_props; int prop_changes; } ;
typedef TYPE_2__ proppatch_context_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int * VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int *,int *,char*) ;
 int FUNC_7 (int *,int *,char*,char*,...) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (TYPE_2__*,int *,int *,TYPE_1__*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(serf_bucket_t **VAR_7,
                      void *VAR_8,
                      serf_bucket_alloc_t *VAR_9,
                      apr_pool_t *VAR_10 ,
                      apr_pool_t *VAR_11)
{
  proppatch_context_t *VAR_12 = VAR_8;
  serf_bucket_t *VAR_13;
  svn_boolean_t VAR_14 = VAR_0;
  apr_hash_index_t *VAR_15;

  VAR_13 = FUNC_4(VAR_9);

  FUNC_8(VAR_13, VAR_9);
  FUNC_7(VAR_13, VAR_9, "D:propertyupdate",
                                    "xmlns:D", "DAV:",
                                    "xmlns:V", VAR_2,
                                    "xmlns:C", VAR_1,
                                    "xmlns:S", VAR_3,
                                    VAR_5);


  for (VAR_15 = FUNC_1(VAR_11, VAR_12->prop_changes);
       VAR_15;
       VAR_15 = FUNC_2(VAR_15))
    {
      svn_prop_t *VAR_16 = FUNC_3(VAR_15);

      if (VAR_16->value
          || (VAR_12->old_props && FUNC_5(VAR_12->old_props, VAR_16->name)))
        {
          if (!VAR_14)
            {
              VAR_14 = VAR_6;
              FUNC_7(VAR_13, VAR_9, "D:set",
                                                VAR_5);
              FUNC_7(VAR_13, VAR_9, "D:prop",
                                                VAR_5);
            }

          FUNC_0(FUNC_9(VAR_12, VAR_13, VAR_9, VAR_16,
                                 VAR_10, VAR_11));
        }
    }

  if (VAR_14)
    {
      FUNC_6(VAR_13, VAR_9, "D:prop");
      FUNC_6(VAR_13, VAR_9, "D:set");
    }


  VAR_14 = VAR_0;

  for (VAR_15 = FUNC_1(VAR_11, VAR_12->prop_changes);
       VAR_15;
       VAR_15 = FUNC_2(VAR_15))
    {
      svn_prop_t *VAR_17 = FUNC_3(VAR_15);

      if (!VAR_17->value
          && !(VAR_12->old_props && FUNC_5(VAR_12->old_props, VAR_17->name)))
        {
          if (!VAR_14)
            {
              VAR_14 = VAR_6;
              FUNC_7(VAR_13, VAR_9, "D:remove",
                                                VAR_5);
              FUNC_7(VAR_13, VAR_9, "D:prop",
                                                VAR_5);
            }

          FUNC_0(FUNC_9(VAR_12, VAR_13, VAR_9, VAR_17,
                                 VAR_10, VAR_11));
        }
    }

  if (VAR_14)
    {
      FUNC_6(VAR_13, VAR_9, "D:prop");
      FUNC_6(VAR_13, VAR_9, "D:remove");
    }

  FUNC_6(VAR_13, VAR_9, "D:propertyupdate");

  *VAR_7 = VAR_13;
  return VAR_4;
}
