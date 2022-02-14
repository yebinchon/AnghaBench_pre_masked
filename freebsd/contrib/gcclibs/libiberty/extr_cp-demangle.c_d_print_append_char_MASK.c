
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d_print_info {int* buf; size_t len; size_t alc; } ;


 int FUNC_0 (struct d_print_info*,int) ;

__attribute__((used)) static void
FUNC_1 (struct d_print_info *VAR_0, int VAR_1)
{
  if (VAR_0->buf != ((void*)0))
    {
      if (VAR_0->len >= VAR_0->alc)
 {
   FUNC_0 (VAR_0, 1);
   if (VAR_0->buf == ((void*)0))
     return;
 }

      VAR_0->buf[VAR_0->len] = VAR_1;
      ++VAR_0->len;
    }
}
