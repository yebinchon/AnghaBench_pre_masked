
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; scalar_t__* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int apr_uint64_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void const*,scalar_t__*,int,int) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 unsigned char* FUNC_3 (unsigned char*,int ) ;
 int * FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (TYPE_1__*,void const*,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*) ;

svn_error_t *
FUNC_8(const void *VAR_4, apr_size_t VAR_5,
                  svn_stringbuf_t *VAR_6)
{
  apr_size_t VAR_7;
  unsigned char VAR_8[VAR_3];
  unsigned char *VAR_9;
  int VAR_10;
  int VAR_11;

  FUNC_2(VAR_5 <= VAR_0);

  VAR_9 = FUNC_3(VAR_8, (apr_uint64_t)VAR_5);
  VAR_7 = VAR_9 - VAR_8;
  VAR_11 = FUNC_0((int)VAR_5);
  FUNC_7(VAR_6);
  FUNC_6(VAR_6, VAR_11 + VAR_7);
  FUNC_5(VAR_6, (const char *)VAR_8, VAR_7);
  VAR_10 = FUNC_1(VAR_4, VAR_6->data + VAR_6->len,
                                             (int)VAR_5, VAR_11);
  if (!VAR_10)
    return FUNC_4(VAR_1, ((void*)0), ((void*)0));

  if (VAR_10 >= (int)VAR_5)
    {

      FUNC_5(VAR_6, VAR_4, VAR_5);
    }
  else
    {
      VAR_6->len += VAR_10;
      VAR_6->data[VAR_6->len] = 0;
    }

  return VAR_2;
}
