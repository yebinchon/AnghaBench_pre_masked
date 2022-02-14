
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; scalar_t__* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_uint64_t ;
typedef scalar_t__ apr_size_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*,scalar_t__*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__*,unsigned char const*,int) ;
 unsigned char* FUNC_4 (scalar_t__*,unsigned char const*,unsigned char const*) ;
 int * FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*) ;

svn_error_t *
FUNC_8(const void *VAR_4, apr_size_t VAR_5,
                    svn_stringbuf_t *VAR_6,
                    apr_size_t VAR_7)
{
  apr_size_t VAR_8;
  int VAR_9;
  int VAR_10;
  apr_uint64_t VAR_11;
  const unsigned char *VAR_12 = VAR_4;
  int VAR_13;

  FUNC_2(VAR_5 <= VAR_0);
  FUNC_2(VAR_7 <= VAR_0);


  VAR_12 = FUNC_4(&VAR_11, VAR_12, VAR_12 + VAR_5);
  if (VAR_12 == ((void*)0))
    return FUNC_5(VAR_2, ((void*)0),
                            FUNC_1("Decompression of compressed data failed: "
                              "no size"));
  if (VAR_11 > VAR_7)
    return FUNC_5(VAR_2, ((void*)0),
                            FUNC_1("Decompression of compressed data failed: "
                              "size too large"));
  VAR_10 = (int)VAR_11;
  VAR_8 = VAR_12 - (const unsigned char *)VAR_4;
  VAR_9 = (int)(VAR_5 - VAR_8);

  FUNC_7(VAR_6);
  FUNC_6(VAR_6, VAR_10);

  if (VAR_9 == VAR_10)
    {

      FUNC_3(VAR_6->data, VAR_12, VAR_10);
    }
  else
    {
      VAR_13 = FUNC_0((const char *)VAR_12, VAR_6->data, VAR_9,
                               VAR_10);
      if (VAR_13 < 0)
        return FUNC_5(VAR_1, ((void*)0), ((void*)0));

      if (VAR_13 != VAR_10)
        return FUNC_5(VAR_2,
                                ((void*)0),
                                FUNC_1("Size of uncompressed data "
                                  "does not match stored original length"));
    }

  VAR_6->data[VAR_10] = 0;
  VAR_6->len = VAR_10;

  return VAR_3;
}
