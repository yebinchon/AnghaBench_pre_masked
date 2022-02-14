
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sha2_byte ;
typedef int SHA256_CTX ;


 int FUNC_0 (int*,int) ;
 int VAR_0 ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (int) ;
 void** VAR_1 ;

char *FUNC_3(SHA256_CTX* VAR_2, char VAR_3[]) {
        sha2_byte VAR_4[VAR_0], *VAR_5 = VAR_4;
        int VAR_6;


        FUNC_2(VAR_2 != (SHA256_CTX*)0);

        if (VAR_3 != (char*)0) {
                FUNC_1(VAR_4, VAR_2);

                for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
                        *VAR_3++ = VAR_1[(*VAR_5 & 0xf0) >> 4];
                        *VAR_3++ = VAR_1[*VAR_5 & 0x0f];
                        VAR_5++;
                }
                *VAR_3 = (char)0;
        } else {
                FUNC_0(VAR_2, sizeof(*VAR_2));
        }
        FUNC_0(VAR_4, VAR_0);
        return VAR_3;
}
