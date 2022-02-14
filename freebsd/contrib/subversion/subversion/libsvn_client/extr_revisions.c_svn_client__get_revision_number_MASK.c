
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int svn_wc_context_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_ra_session_t ;
struct TYPE_15__ {scalar_t__ number; int date; } ;
struct TYPE_16__ {int kind; TYPE_1__ value; } ;
typedef TYPE_2__ svn_opt_revision_t ;
struct TYPE_17__ {int apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 TYPE_3__* VAR_6 ;
 int VAR_7 ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (char const*,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (int ,int *,int *) ;
 TYPE_3__* FUNC_6 (int ,int *,int *,int ) ;
 int FUNC_7 (char const*) ;
 TYPE_3__* FUNC_8 (int *,scalar_t__*,int ,int *) ;
 TYPE_3__* FUNC_9 (int *,scalar_t__*,int *) ;
 TYPE_3__* FUNC_10 (scalar_t__*,int *,int *,int *,char const*,int *,int *) ;
 TYPE_3__* FUNC_11 (int *,scalar_t__*,int *,int *,int *,int *,int *,int *,char const*,int ,int *,int *) ;

svn_error_t *
FUNC_12(svn_revnum_t *VAR_8,
                                svn_revnum_t *VAR_9,
                                svn_wc_context_t *VAR_10,
                                const char *VAR_11,
                                svn_ra_session_t *VAR_12,
                                const svn_opt_revision_t *VAR_13,
                                apr_pool_t *VAR_14)
{
  switch (VAR_13->kind)
    {
    case 129:
      *VAR_8 = VAR_5;
      break;

    case 131:
      *VAR_8 = VAR_13->value.number;
      break;

    case 132:




      if (VAR_9 && FUNC_1(*VAR_9))
        {
          *VAR_8 = *VAR_9;
        }
      else
        {
          if (! VAR_12)
            return FUNC_5(VAR_1,
                                    ((void*)0), ((void*)0));
          FUNC_0(FUNC_9(VAR_12, VAR_8, VAR_14));
          if (VAR_9)
            *VAR_9 = *VAR_8;
        }
      break;

    case 128:
    case 135:
      {
        svn_error_t *VAR_15;


        if (VAR_11 == ((void*)0))
          return FUNC_5(VAR_2,
                                  ((void*)0), ((void*)0));



        if (FUNC_7(VAR_11))
          return FUNC_5(VAR_0, ((void*)0),
                                  FUNC_2("PREV, BASE, or COMMITTED revision "
                                    "keywords are invalid for URL"));

        VAR_15 = FUNC_11(((void*)0), VAR_8, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                      ((void*)0),
                                      VAR_10, VAR_11, VAR_7,
                                      VAR_14, VAR_14);



        if (VAR_15 && VAR_15->apr_err == VAR_4)
          {
            FUNC_4(VAR_15);
            return FUNC_6(VAR_3, ((void*)0),
                                     FUNC_2("'%s' is not under version control"),
                                     FUNC_3(VAR_11,
                                                            VAR_14));
          }
        else
          FUNC_0(VAR_15);

        if (! FUNC_1(*VAR_8))
          return FUNC_6(VAR_0, ((void*)0),
                                   FUNC_2("Path '%s' has no committed "
                                     "revision"),
                                   FUNC_3(VAR_11,
                                                          VAR_14));
      }
      break;

    case 134:
    case 130:
      {

        if (VAR_11 == ((void*)0))
          return FUNC_5(VAR_2,
                                  ((void*)0), ((void*)0));



        if (FUNC_7(VAR_11))
          return FUNC_5(VAR_0, ((void*)0),
                                  FUNC_2("PREV, BASE, or COMMITTED revision "
                                    "keywords are invalid for URL"));

        FUNC_0(FUNC_10(VAR_8, ((void*)0), ((void*)0),
                                              VAR_10, VAR_11,
                                              VAR_14, VAR_14));
        if (! FUNC_1(*VAR_8))
          return FUNC_6(VAR_0, ((void*)0),
                                   FUNC_2("Path '%s' has no committed "
                                     "revision"),
                                   FUNC_3(VAR_11,
                                                          VAR_14));

        if (VAR_13->kind == 130)
          (*VAR_8)--;
      }
      break;

    case 133:
      if (! VAR_12)
        return FUNC_5(VAR_1, ((void*)0), ((void*)0));
      FUNC_0(FUNC_8(VAR_12, VAR_8,
                                        VAR_13->value.date, VAR_14));
      break;

    default:
      return FUNC_6(VAR_0, ((void*)0),
                               FUNC_2("Unrecognized revision type requested for "
                                 "'%s'"),
                               FUNC_3(VAR_11,
                                                      VAR_14));
    }





  if (VAR_9
      && (VAR_13->kind == 132
          || VAR_13->kind == 133)
      && FUNC_1(*VAR_9)
      && FUNC_1(*VAR_8)
      && (*VAR_8 > *VAR_9))
    *VAR_8 = *VAR_9;

  return VAR_6;
}
