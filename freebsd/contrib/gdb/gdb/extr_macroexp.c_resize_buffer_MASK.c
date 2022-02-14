
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_buffer {int size; int text; int shared; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2 (struct macro_buffer *VAR_0, int VAR_1)
{

  FUNC_0 (! VAR_0->shared);

  if (VAR_0->size == 0)
    VAR_0->size = VAR_1;
  else
    while (VAR_0->size <= VAR_1)
      VAR_0->size *= 2;

  VAR_0->text = FUNC_1 (VAR_0->text, VAR_0->size);
}
