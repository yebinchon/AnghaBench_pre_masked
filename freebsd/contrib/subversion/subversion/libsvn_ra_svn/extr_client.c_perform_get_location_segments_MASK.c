
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef void* svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
struct TYPE_14__ {int * conn; } ;
typedef TYPE_2__ svn_ra_svn__session_baton_t ;
struct TYPE_13__ {int list; } ;
struct TYPE_15__ {scalar_t__ kind; TYPE_1__ u; } ;
typedef TYPE_3__ svn_ra_svn__item_t ;
struct TYPE_16__ {TYPE_2__* priv; } ;
typedef TYPE_4__ svn_ra_session_t ;
struct TYPE_17__ {char const* path; void* range_end; void* range_start; } ;
typedef TYPE_5__ svn_location_segment_t ;
typedef int (* svn_location_segment_receiver_t ) (TYPE_5__*,void*,int *) ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (void*) ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char*) ;
 TYPE_5__* FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int * FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 int * FUNC_8 (int ,int *,int ) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *,char*,void**,void**,char const**) ;
 int * FUNC_15 (int *,int *,char*) ;
 int * FUNC_16 (int *,int *,TYPE_3__**) ;
 int * FUNC_17 (int *,int *,char*,char*,char const*,void*,void*,void*) ;
 char* FUNC_18 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_19(svn_error_t **VAR_5,
                              svn_ra_session_t *VAR_6,
                              const char *VAR_7,
                              svn_revnum_t VAR_8,
                              svn_revnum_t VAR_9,
                              svn_revnum_t VAR_10,
                              svn_location_segment_receiver_t VAR_11,
                              void *VAR_12,
                              apr_pool_t *VAR_13)
{
  svn_ra_svn__session_baton_t *VAR_14 = VAR_6->priv;
  svn_ra_svn_conn_t *VAR_15 = VAR_14->conn;
  svn_boolean_t VAR_16;
  apr_pool_t *VAR_17 = FUNC_12(VAR_13);


  FUNC_1(FUNC_17(VAR_15, VAR_13, "w(c(?r)(?r)(?r))",
                                  "get-location-segments",
                                  VAR_7, VAR_8, VAR_9, VAR_10));


  FUNC_1(FUNC_6(FUNC_5(VAR_14, VAR_13),
                                 FUNC_0("'get-location-segments'"
                                    " not implemented")));


  VAR_16 = VAR_0;
  while (!VAR_16)
    {
      svn_revnum_t VAR_18, VAR_19;
      svn_ra_svn__item_t *VAR_20;
      const char *VAR_21;

      FUNC_11(VAR_17);
      FUNC_1(FUNC_16(VAR_15, VAR_17, &VAR_20));
      if (FUNC_7(VAR_20))
        VAR_16 = 1;
      else if (VAR_20->kind != VAR_4)
        return FUNC_8(VAR_2, ((void*)0),
                                FUNC_3("Location segment entry not a list"));
      else
        {
          svn_location_segment_t *VAR_22 = FUNC_4(VAR_17,
                                                        sizeof(*VAR_22));
          FUNC_1(FUNC_14(&VAR_20->u.list, "rr(?c)",
                                          &VAR_18, &VAR_19, &VAR_21));
          if (! (FUNC_2(VAR_18)
                 && FUNC_2(VAR_19)))
            return FUNC_8(VAR_2, ((void*)0),
                                    FUNC_3("Expected valid revision range"));
          if (VAR_21)
            VAR_21 = FUNC_18(VAR_21, VAR_17);
          VAR_22->path = VAR_21;
          VAR_22->range_start = VAR_18;
          VAR_22->range_end = VAR_19;

          if (!*VAR_5)
            {
              svn_error_t *VAR_23 = FUNC_10(VAR_11(VAR_22, VAR_12,
                                                          VAR_17));

              if (FUNC_9(VAR_23, VAR_1))
                *VAR_5 = VAR_23;
              else
                FUNC_1(VAR_23);
            }
        }
    }
  FUNC_13(VAR_17);



  FUNC_1(FUNC_15(VAR_15, VAR_13, ""));

  return VAR_3;
}
