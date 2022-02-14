
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d_print_info {scalar_t__ len; scalar_t__ alc; int * buf; } ;


 int FUNC_0 (struct d_print_info*,size_t) ;
 int FUNC_1 (int *,char const*,size_t) ;

__attribute__((used)) static void
FUNC_2 (struct d_print_info *VAR_0, const char *VAR_1, size_t VAR_2)
{
  if (VAR_0->buf != ((void*)0))
    {
      if (VAR_0->len + VAR_2 > VAR_0->alc)
 {
   FUNC_0 (VAR_0, VAR_2);
   if (VAR_0->buf == ((void*)0))
     return;
 }

      FUNC_1 (VAR_0->buf + VAR_0->len, VAR_1, VAR_2);
      VAR_0->len += VAR_2;
    }
}
