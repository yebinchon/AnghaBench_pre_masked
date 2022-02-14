
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_3__ {int* count; unsigned char const* buffer; int state; } ;
typedef TYPE_1__ MD5_CTX ;


 int FUNC_0 (int ,unsigned char const*) ;
 int FUNC_1 (void*,void const*,unsigned int) ;

void
FUNC_2 (MD5_CTX *VAR_0, const void *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5;
 const unsigned char *VAR_6 = VAR_1;


 VAR_4 = (unsigned int)((VAR_0->count[0] >> 3) & 0x3F);


 if ((VAR_0->count[0] += ((u_int32_t)VAR_2 << 3))
     < ((u_int32_t)VAR_2 << 3))
  VAR_0->count[1]++;
 VAR_0->count[1] += ((u_int32_t)VAR_2 >> 29);

 VAR_5 = 64 - VAR_4;


 if (VAR_2 >= VAR_5) {
  FUNC_1((void *)&VAR_0->buffer[VAR_4], (const void *)VAR_6,
      VAR_5);
  FUNC_0 (VAR_0->state, VAR_0->buffer);

  for (VAR_3 = VAR_5; VAR_3 + 63 < VAR_2; VAR_3 += 64)
   FUNC_0 (VAR_0->state, &VAR_6[VAR_3]);

  VAR_4 = 0;
 }
 else
  VAR_3 = 0;


 FUNC_1 ((void *)&VAR_0->buffer[VAR_4], (const void *)&VAR_6[VAR_3],
     VAR_2-VAR_3);
}
