
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; char* len; } ;
typedef TYPE_1__ svn_stringbuf_t ;


 char* FUNC_0 (int,char) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(svn_stringbuf_t *VAR_0)
{
  char *VAR_1 = FUNC_0(VAR_0->data, '\n');
  if (VAR_1)
    {
      *VAR_1 = '\0';
      VAR_0->len = 1 + VAR_1 - VAR_0->data;
    }
  FUNC_1(VAR_0);
}
