
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_txdelta_window_handler_t ;
typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_2__ {int conn; int * pool; } ;
typedef TYPE_1__ file_revs_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,char*) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int ,int *,char*,...) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (void*,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,void**,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (int ,int *,int *) ;

__attribute__((used)) static svn_error_t *FUNC_11(void *VAR_3, const char *VAR_4,
                                     svn_revnum_t VAR_5, apr_hash_t *VAR_6,
                                     svn_boolean_t VAR_7,
                                     svn_txdelta_window_handler_t *VAR_8,
                                     void **VAR_9,
                                     apr_array_header_t *VAR_10,
                                     apr_pool_t *VAR_11)
{
  file_revs_baton_t *VAR_12 = VAR_3;
  svn_stream_t *VAR_13;

  FUNC_0(FUNC_4(VAR_12->conn, VAR_11, "cr(!",
                                  VAR_4, VAR_5));
  FUNC_0(FUNC_3(VAR_12->conn, VAR_11, VAR_6));
  FUNC_0(FUNC_4(VAR_12->conn, VAR_11, "!)(!"));
  FUNC_0(FUNC_10(VAR_12->conn, VAR_11, VAR_10));
  FUNC_0(FUNC_4(VAR_12->conn, VAR_11, "!)b", VAR_7));


  VAR_12->pool = VAR_11;


  if (VAR_8)
    {
      VAR_13 = FUNC_6(VAR_3, VAR_11);
      FUNC_8(VAR_13, VAR_2);
      FUNC_7(VAR_13, VAR_1);

      FUNC_9(VAR_8, VAR_9, VAR_13,
                              FUNC_1(VAR_12->conn),
                              FUNC_5(VAR_12->conn), VAR_11);
    }
  else
    FUNC_0(FUNC_2(VAR_12->conn, VAR_11, ""));

  return VAR_0;
}
