
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_repos_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct svnadmin_opt_state {scalar_t__ no_flush_to_disk; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_2__ {scalar_t__ cache_size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int * FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,char const*,int *,int *,int *) ;
 char* FUNC_7 (int *) ;
 int VAR_9 ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_repos_t **VAR_10,
           const char *VAR_11,
           struct svnadmin_opt_state *VAR_12,
           apr_pool_t *VAR_13)
{

  svn_boolean_t VAR_14
    = FUNC_2()->cache_size > VAR_0;


  apr_hash_t *VAR_15 = FUNC_1(VAR_13);
  FUNC_4(VAR_15, VAR_2, "1");
  FUNC_4(VAR_15, VAR_3, "1");
  FUNC_4(VAR_15, VAR_4, "1");
  FUNC_4(VAR_15, VAR_6, "2");
  FUNC_4(VAR_15, VAR_5,
                           FUNC_7(VAR_13));
  FUNC_4(VAR_15, VAR_1,
                           VAR_14 ? "1" : "0");
  FUNC_4(VAR_15, VAR_7,
                           VAR_12->no_flush_to_disk ? "1" : "0");


  FUNC_0(FUNC_6(VAR_10, VAR_11, VAR_15, VAR_13, VAR_13));
  FUNC_3(FUNC_5(*VAR_10), VAR_9, ((void*)0));
  return VAR_8;
}
