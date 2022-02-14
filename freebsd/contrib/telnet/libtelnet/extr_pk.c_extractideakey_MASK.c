
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MINT ;
typedef int IdeaData ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,short,int *,short*) ;

__attribute__((used)) static void
FUNC_4(MINT *VAR_1, IdeaData *VAR_2)
{
        MINT *VAR_3;
        MINT *VAR_4;
        short VAR_5;
        int VAR_6;
        short VAR_7 = (1 << 8);
        char *VAR_8;

        VAR_4 = FUNC_0(0);
        VAR_3 = FUNC_0(0);
        FUNC_1(VAR_1, VAR_4, VAR_3);
        for (VAR_6 = 0; VAR_6 < ((VAR_0 - 128) / 8); VAR_6++) {
                FUNC_3(VAR_3, VAR_7, VAR_3, &VAR_5);
        }
        VAR_8 = (char *)VAR_2;
        for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {
                FUNC_3(VAR_3, VAR_7, VAR_3, &VAR_5);
                *VAR_8++ = VAR_5;
        }
 FUNC_2(VAR_4);
        FUNC_2(VAR_3);
}
