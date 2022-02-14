
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_buffer {int len; int size; scalar_t__ text; } ;


 int FUNC_0 (scalar_t__,char*,int) ;
 int FUNC_1 (struct macro_buffer*,int) ;

__attribute__((used)) static void
FUNC_2 (struct macro_buffer *VAR_0, char *VAR_1, int VAR_2)
{
  int VAR_3 = VAR_0->len + VAR_2;

  if (VAR_3 > VAR_0->size)
    FUNC_1 (VAR_0, VAR_3);

  FUNC_0 (VAR_0->text + VAR_0->len, VAR_1, VAR_2);
  VAR_0->len = VAR_3;
}
