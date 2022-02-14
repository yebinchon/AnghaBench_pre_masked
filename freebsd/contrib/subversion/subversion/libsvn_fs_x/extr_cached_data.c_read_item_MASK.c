
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t len; scalar_t__* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_stream_t ;
typedef int svn_fs_x__revision_file_t ;
struct TYPE_7__ {size_t size; scalar_t__ fnv1_checksum; size_t offset; } ;
typedef TYPE_2__ svn_fs_x__p2l_entry_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef scalar_t__ apr_uint32_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,size_t) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__*,size_t) ;
 int * FUNC_5 (unsigned char const*,int *) ;
 int * FUNC_6 (int *,int *,int *,int ,int ,int ) ;
 int FUNC_7 (int *,scalar_t__*,size_t) ;
 int * FUNC_8 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_9 (size_t,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_stream_t **VAR_1,
          svn_fs_t *VAR_2,
          svn_fs_x__revision_file_t *VAR_3,
          svn_fs_x__p2l_entry_t* VAR_4,
          apr_pool_t *VAR_5)
{
  apr_uint32_t VAR_6;
  svn_checksum_t *VAR_7, *VAR_8;
  apr_uint32_t VAR_9;
  svn_stringbuf_t *VAR_10;


  VAR_10 = FUNC_9(VAR_4->size, VAR_5);
  VAR_10->len = VAR_4->size;
  VAR_10->data[VAR_10->len] = 0;
  FUNC_0(FUNC_7(VAR_3, VAR_10->data, VAR_10->len));


  *VAR_1 = FUNC_8(VAR_10, VAR_5);
  VAR_6 = FUNC_4(VAR_10->data, VAR_10->len);


  if (VAR_4->fnv1_checksum == VAR_6)
    return VAR_0;



  VAR_9 = FUNC_3(VAR_4->fnv1_checksum);
  VAR_7 = FUNC_5(
                (const unsigned char *)&VAR_9, VAR_5);
  VAR_9 = FUNC_3(VAR_6);
  VAR_8 = FUNC_5(
                (const unsigned char *)&VAR_9, VAR_5);


  return FUNC_6(VAR_7, VAR_8, VAR_5,
                 FUNC_1("Low-level checksum mismatch while reading\n"
                   "%s bytes of meta data at offset %s "),
                 FUNC_2(VAR_5, VAR_4->size),
                 FUNC_2(VAR_5, VAR_4->offset));
}
