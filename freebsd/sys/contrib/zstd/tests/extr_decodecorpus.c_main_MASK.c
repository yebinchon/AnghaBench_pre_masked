
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int genType_e ;
typedef int U32 ;
struct TYPE_2__ {int contentSize; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int,unsigned int,char const*,char const*,int ) ;
 int FUNC_4 (int,unsigned int,char const*,char const*,unsigned int,int ) ;
 int FUNC_5 (int,char const*,char const*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (char const**,char*) ;
 int FUNC_7 () ;
 TYPE_1__ VAR_7 ;
 void* FUNC_8 (char const**) ;
 void* FUNC_9 (char const**) ;
 int FUNC_10 (int,unsigned int,unsigned int,int ) ;
 int FUNC_11 (char const*,char*) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (char*) ;

int FUNC_14(int VAR_8, char** VAR_9)
{
    U32 VAR_10 = 0;
    int VAR_11 = 0;
    unsigned VAR_12 = 0;
    unsigned VAR_13 = 0;
    int VAR_14 = 0;
    const char* VAR_15 = ((void*)0);
    const char* VAR_16 = ((void*)0);
    int VAR_17 = 0;
    unsigned VAR_18 = (10 << 10);
    genType_e VAR_19 = VAR_6;

    int VAR_20;


    for (VAR_20=1; VAR_20<VAR_8; VAR_20++) {
        const char* VAR_21 = VAR_9[VAR_20];
        if(!VAR_21) continue;


        if (VAR_21[0]=='-') {
            VAR_21++;
            while (*VAR_21!=0) {
                switch(*VAR_21)
                {
                case 'h':
                    FUNC_13(VAR_9[0]);
                    return 0;
                case 'H':
                    FUNC_2(VAR_9[0]);
                    return 0;
                case 'v':
                    VAR_21++;
                    VAR_2++;
                    break;
                case 's':
                    VAR_21++;
                    VAR_11=1;
                    VAR_10 = FUNC_8(&VAR_21);
                    break;
                case 'n':
                    VAR_21++;
                    VAR_12 = FUNC_8(&VAR_21);
                    break;
                case 'T':
                    VAR_21++;
                    VAR_13 = FUNC_8(&VAR_21);
                    if (*VAR_21 == 'm') {
                        VAR_13 *= 60;
                        VAR_21++;
                        if (*VAR_21 == 'n') VAR_21++;
                    }
                    break;
                case 'o':
                    VAR_21++;
                    VAR_16 = VAR_21;
                    VAR_21 += FUNC_12(VAR_21);
                    break;
                case 'p':
                    VAR_21++;
                    VAR_15 = VAR_21;
                    VAR_21 += FUNC_12(VAR_21);
                    break;
                case 't':
                    VAR_21++;
                    VAR_14 = 1;
                    break;
                case '-':
                    VAR_21++;
                    if (FUNC_11(VAR_21, "content-size") == 0) {
                        VAR_7.contentSize = 1;
                    } else if (FUNC_6(&VAR_21, "use-dict=")) {
                        VAR_18 = FUNC_9(&VAR_21);
                        VAR_17 = 1;
                    } else if (FUNC_11(VAR_21, "gen-blocks") == 0) {
                        VAR_19 = VAR_5;
                    } else if (FUNC_6(&VAR_21, "max-block-size-log=")) {
                        U32 VAR_22 = FUNC_9(&VAR_21);
                        if (VAR_22 >= 2 && VAR_22 <= VAR_1) {
                            VAR_3 = 1U << VAR_22;
                        }
                    } else if (FUNC_6(&VAR_21, "max-content-size-log=")) {
                        U32 VAR_23 = FUNC_9(&VAR_21);
                        VAR_4 =
                                FUNC_1(VAR_0, VAR_23);
                    } else {
                        FUNC_2(VAR_9[0]);
                        return 1;
                    }
                    VAR_21 += FUNC_12(VAR_21);
                    break;
                default:
                    FUNC_13(VAR_9[0]);
                    return 1;
    } } } }

    if (!VAR_11) {
        VAR_10 = FUNC_7();
    }

    if (VAR_14) {
        return FUNC_10(VAR_10, VAR_12, VAR_13, VAR_19);
    } else {
        if (VAR_13) {
            FUNC_0("Error: -T requires test mode (-t)\n\n");
            FUNC_13(VAR_9[0]);
            return 1;
        }
    }

    if (!VAR_15) {
        FUNC_0("Error: path is required in file generation mode\n");
        FUNC_13(VAR_9[0]);
        return 1;
    }

    if (VAR_12 == 0 && VAR_17 == 0) {
        return FUNC_5(VAR_10, VAR_15, VAR_16, VAR_19);
    } else if (VAR_17 == 0){
        return FUNC_3(VAR_10, VAR_12, VAR_15, VAR_16, VAR_19);
    } else {

        return FUNC_4(VAR_10, VAR_12, VAR_15, VAR_16, VAR_18, VAR_19);
    }

}
