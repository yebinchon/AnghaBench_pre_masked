
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ time_t ;
struct autr_ta {int s; scalar_t__ last_change; scalar_t__ pending_count; } ;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (struct autr_ta*,int ,char*) ;

__attribute__((used)) static int
FUNC_7(char* VAR_1, struct autr_ta* VAR_2)
{
        int VAR_3 = (int)FUNC_5(VAR_1), VAR_4 = 0, VAR_5 = 0;
        char* VAR_6 = (char*) FUNC_3(sizeof(char)*VAR_3+1);
        char* VAR_7 = VAR_6;
 if(!VAR_6) {
  FUNC_2("malloc failure in parse");
                return 0;
 }

        while (*VAR_1 != '\0' && *VAR_1 != ';')
                VAR_1++;
        if (*VAR_1 == ';')
                VAR_1++;

        while (*VAR_1 != '\0')
        {
                *VAR_7 = *VAR_1;
                VAR_7++;
                VAR_1++;
        }
        *VAR_7 = '\0';

        VAR_7 = VAR_6;


        VAR_4 = FUNC_4(VAR_7, "state=");
        if (VAR_4 >= (int) FUNC_5(VAR_7))
        {
  FUNC_2("parse error");
                FUNC_1(VAR_6);
                return 0;
        }
        if (VAR_4 <= 0)
                VAR_2->s = 128;
        else
        {
                int VAR_8 = (int) VAR_7[VAR_4] - '0';
                switch(VAR_8)
                {
                        case 129:
                        case 133:
                        case 128:
                        case 132:
                        case 130:
                        case 131:
                                VAR_2->s = VAR_8;
                                break;
                        default:
    FUNC_6(VAR_2, VAR_0, "has undefined "
     "state, considered NewKey");
                                VAR_2->s = 129;
                                break;
                }
        }

        VAR_4 = FUNC_4(VAR_7, "count=");
        if (VAR_4 >= (int) FUNC_5(VAR_7))
        {
  FUNC_2("parse error");
                FUNC_1(VAR_6);
                return 0;
        }
        if (VAR_4 <= 0)
                VAR_2->pending_count = 0;
        else
        {
                VAR_7 += VAR_4;
                VAR_2->pending_count = (uint8_t)FUNC_0(VAR_7);
        }


        VAR_4 = FUNC_4(VAR_7, "lastchange=");
        if (VAR_4 >= (int) FUNC_5(VAR_7))
        {
  FUNC_2("parse error");
                FUNC_1(VAR_6);
                return 0;
        }
        if (VAR_4 >= 0)
        {
                VAR_7 += VAR_4;
                VAR_5 = FUNC_0(VAR_7);
        }
        if (VAR_4 < 0 || !VAR_5)
  VAR_2->last_change = 0;
        else
                VAR_2->last_change = (time_t)VAR_5;

        FUNC_1(VAR_6);
        return 1;
}
