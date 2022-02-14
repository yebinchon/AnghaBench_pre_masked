
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
struct TYPE_3__ {int count; int * buffer; int state; } ;
typedef TYPE_1__ SHA1_CTX ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int const*,size_t) ;

void
FUNC_2(SHA1_CTX *VAR_0, const u_int8_t *VAR_1, size_t VAR_2)
{
 size_t VAR_3, VAR_4;

 VAR_4 = (size_t)((VAR_0->count >> 3) & 63);
 VAR_0->count += (VAR_2 << 3);
 if ((VAR_4 + VAR_2) > 63) {
  (void)FUNC_1(&VAR_0->buffer[VAR_4], VAR_1, (VAR_3 = 64-VAR_4));
  FUNC_0(VAR_0->state, VAR_0->buffer);
  for ( ; VAR_3 + 63 < VAR_2; VAR_3 += 64)
   FUNC_0(VAR_0->state, (u_int8_t *)&VAR_1[VAR_3]);
  VAR_4 = 0;
 } else {
  VAR_3 = 0;
 }
 (void)FUNC_1(&VAR_0->buffer[VAR_4], &VAR_1[VAR_3], VAR_2 - VAR_3);
}
