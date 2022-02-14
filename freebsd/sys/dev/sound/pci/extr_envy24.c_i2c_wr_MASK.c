
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
struct envy24_delta_ak4524_codec {int dummy; } ;


 int FUNC_0 (struct envy24_delta_ak4524_codec*,void (*) (void*,unsigned int,unsigned int)) ;
 int FUNC_1 (struct envy24_delta_ak4524_codec*,void (*) (void*,unsigned int,unsigned int)) ;
 int FUNC_2 (struct envy24_delta_ak4524_codec*,void (*) (void*,unsigned int,unsigned int)) ;
 int FUNC_3 (struct envy24_delta_ak4524_codec*,void (*) (void*,unsigned int,unsigned int),int) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0, void (*VAR_1)(void*, unsigned int, unsigned int), u_int32_t VAR_2, int VAR_3, u_int8_t VAR_4)
{
        struct envy24_delta_ak4524_codec *VAR_5 = VAR_0;
        int VAR_6;

        FUNC_1(VAR_5, VAR_1);

        for (VAR_6 = 0x80; VAR_6 != 0; VAR_6 >>= 1)
                FUNC_3(VAR_5, VAR_1, VAR_2 & VAR_6);
        FUNC_0(VAR_5, VAR_1);

        if (VAR_3 != 0xff) {
        for (VAR_6 = 0x80; VAR_6 != 0; VAR_6 >>= 1)
                FUNC_3(VAR_5, VAR_1, VAR_3 & VAR_6);
        FUNC_0(VAR_5, VAR_1);
        }

        for (VAR_6 = 0x80; VAR_6 != 0; VAR_6 >>= 1)
                FUNC_3(VAR_5, VAR_1, VAR_4 & VAR_6);
        FUNC_0(VAR_5, VAR_1);

        FUNC_2(VAR_5, VAR_1);
}
