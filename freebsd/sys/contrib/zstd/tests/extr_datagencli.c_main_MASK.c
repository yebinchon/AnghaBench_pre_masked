
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U64 ;
typedef int U32 ;


 unsigned int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int,double,double,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char const* const) ;

int FUNC_3(int VAR_4, const char** VAR_5)
{
    unsigned VAR_6 = VAR_0;
    double VAR_7 = 0.0;
    U64 VAR_8 = VAR_2;
    U32 VAR_9 = VAR_1;
    const char* const VAR_10 = VAR_5[0];

    int VAR_11;
    for(VAR_11=1; VAR_11<VAR_4; VAR_11++) {
        const char* VAR_12 = VAR_5[VAR_11];

        if(!VAR_12) continue;


        if (*VAR_12=='-') {
            VAR_12++;
            while (*VAR_12!=0) {
                switch(*VAR_12)
                {
                case 'h':
                    return FUNC_2(VAR_10);
                case 'g':
                    VAR_12++;
                    VAR_8=0;
                    while ((*VAR_12>='0') && (*VAR_12<='9'))
                        VAR_8 *= 10, VAR_8 += *VAR_12++ - '0';
                    if (*VAR_12=='K') { VAR_8 <<= 10; VAR_12++; }
                    if (*VAR_12=='M') { VAR_8 <<= 20; VAR_12++; }
                    if (*VAR_12=='G') { VAR_8 <<= 30; VAR_12++; }
                    if (*VAR_12=='B') { VAR_12++; }
                    break;
                case 's':
                    VAR_12++;
                    VAR_9=0;
                    while ((*VAR_12>='0') && (*VAR_12<='9'))
                        VAR_9 *= 10, VAR_9 += *VAR_12++ - '0';
                    break;
                case 'P':
                    VAR_12++;
                    VAR_6 = 0;
                    while ((*VAR_12>='0') && (*VAR_12<='9'))
                        VAR_6 *= 10, VAR_6 += *VAR_12++ - '0';
                    if (VAR_6>100) VAR_6 = 100;
                    break;
                case 'L':
                    VAR_12++;
                    VAR_7=0.;
                    while ((*VAR_12>='0') && (*VAR_12<='9'))
                        VAR_7 *= 10, VAR_7 += *VAR_12++ - '0';
                    if (VAR_7>100.) VAR_7=100.;
                    VAR_7 /= 100.;
                    break;
                case 'v':
                    VAR_3 = 4;
                    VAR_12++;
                    break;
                default:
                    return FUNC_2(VAR_10);
                }
    } } }

    FUNC_0(4, "Compressible data Generator \n");
    if (VAR_6!=VAR_0)
        FUNC_0(3, "Compressibility : %i%%\n", VAR_6);
    FUNC_0(3, "Seed = %u \n", (unsigned)VAR_9);

    FUNC_1(VAR_8, (double)VAR_6/100, VAR_7, VAR_9);
    FUNC_0(1, "\n");

    return 0;
}
