
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; size_t len; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef size_t apr_size_t ;



__attribute__((used)) static const char *
FUNC_0(svn_stringbuf_t *VAR_0,
             const char *VAR_1)
{
  apr_size_t VAR_2;
  char VAR_3;


  for (VAR_2 = 0, VAR_3 = *VAR_1; VAR_3; VAR_3 = VAR_1[++VAR_2])
    if (VAR_3 == '/')
      {

        VAR_0->data[VAR_2] = 0;
        VAR_0->len = VAR_2;



        while (VAR_1[++VAR_2] == '/')
          ;




        return VAR_1 + VAR_2;
      }
    else
      {


        VAR_0->data[VAR_2] = VAR_3;
      }


  VAR_0->data[VAR_2] = 0;
  VAR_0->len = VAR_2;


  return ((void*)0);
}
