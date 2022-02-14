
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int64_t
FUNC_0(const char *VAR_2, unsigned VAR_3)
{
        int64_t VAR_4, VAR_5, VAR_6;
        const unsigned char *VAR_7 = (const unsigned char *)VAR_2;

        VAR_5 = VAR_0 / 256;
        VAR_6 = VAR_1 / 256;


        if ((0x40 & *VAR_7) == 0x40)
                VAR_4 = (int64_t)-1;
        else
                VAR_4 = 0;
        VAR_4 = (VAR_4 << 6) | (0x3f & *VAR_7++);
        while (--VAR_3 > 0) {
                if (VAR_4 > VAR_5) {
                        VAR_4 = VAR_0;
                        break;
                } else if (VAR_4 < VAR_6) {
                        VAR_4 = VAR_1;
                        break;
                }
                VAR_4 = (VAR_4 << 8) | (0xff & (int64_t)*VAR_7++);
        }
        return (VAR_4);
}
