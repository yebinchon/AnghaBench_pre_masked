
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char const*,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 unsigned char* VAR_0 ;

__attribute__((used)) static int
FUNC_2(int VAR_1, int VAR_2, unsigned int VAR_3,
               const unsigned char *VAR_4, const unsigned char *VAR_5,
               unsigned int VAR_6, unsigned char *VAR_7)
{
    unsigned VAR_8;
    unsigned char VAR_9[16];
    int VAR_10 = 0;

    if(VAR_2 >= 0)
        VAR_8 = (VAR_2 + 7) / 8;
    else if(VAR_1 == 1)
        VAR_8 = 4;
    else
        VAR_8 = 16;

    if(VAR_8 > 16)
        return -1;

    FUNC_1(VAR_9, 0, 16);

    switch(VAR_1) {
    case 0: break;
    case 1:
        if(VAR_3 > 4 || VAR_8 > 4 || (VAR_8 > VAR_3 && VAR_6 < VAR_8 - VAR_3))
            return -1;
        FUNC_0(VAR_9, VAR_0, 12);
        if(VAR_3) {
            if (VAR_5 == ((void*)0)) return -1;
            FUNC_0(VAR_9, VAR_5, 12 + VAR_3);
        }
        if(VAR_8 > VAR_3) {
            FUNC_0(VAR_9 + 12 + VAR_3, VAR_4, VAR_8 - VAR_3);
            VAR_10 = VAR_8 - VAR_3;
        }
        break;
    case 2:
        if(VAR_3 > 16 || (VAR_8 > VAR_3 && VAR_6 < VAR_8 - VAR_3))
            return -1;
        if(VAR_3) {
            if (VAR_5 == ((void*)0)) return -1;
            FUNC_0(VAR_9, VAR_5, VAR_3);
        }
        if(VAR_8 > VAR_3) {
            FUNC_0(VAR_9 + VAR_3, VAR_4, VAR_8 - VAR_3);
            VAR_10 = VAR_8 - VAR_3;
        }
        break;
    case 3:
        if(VAR_8 > 8 && VAR_6 < VAR_8 - 8) return -1;
        VAR_9[0] = 0xfe;
        VAR_9[1] = 0x80;
        if(VAR_8 > 8) {
            FUNC_0(VAR_9 + 8, VAR_4, VAR_8 - 8);
            VAR_10 = VAR_8 - 8;
        }
        break;
    default:
        return -1;
    }

    FUNC_0(VAR_7, VAR_9, 16);
    return VAR_10;
}
