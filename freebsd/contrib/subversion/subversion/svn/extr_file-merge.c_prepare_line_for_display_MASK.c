
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int apr_pool_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,char) ;
 int FUNC_5 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_6 (char const*,int *) ;
 char* FUNC_7 (char*,size_t) ;
 size_t FUNC_8 (char*) ;
 char const* FUNC_9 (char*,int *) ;

__attribute__((used)) static const char *
FUNC_10(const char *VAR_1, apr_pool_t *VAR_2)
{
  svn_stringbuf_t *VAR_3 = FUNC_6(VAR_1, VAR_2);
  size_t VAR_4;
  size_t VAR_5 = VAR_0;
  apr_pool_t *VAR_6;


  if (VAR_3->len >= 2 &&
      VAR_3->data[VAR_3->len - 2] == '\r' &&
      VAR_3->data[VAR_3->len - 1] == '\n')
    FUNC_5(VAR_3, 2);
  else if (VAR_3->len >= 1 &&
           (VAR_3->data[VAR_3->len - 1] == '\n' ||
            VAR_3->data[VAR_3->len - 1] == '\r'))
    FUNC_5(VAR_3, 1);


  VAR_4 = FUNC_8(VAR_3->data);
  if (VAR_4 == -1)
    {


      VAR_3 = FUNC_6(FUNC_9(VAR_3->data, VAR_2), VAR_2);
      VAR_4 = FUNC_8(VAR_3->data);
      if (VAR_4 == -1)
        VAR_4 = VAR_3->len;
    }



  VAR_6 = FUNC_2(VAR_2);
  while (VAR_4 > VAR_5)
    {
      const char *VAR_7;

      FUNC_1(VAR_6);

      FUNC_5(VAR_3, 1);



      VAR_7 = FUNC_7(VAR_3->data, VAR_3->len);
      if (VAR_7 < VAR_3->data + VAR_3->len)
        FUNC_5(VAR_3, (VAR_3->data + VAR_3->len) - VAR_7);

      VAR_4 = FUNC_8(VAR_3->data);
      if (VAR_4 == -1)
        VAR_4 = VAR_3->len;
    }
  FUNC_3(VAR_6);

  while (VAR_4 == 0 || VAR_4 < VAR_5)
    {
      FUNC_4(VAR_3, ' ');
      VAR_4++;
    }

  FUNC_0(VAR_4 == VAR_5);
  return VAR_3->data;
}
