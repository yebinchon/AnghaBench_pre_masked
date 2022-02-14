
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

ldns_status
FUNC_0(char *VAR_3, size_t *VAR_4)
{
    char *VAR_5;
    char *VAR_6;
    *VAR_4 = 0;

    for (VAR_5 = VAR_6 = VAR_3; *VAR_5 != '\0'; VAR_5++,VAR_6++) {
        switch (*VAR_5) {
            case '.':
                if (VAR_5[1] == '.') {
      return VAR_1;
                }
                *VAR_6 = *VAR_5;
                (*VAR_4)++;
                break;
            case '\\':
                if ('0' <= VAR_5[1] && VAR_5[1] <= '9' &&
                    '0' <= VAR_5[2] && VAR_5[2] <= '9' &&
                    '0' <= VAR_5[3] && VAR_5[3] <= '9') {

                    int VAR_7 = ((VAR_5[1] - '0') * 100 +
                           (VAR_5[2] - '0') * 10 + (VAR_5[3] - '0'));

                    if (0 <= VAR_7 && VAR_7 <= 255) {

                        VAR_5 += 3;
                        *VAR_6 = VAR_7;
                        (*VAR_4)++;
                    } else {
                        return VAR_0;
                    }
                } else {


                    *VAR_6 = *++VAR_5;
                    (*VAR_4)++;
                }
                break;
            case '\"':



                *VAR_6 = *++VAR_5;
                (*VAR_4)++;

                if ( *VAR_5 == '\0' ) {

                    *VAR_6 = '\0';
      return VAR_2;
                }
                break;
            default:
                *VAR_6 = *VAR_5;
                (*VAR_4)++;
                break;
        }
    }
    *VAR_6 = '\0';
    return VAR_2;
}
