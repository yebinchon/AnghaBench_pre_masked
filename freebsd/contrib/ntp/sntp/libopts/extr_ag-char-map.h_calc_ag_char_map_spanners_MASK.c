
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ag_char_map_mask_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int* VAR_1 ;
 int VAR_2 ;
 unsigned char const** VAR_3 ;
 int* VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 unsigned char* FUNC_3 (int) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;

__attribute__((used)) static unsigned char const *
FUNC_7(unsigned int VAR_6)
{







    {
        int VAR_7 = 1;
        ag_char_map_mask_t VAR_8 = VAR_1[VAR_6];
        unsigned char * VAR_9 = FUNC_3(256 );
        if (VAR_9 == ((void*)0)) {
            FUNC_2(FUNC_0("no memory for char-mapper span map\n"), VAR_5);
            FUNC_1(VAR_0);
        }

        FUNC_4(VAR_9, 0, 256);
        for (; VAR_7 < 128; VAR_7++)
            if (VAR_4[VAR_7] & VAR_8)
                VAR_9[VAR_7] = 1;
        VAR_3[VAR_6] = VAR_9;
    }



    return VAR_3[VAR_6];
}
