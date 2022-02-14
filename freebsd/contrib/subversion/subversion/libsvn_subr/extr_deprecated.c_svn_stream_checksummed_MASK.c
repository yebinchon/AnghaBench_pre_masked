
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_boolean_t ;
struct md5_stream_baton {unsigned char const** read_digest; unsigned char const** write_digest; int write_checksum; int read_checksum; int proxy; int * pool; } ;
typedef int apr_pool_t ;


 struct md5_stream_baton* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *,int *,int ,int ,int *) ;
 int * FUNC_2 (struct md5_stream_baton*,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int VAR_5 ;

svn_stream_t *
FUNC_7(svn_stream_t *VAR_6,
                       const unsigned char **VAR_7,
                       const unsigned char **VAR_8,
                       svn_boolean_t VAR_9,
                       apr_pool_t *VAR_10)
{
  svn_stream_t *VAR_11;
  struct md5_stream_baton *VAR_12;

  if (! VAR_7 && ! VAR_8)
    return VAR_6;

  VAR_12 = FUNC_0(VAR_10, sizeof(*VAR_12));
  VAR_12->read_digest = VAR_7;
  VAR_12->write_digest = VAR_8;
  VAR_12->pool = VAR_10;



  VAR_12->proxy
    = FUNC_1(VAR_6,
                              VAR_7 ? &VAR_12->read_checksum : ((void*)0),
                              VAR_8 ? &VAR_12->write_checksum : ((void*)0),
                              VAR_4,
                              VAR_9, VAR_10);




  VAR_11 = FUNC_2(VAR_12, VAR_10);
  FUNC_4(VAR_11, VAR_2, VAR_1);
  FUNC_5(VAR_11, VAR_3);
  FUNC_6(VAR_11, VAR_5);
  FUNC_3(VAR_11, VAR_0);
  return VAR_11;
}
