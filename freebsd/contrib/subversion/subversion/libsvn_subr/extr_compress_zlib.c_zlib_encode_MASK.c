
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; unsigned long blocksize; scalar_t__* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int apr_uint64_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (unsigned char*,unsigned long*,unsigned char const*,int,int) ;
 int FUNC_2 (int) ;
 unsigned char* FUNC_3 (unsigned char*,int ) ;
 int FUNC_4 (int,char*,int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,char const*,int) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static svn_error_t *
FUNC_9(const char *VAR_5,
            apr_size_t VAR_6,
            svn_stringbuf_t *VAR_7,
            int VAR_8)
{
  unsigned long VAR_9;
  apr_size_t VAR_10;
  unsigned char VAR_11[VAR_3], *VAR_12;

  FUNC_8(VAR_7);
  VAR_12 = FUNC_3(VAR_11, (apr_uint64_t)VAR_6);
  FUNC_6(VAR_7, (const char *)VAR_11, VAR_12 - VAR_11);

  VAR_10 = VAR_7->len;






  if (VAR_6 < VAR_0 || VAR_8 == VAR_2)
    {
      FUNC_6(VAR_7, VAR_5, VAR_6);
    }
  else
    {
      int VAR_13;

      FUNC_7(VAR_7, FUNC_2(VAR_6) + VAR_10);
      VAR_9 = VAR_7->blocksize;

      VAR_13 = FUNC_1((unsigned char *)VAR_7->data + VAR_10, &VAR_9,
                       (const unsigned char *)VAR_5, VAR_6,
                       VAR_8);
      if (VAR_13 != VAR_4)
        return FUNC_5(FUNC_4(
                                 VAR_13, "compress2",
                                 FUNC_0("Compression of svndiff data failed")));


      if (VAR_9 >= VAR_6)
        {
          FUNC_6(VAR_7, VAR_5, VAR_6);
          return VAR_1;
        }
      VAR_7->len = VAR_9 + VAR_10;
      VAR_7->data[VAR_7->len] = 0;
    }
  return VAR_1;
}
