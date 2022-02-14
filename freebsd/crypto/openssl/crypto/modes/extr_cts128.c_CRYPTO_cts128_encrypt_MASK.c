
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef int (* cbc128_f ) (unsigned char const*,unsigned char*,int,void const*,unsigned char*,int) ;


 int FUNC_0 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (unsigned char const*,unsigned char*,int,void const*,unsigned char*,int) ;
 int FUNC_3 (unsigned char const*,unsigned char*,int,void const*,unsigned char*,int) ;
 int FUNC_4 (unsigned char const*,unsigned char*,int,void const*,unsigned char*,int) ;

size_t FUNC_5(const unsigned char *VAR_0, unsigned char *VAR_1,
                             size_t VAR_2, const void *VAR_3,
                             unsigned char VAR_4[16], cbc128_f VAR_5)
{
    size_t VAR_6;
    union {
        size_t align;
        unsigned char c[16];
    } VAR_7;

    if (VAR_2 <= 16)
        return 0;

    if ((VAR_6 = VAR_2 % 16) == 0)
        VAR_6 = 16;

    VAR_2 -= VAR_6;

    (*VAR_5) (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, 1);

    VAR_0 += VAR_2;
    VAR_1 += VAR_2;






    FUNC_1(VAR_7.c, 0, sizeof(VAR_7));
    FUNC_0(VAR_7.c, VAR_0, VAR_6);
    FUNC_0(VAR_1, VAR_1 - 16, VAR_6);
    (*VAR_5) (VAR_7.c, VAR_1 - 16, 16, VAR_3, VAR_4, 1);

    return VAR_2 + VAR_6;
}
