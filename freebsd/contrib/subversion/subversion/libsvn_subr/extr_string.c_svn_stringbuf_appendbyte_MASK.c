
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; int blocksize; char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int apr_size_t ;


 int FUNC_0 (TYPE_1__*,char*,int) ;

void
FUNC_1(svn_stringbuf_t *VAR_0, char VAR_1)
{
  char *VAR_2;
  apr_size_t VAR_3 = VAR_0->len;





  if (VAR_0->blocksize > VAR_3 + 1)
    {






      VAR_0->len = VAR_3+1;






      VAR_2 = VAR_0->data;
      VAR_2[VAR_3] = VAR_1;
      VAR_2[VAR_3+1] = '\0';
    }
  else
    {
      char VAR_4 = VAR_1;
      FUNC_0(VAR_0, &VAR_4, 1);
    }
}
