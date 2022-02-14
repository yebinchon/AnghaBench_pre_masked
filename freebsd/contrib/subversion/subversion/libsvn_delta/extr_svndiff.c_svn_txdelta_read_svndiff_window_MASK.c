
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_txdelta_window_t ;
typedef int svn_stream_t ;
typedef int svn_filesize_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (int *,int) ;
 int * FUNC_3 (int *,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,unsigned char*,int *,int) ;
 int FUNC_4 (int *,int *,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int * FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int *,char*,scalar_t__*) ;

svn_error_t *
FUNC_7(svn_txdelta_window_t **VAR_1,
                                svn_stream_t *VAR_2,
                                int VAR_3,
                                apr_pool_t *VAR_4)
{
  svn_filesize_t VAR_5;
  apr_size_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
  unsigned char *VAR_12;

  FUNC_0(FUNC_4(VAR_2, &VAR_5, &VAR_6, &VAR_7,
                             &VAR_8, &VAR_9, &VAR_11));
  VAR_10 = VAR_8 + VAR_9;
  VAR_12 = FUNC_2(VAR_4, VAR_10);
  FUNC_0(FUNC_6(VAR_2, (char*)VAR_12, &VAR_10));
  if (VAR_10 < VAR_8 + VAR_9)
    return FUNC_5(VAR_0, ((void*)0),
                            FUNC_1("Unexpected end of svndiff input"));
  *VAR_1 = FUNC_2(VAR_4, sizeof(**VAR_1));
  return FUNC_3(*VAR_1, VAR_5, VAR_6, VAR_7, VAR_8,
                       VAR_9, VAR_12, VAR_4, VAR_3);
}
