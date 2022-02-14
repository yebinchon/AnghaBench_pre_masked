
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; int len; int blocksize; } ;
typedef TYPE_1__ svn_stringbuf_t ;


 char* FUNC_0 (char*,char) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static const char *
FUNC_2(svn_stringbuf_t *VAR_0, char VAR_1)
{
  char *VAR_2;
  char *VAR_3;

  VAR_3 = FUNC_0(VAR_0->data, VAR_1);
  if (!VAR_3)
    return ((void*)0);

  FUNC_1(VAR_0);






  VAR_2 = VAR_0->data;
  VAR_3 = FUNC_0(VAR_2, VAR_1);
  *VAR_3 = '\0';


  VAR_0->data = VAR_3 + 1;
  VAR_0->len -= 1 + VAR_3 - VAR_2;
  VAR_0->blocksize -= 1 + VAR_3 - VAR_2;

  FUNC_1(VAR_0);

  return VAR_2;
}
