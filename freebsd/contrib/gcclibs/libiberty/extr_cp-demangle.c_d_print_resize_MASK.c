
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d_print_info {char* buf; size_t len; size_t alc; int allocation_failure; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,size_t) ;

__attribute__((used)) static void
FUNC_2 (struct d_print_info *VAR_0, size_t VAR_1)
{
  size_t VAR_2;

  if (VAR_0->buf == ((void*)0))
    return;
  VAR_2 = VAR_0->len + VAR_1;
  while (VAR_2 > VAR_0->alc)
    {
      size_t VAR_3;
      char *VAR_4;

      VAR_3 = VAR_0->alc * 2;
      VAR_4 = (char *) FUNC_1 (VAR_0->buf, VAR_3);
      if (VAR_4 == ((void*)0))
 {
   FUNC_0 (VAR_0->buf);
   VAR_0->buf = ((void*)0);
   VAR_0->allocation_failure = 1;
   return;
 }
      VAR_0->buf = VAR_4;
      VAR_0->alc = VAR_3;
    }
}
