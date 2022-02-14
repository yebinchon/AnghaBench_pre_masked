
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct MD5Context {int* bits; unsigned char* in; int buf; } ;


 int FUNC_0 (int ,int*) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (unsigned char*,unsigned char const*,unsigned int) ;

void FUNC_3(struct MD5Context *VAR_0, unsigned char const *VAR_1, unsigned VAR_2)
{
    u32 VAR_3;



    VAR_3 = VAR_0->bits[0];
    if ((VAR_0->bits[0] = VAR_3 + ((u32) VAR_2 << 3)) < VAR_3)
 VAR_0->bits[1]++;
    VAR_0->bits[1] += VAR_2 >> 29;

    VAR_3 = (VAR_3 >> 3) & 0x3f;



    if (VAR_3) {
 unsigned char *VAR_4 = (unsigned char *) VAR_0->in + VAR_3;

 VAR_3 = 64 - VAR_3;
 if (VAR_2 < VAR_3) {
     FUNC_2(VAR_4, VAR_1, VAR_2);
     return;
 }
 FUNC_2(VAR_4, VAR_1, VAR_3);
 FUNC_1(VAR_0->in, 16);
 FUNC_0(VAR_0->buf, (u32 *) VAR_0->in);
 VAR_1 += VAR_3;
 VAR_2 -= VAR_3;
    }


    while (VAR_2 >= 64) {
 FUNC_2(VAR_0->in, VAR_1, 64);
 FUNC_1(VAR_0->in, 16);
 FUNC_0(VAR_0->buf, (u32 *) VAR_0->in);
 VAR_1 += 64;
 VAR_2 -= 64;
    }



    FUNC_2(VAR_0->in, VAR_1, VAR_2);
}
