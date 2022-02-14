
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct install_baton_t* baton; } ;
typedef TYPE_1__ svn_stream_t ;
typedef int svn_error_t ;
struct baton_apr {int dummy; } ;
struct install_baton_t {char const* tmp_path; struct baton_apr baton_apr; } ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;
typedef int HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int **,int *,int,int *) ;
 struct install_baton_t* FUNC_4 (int *,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,char const**,char const*,int *,int *) ;
 int VAR_6 ;
 char* FUNC_7 (char const*,int *) ;
 int FUNC_8 (char const*) ;
 int * FUNC_9 (scalar_t__,int *) ;
 int VAR_7 ;
 int FUNC_10 (int **,char const**,char const*,int ,int *,int *) ;
 TYPE_1__* FUNC_11 (int *,int ,int ,int *) ;
 int FUNC_12 (TYPE_1__*,int ) ;

svn_error_t *
FUNC_13(svn_stream_t **VAR_8,
                               const char *VAR_9,
                               apr_pool_t *VAR_10,
                               apr_pool_t *VAR_11)
{
  apr_file_t *VAR_12;
  struct install_baton_t *VAR_13;
  const char *VAR_14;
  FUNC_2(FUNC_8(VAR_9));

  FUNC_1(FUNC_10(&VAR_12, &VAR_14, VAR_9,
                                   VAR_7,
                                   VAR_10, VAR_11));


  *VAR_8 = FUNC_11(VAR_12, VAR_3, VAR_5,
                                             VAR_10);

  VAR_13 = FUNC_4(VAR_10, sizeof(*VAR_13));
  VAR_13->baton_apr = *(struct baton_apr*)(*VAR_8)->baton;

  FUNC_5((void*)&VAR_13->baton_apr == (void*)VAR_13);

  (*VAR_8)->baton = VAR_13;

  VAR_13->tmp_path = VAR_14;


  FUNC_12(*VAR_8, VAR_6);

  return VAR_4;
}
