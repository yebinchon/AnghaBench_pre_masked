
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*,int,char*,unsigned char,...) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,int,int) ;
 unsigned char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_3 (char*,char*) ;

int FUNC_4(int (*VAR_2) (const void *VAR_3, size_t VAR_4, void *VAR_5),
                       void *VAR_6, const char *VAR_7, int VAR_8, int VAR_9)
{
    int VAR_10 = 0;
    char VAR_11[288 + 1];
    int VAR_12, VAR_13, VAR_14, VAR_15;
    unsigned char VAR_16;
    int VAR_17;

    if (VAR_9 < 0)
        VAR_9 = 0;
    else if (VAR_9 > 128)
        VAR_9 = 128;

    VAR_17 = FUNC_1(VAR_9);
    VAR_14 = VAR_8 / VAR_17;
    if ((VAR_14 * VAR_17) < VAR_8)
        VAR_14++;
    for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {
        VAR_15 = FUNC_0(VAR_11, sizeof(VAR_11), "%*s%04x - ", VAR_9, "",
                         VAR_12 * VAR_17);
        for (VAR_13 = 0; VAR_13 < VAR_17; VAR_13++) {
            if (FUNC_2(VAR_11, VAR_15, 3)) {
                if (((VAR_12 * VAR_17) + VAR_13) >= VAR_8) {
                    FUNC_3(VAR_11 + VAR_15, "   ");
                } else {
                    VAR_16 = ((unsigned char)*(VAR_7 + VAR_12 * VAR_17 + VAR_13)) & 0xff;
                    FUNC_0(VAR_11 + VAR_15, 4, "%02x%c", VAR_16,
                                 VAR_13 == 7 ? '-' : ' ');
                }
                VAR_15 += 3;
            }
        }
        if (FUNC_2(VAR_11, VAR_15, 2)) {
            FUNC_3(VAR_11 + VAR_15, "  ");
            VAR_15 += 2;
        }
        for (VAR_13 = 0; VAR_13 < VAR_17; VAR_13++) {
            if (((VAR_12 * VAR_17) + VAR_13) >= VAR_8)
                break;
            if (FUNC_2(VAR_11, VAR_15, 1)) {
                VAR_16 = ((unsigned char)*(VAR_7 + VAR_12 * VAR_17 + VAR_13)) & 0xff;

                VAR_11[VAR_15++] = ((VAR_16 >= ' ') && (VAR_16 <= '~')) ? VAR_16 : '.';





                VAR_11[VAR_15] = '\0';
            }
        }
        if (FUNC_2(VAR_11, VAR_15, 1)) {
            VAR_11[VAR_15++] = '\n';
            VAR_11[VAR_15] = '\0';
        }




        VAR_10 += VAR_2((void *)VAR_11, VAR_15, VAR_6);
    }
    return VAR_10;
}
