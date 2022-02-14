
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; scalar_t__* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int apr_uint64_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__*,unsigned char const*,int) ;
 unsigned char* FUNC_2 (int*,unsigned char const*,unsigned char const*) ;
 int FUNC_3 (int,char*,int ) ;
 int * FUNC_4 (int ,int *,int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (unsigned char*,unsigned long*,unsigned char const*,int) ;

__attribute__((used)) static svn_error_t *
FUNC_8(const unsigned char *VAR_3, apr_size_t VAR_4, svn_stringbuf_t *VAR_5,
            apr_size_t VAR_6)
{
  apr_size_t VAR_7;
  apr_uint64_t VAR_8;
  const unsigned char *VAR_9 = VAR_3;


  VAR_3 = FUNC_2(&VAR_8, VAR_3, VAR_3 + VAR_4);
  VAR_7 = (apr_size_t)VAR_8;
  if (VAR_3 == ((void*)0) || VAR_7 != VAR_8)
    return FUNC_4(VAR_0, ((void*)0),
                            FUNC_0("Decompression of zlib compressed data failed: no size"));
  if (VAR_7 > VAR_6)
    return FUNC_4(VAR_0, ((void*)0),
                            FUNC_0("Decompression of zlib compressed data failed: "
                              "size too large"));



  VAR_4 -= (VAR_3 - VAR_9);
  if (VAR_4 == VAR_7)
    {
      FUNC_6(VAR_5, VAR_7);
      FUNC_1(VAR_5->data, VAR_3, VAR_7);
      VAR_5->data[VAR_7] = 0;
      VAR_5->len = VAR_7;

      return VAR_1;
    }
  else
    {
      unsigned long VAR_10 = VAR_7;
      int VAR_11;

      FUNC_6(VAR_5, VAR_7);
      VAR_11 = FUNC_7((unsigned char *)VAR_5->data, &VAR_10, VAR_3, VAR_4);
      if (VAR_11 != VAR_2)
        return FUNC_5(FUNC_3(
                                 VAR_11, "uncompress",
                                 FUNC_0("Decompression of svndiff data failed")));



      if (VAR_10 != VAR_7)
        return FUNC_4(VAR_0,
                                ((void*)0),
                                FUNC_0("Size of uncompressed data "
                                  "does not match stored original length"));
      VAR_5->data[VAR_10] = 0;
      VAR_5->len = VAR_10;
    }
  return VAR_1;
}
