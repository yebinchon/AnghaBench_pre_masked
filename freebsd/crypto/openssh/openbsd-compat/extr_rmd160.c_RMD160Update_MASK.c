
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
struct TYPE_3__ {int count; int const* buffer; int state; } ;
typedef TYPE_1__ RMD160_CTX ;


 int FUNC_0 (int ,int const*) ;
 int VAR_0 ;
 int FUNC_1 (int const*,int const*,size_t) ;

void
FUNC_2(RMD160_CTX *VAR_1, const u_int8_t *VAR_2, size_t VAR_3)
{
 size_t VAR_4, VAR_5, VAR_6;

 VAR_4 = (VAR_1->count / 8) % VAR_0;
 VAR_6 = VAR_0 - VAR_4;
 VAR_1->count += 8 * VAR_3;
 VAR_5 = 0;

 if (VAR_3 >= VAR_6) {
  if (VAR_4) {
   FUNC_1(VAR_1->buffer + VAR_4, VAR_2, VAR_6);
   FUNC_0(VAR_1->state, VAR_1->buffer);
   VAR_5 = VAR_6;
   VAR_4 = 0;
  }

  while (VAR_5 + VAR_0 <= VAR_3) {
   FUNC_0(VAR_1->state, VAR_2+VAR_5);
   VAR_5 += VAR_0;
  }
 }
 if (VAR_5 < VAR_3)
  FUNC_1(VAR_1->buffer + VAR_4, VAR_2+VAR_5, VAR_3-VAR_5);
}
