
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t ptr; scalar_t__ buf; } ;
typedef TYPE_1__ br_eax_context ;


 int FUNC_0 (TYPE_1__*,void const*,size_t) ;
 int FUNC_1 (scalar_t__,void const*,size_t) ;

void
FUNC_2(br_eax_context *VAR_0, const void *VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 VAR_3 = VAR_0->ptr;




 if (VAR_3 < 16) {
  size_t VAR_4;

  VAR_4 = 16 - VAR_3;
  if (VAR_2 <= VAR_4) {
   FUNC_1(VAR_0->buf + VAR_3, VAR_1, VAR_2);
   VAR_0->ptr = VAR_3 + VAR_2;
   return;
  }
  FUNC_1(VAR_0->buf + VAR_3, VAR_1, VAR_4);
  VAR_1 = (const unsigned char *)VAR_1 + VAR_4;
  VAR_2 -= VAR_4;
 }





 FUNC_0(VAR_0, VAR_1, VAR_2);
}
