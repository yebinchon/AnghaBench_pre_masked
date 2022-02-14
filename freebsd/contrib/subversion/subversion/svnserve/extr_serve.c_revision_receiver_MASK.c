
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_string_t ;
struct TYPE_4__ {int has_children; int subtractive_merge; int revprops; int revision; } ;
typedef TYPE_1__ svn_repos_log_entry_t ;
typedef int svn_ra_svn_conn_t ;
typedef int svn_error_t ;
typedef void* svn_boolean_t ;
struct TYPE_5__ {scalar_t__ stack_depth; void* started; int * conn; } ;
typedef TYPE_2__ log_baton_t ;
typedef int apr_pool_t ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int const**,int const**,int const**,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,int *,int ,int const*,int const*,int const*,int ,void*,unsigned int) ;
 int FUNC_8 (int *,int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_9(void *VAR_4,
                  svn_repos_log_entry_t *VAR_5,
                  apr_pool_t *VAR_6)
{
  log_baton_t *VAR_7 = VAR_4;
  svn_ra_svn_conn_t *VAR_8 = VAR_7->conn;
  svn_boolean_t VAR_9 = VAR_0;
  const svn_string_t *VAR_10, *VAR_11, *VAR_12;
  unsigned VAR_13;

  if (VAR_5->revision == VAR_1)
    {


      if (VAR_7->stack_depth == 0)
        return VAR_2;



      VAR_5->revision = 0;
      VAR_9 = VAR_3;
      VAR_7->stack_depth--;
    }

  FUNC_3(&VAR_10, &VAR_11, &VAR_12,
                                     VAR_5->revprops);




  if (VAR_10 && VAR_11 && VAR_12 && FUNC_1(VAR_5->revprops) == 3)
    {
      VAR_13 = 0;
    }
  else
    {
      FUNC_2(VAR_5->revprops);
      if (VAR_5->revprops)
        VAR_13 = FUNC_1(VAR_5->revprops);
      else
        VAR_13 = 0;
    }


  if (!VAR_7->started)
    {
      FUNC_0(FUNC_5(VAR_8, VAR_6));
      FUNC_0(FUNC_5(VAR_8, VAR_6));
    }


  FUNC_0(FUNC_4(VAR_8, VAR_6));
  VAR_7->started = VAR_0;


  FUNC_0(FUNC_7(VAR_8, VAR_6,
                                           VAR_5->revision,
                                           VAR_10, VAR_11, VAR_12,
                                           VAR_5->has_children,
                                           VAR_9, VAR_13));


  FUNC_0(FUNC_5(VAR_8, VAR_6));
  if (VAR_13)
    FUNC_0(FUNC_8(VAR_8, VAR_6,
                                       VAR_5->revprops));
  FUNC_0(FUNC_4(VAR_8, VAR_6));


  FUNC_0(FUNC_6(VAR_8, VAR_6,
                                    VAR_5->subtractive_merge));
  FUNC_0(FUNC_4(VAR_8, VAR_6));

  if (VAR_5->has_children)
    VAR_7->stack_depth++;

  return VAR_2;
}
