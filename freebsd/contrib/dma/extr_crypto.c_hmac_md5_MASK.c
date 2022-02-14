
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MD5_CTX ;


 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;
 int FUNC_4 (unsigned char*,int) ;

void
FUNC_5(unsigned char *VAR_0, int VAR_1, unsigned char *VAR_2, int VAR_3,
    unsigned char* VAR_4)
{
        MD5_CTX VAR_5;
        unsigned char VAR_6[65];


        unsigned char VAR_7[65];


        unsigned char VAR_8[16];
        int VAR_9;

        if (VAR_3 > 64) {

                MD5_CTX VAR_10;

                FUNC_1(&VAR_10);
                FUNC_2(&VAR_10, VAR_2, VAR_3);
                FUNC_0(VAR_8, &VAR_10);

                VAR_2 = VAR_8;
                VAR_3 = 16;
        }
        FUNC_4( VAR_6, sizeof VAR_6);
        FUNC_4( VAR_7, sizeof VAR_7);
        FUNC_3( VAR_2, VAR_6, VAR_3);
        FUNC_3( VAR_2, VAR_7, VAR_3);


        for (VAR_9=0; VAR_9<64; VAR_9++) {
                VAR_6[VAR_9] ^= 0x36;
                VAR_7[VAR_9] ^= 0x5c;
        }



        FUNC_1(&VAR_5);

        FUNC_2(&VAR_5, VAR_6, 64);
        FUNC_2(&VAR_5, VAR_0, VAR_1);
        FUNC_0(VAR_4, &VAR_5);



        FUNC_1(&VAR_5);

        FUNC_2(&VAR_5, VAR_7, 64);
        FUNC_2(&VAR_5, VAR_4, 16);

        FUNC_0(VAR_4, &VAR_5);
}
