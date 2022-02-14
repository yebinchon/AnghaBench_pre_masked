
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
typedef unsigned int uChar ;
struct hashValue {unsigned int a; unsigned int b; unsigned int c; } ;
typedef int Char ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct hashValue *VAR_0, const Char *VAR_1)
{
    uint32_t VAR_2 = VAR_0->a, VAR_3 = VAR_0->b, VAR_4 = VAR_0->c;
    FUNC_0(sizeof(Char) == 1);
    while (1) {
 unsigned VAR_5;
 if ((VAR_5 = *VAR_1++) == 0) break; VAR_2 += VAR_5;
 if ((VAR_5 = *VAR_1++) == 0) break; VAR_2 += VAR_5 << 8;
 if ((VAR_5 = *VAR_1++) == 0) break; VAR_2 += VAR_5 << 16;
 if ((VAR_5 = *VAR_1++) == 0) break; VAR_2 += VAR_5 << 24;
 if ((VAR_5 = *VAR_1++) == 0) break; VAR_3 += VAR_5;
 if ((VAR_5 = *VAR_1++) == 0) break; VAR_3 += VAR_5 << 8;
 if ((VAR_5 = *VAR_1++) == 0) break; VAR_3 += VAR_5 << 16;
 if ((VAR_5 = *VAR_1++) == 0) break; VAR_3 += VAR_5 << 24;
 if ((VAR_5 = *VAR_1++) == 0) break; VAR_4 += VAR_5;
 if ((VAR_5 = *VAR_1++) == 0) break; VAR_4 += VAR_5 << 8;
 if ((VAR_5 = *VAR_1++) == 0) break; VAR_4 += VAR_5 << 16;
 if ((VAR_5 = *VAR_1++) == 0) break; VAR_4 += VAR_5 << 24;
 FUNC_1(VAR_2, VAR_3, VAR_4);
    }

    VAR_0->a = VAR_2, VAR_0->b = VAR_3, VAR_0->c = VAR_4;
}
