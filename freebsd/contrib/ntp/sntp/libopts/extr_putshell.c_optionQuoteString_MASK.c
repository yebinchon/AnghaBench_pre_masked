
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int ,char*) ;






 char* VAR_0 ;
 char const VAR_1 ;


 int FUNC_1 (char) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (char*,char*,unsigned char) ;
 int FUNC_4 (char const*,size_t) ;
 size_t FUNC_5 (char const*) ;

char const *
FUNC_6(char const * VAR_2, char const * VAR_3)
{
    size_t VAR_4 = FUNC_5(VAR_3);
    char * VAR_5;
    char * VAR_6 = VAR_5 = FUNC_0(FUNC_4(VAR_2, VAR_4), "quot str");
    *(VAR_5++) = '"';

    for (;;) {
        unsigned char VAR_7 = (unsigned char)*VAR_2;
        if ((VAR_7 >= ' ') && (VAR_7 <= '~')) {
            if ((VAR_7 == '"') || (VAR_7 == '\\'))



                *(VAR_5++) = '\\';
            *(VAR_5++) = (char)VAR_7;

        } else switch (VAR_7) {

        case 135: { *(VAR_5++) = '\\'; *(VAR_5++) = ('a'); }; break;
        case 134: { *(VAR_5++) = '\\'; *(VAR_5++) = ('b'); }; break;
        case 131: { *(VAR_5++) = '\\'; *(VAR_5++) = ('t'); }; break;
        case 128: { *(VAR_5++) = '\\'; *(VAR_5++) = ('v'); }; break;
        case 132: { *(VAR_5++) = '\\'; *(VAR_5++) = ('f'); }; break;
        case 133: { *(VAR_5++) = '\\'; *(VAR_5++) = ('r'); }; break;

        case 130:




            while (*++VAR_2 == VAR_1)
                { *(VAR_5++) = '\\'; *(VAR_5++) = ('n'); };




            if (*VAR_2 != 129) {
                FUNC_2(VAR_5, VAR_3, VAR_4);
                VAR_5 += VAR_4;

                continue;
            }

            { *(VAR_5++) = '\\'; *(VAR_5++) = ('n'); };


        case 129:




            *(VAR_5++) = '"';
            *VAR_5 = 129;
            return VAR_6;

        default:




            FUNC_3(VAR_5, VAR_0, VAR_7);
            VAR_5 += 4;
        }

        VAR_2++;

    }
}
