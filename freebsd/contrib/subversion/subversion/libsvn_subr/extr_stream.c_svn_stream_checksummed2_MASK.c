
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_checksum_t ;
typedef int svn_checksum_kind_t ;
typedef int svn_boolean_t ;
struct checksum_stream_baton {int * pool; int read_more; int * proxy; int ** write_checksum; int ** read_checksum; int * write_ctx; int * read_ctx; } ;
typedef int apr_pool_t ;


 struct checksum_stream_baton* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int ,int *) ;
 int * FUNC_2 (struct checksum_stream_baton*,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int VAR_5 ;

svn_stream_t *
FUNC_9(svn_stream_t *VAR_6,
                        svn_checksum_t **VAR_7,
                        svn_checksum_t **VAR_8,
                        svn_checksum_kind_t VAR_9,
                        svn_boolean_t VAR_10,
                        apr_pool_t *VAR_11)
{
  svn_stream_t *VAR_12;
  struct checksum_stream_baton *VAR_13;

  if (VAR_7 == ((void*)0) && VAR_8 == ((void*)0))
    return VAR_6;

  VAR_13 = FUNC_0(VAR_11, sizeof(*VAR_13));
  if (VAR_7)
    VAR_13->read_ctx = FUNC_1(VAR_9, VAR_11);
  else
    VAR_13->read_ctx = ((void*)0);

  if (VAR_8)
    VAR_13->write_ctx = FUNC_1(VAR_9, VAR_11);
  else
    VAR_13->write_ctx = ((void*)0);

  VAR_13->read_checksum = VAR_7;
  VAR_13->write_checksum = VAR_8;
  VAR_13->proxy = VAR_6;
  VAR_13->read_more = VAR_10;
  VAR_13->pool = VAR_11;

  VAR_12 = FUNC_2(VAR_13, VAR_11);
  FUNC_5(VAR_12, VAR_3, VAR_2);
  FUNC_7(VAR_12, VAR_5);
  FUNC_4(VAR_12, VAR_1);
  FUNC_3(VAR_12, VAR_0);
  if (FUNC_8(VAR_6))
    FUNC_6(VAR_12, VAR_4);
  return VAR_12;
}
