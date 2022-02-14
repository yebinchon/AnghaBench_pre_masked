
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_error_t ;
struct TYPE_7__ {scalar_t__ start_rev; scalar_t__ end_rev; int source_prop_encoding; int quiet; int skip_unchanged; int config; int source_callbacks; int from_url; } ;
typedef TYPE_2__ subcommand_baton_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int * VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,scalar_t__,int ,int ,int ,int ,int*,int *) ;
 int FUNC_6 (int,int ,int *) ;
 int FUNC_7 (int **,TYPE_1__**,int ,int *,int *,int ,TYPE_2__*,int *) ;
 int * FUNC_8 (int ,int *,int ,scalar_t__) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_ra_session_t *VAR_3,
                 subcommand_baton_t *VAR_4, apr_pool_t *VAR_5)
{
  svn_ra_session_t *VAR_6;
  svn_string_t *VAR_7;
  svn_revnum_t VAR_8;
  svn_revnum_t VAR_9 = 1;
  int VAR_10 = 0;

  FUNC_0(FUNC_7(&VAR_6, &VAR_7,
                              VAR_4->from_url, VAR_3,
                              &(VAR_4->source_callbacks), VAR_4->config,
                              VAR_4, VAR_5));


  if (! FUNC_1(VAR_4->start_rev))
    VAR_4->start_rev = FUNC_2(VAR_7->data);
  if (! FUNC_1(VAR_4->end_rev))
    VAR_4->end_rev = FUNC_2(VAR_7->data);


  if (VAR_4->start_rev > FUNC_2(VAR_7->data))
    return FUNC_8
      (VAR_0, ((void*)0),
       FUNC_3("Cannot copy revprops for a revision (%ld) that has not "
         "been synchronized yet"), VAR_4->start_rev);
  if (VAR_4->end_rev > FUNC_2(VAR_7->data))
    return FUNC_8
      (VAR_0, ((void*)0),
       FUNC_3("Cannot copy revprops for a revision (%ld) that has not "
         "been synchronized yet"), VAR_4->end_rev);


  VAR_9 = (VAR_4->start_rev > VAR_4->end_rev) ? -1 : 1;
  for (VAR_8 = VAR_4->start_rev; VAR_8 != VAR_4->end_rev + VAR_9; VAR_8 = VAR_8 + VAR_9)
    {
      int VAR_11;
      FUNC_0(FUNC_4(((void*)0)));
      FUNC_0(FUNC_5(VAR_6, VAR_3, VAR_8, VAR_2,
                            VAR_4->skip_unchanged, VAR_4->quiet,
                            VAR_4->source_prop_encoding, &VAR_11,
                            VAR_5));
      VAR_10 += VAR_11;
    }


  FUNC_0(FUNC_6(VAR_10, 0, VAR_5));

  return VAR_1;
}
