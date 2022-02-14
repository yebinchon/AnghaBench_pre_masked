
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IDEA_KEY_SCHEDULE ;


 int FUNC_0 (unsigned long*,int *) ;
 int FUNC_1 (unsigned long,unsigned char*) ;
 int FUNC_2 (unsigned char const*,unsigned long) ;

void FUNC_3(const unsigned char *VAR_0, unsigned char *VAR_1,
                      IDEA_KEY_SCHEDULE *VAR_2)
{
    unsigned long VAR_3, VAR_4, VAR_5[2];

    FUNC_2(VAR_0, VAR_3);
    VAR_5[0] = VAR_3;
    FUNC_2(VAR_0, VAR_4);
    VAR_5[1] = VAR_4;
    FUNC_0(VAR_5, VAR_2);
    VAR_3 = VAR_5[0];
    FUNC_1(VAR_3, VAR_1);
    VAR_4 = VAR_5[1];
    FUNC_1(VAR_4, VAR_1);
    VAR_3 = VAR_4 = VAR_5[0] = VAR_5[1] = 0;
}
