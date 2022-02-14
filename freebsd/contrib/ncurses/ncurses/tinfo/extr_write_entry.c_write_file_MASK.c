
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int TERMTYPE ;
typedef int FILE ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 unsigned int FUNC_6 (char*,int,size_t,int *) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int *,char*,unsigned int*,unsigned int) ;

__attribute__((used)) static void
FUNC_9(char *VAR_3, TERMTYPE *VAR_4)
{
    char VAR_5[VAR_1];
    unsigned VAR_6 = sizeof(VAR_5);
    unsigned VAR_7 = 0;

    FILE *VAR_8 = (FUNC_1(VAR_3, VAR_2) == 0) ? FUNC_5(VAR_3, "wb") : 0;
    if (VAR_8 == 0) {
 FUNC_7(VAR_3);
 FUNC_2("can't open %s/%s", FUNC_3(0), VAR_3);
    }
    FUNC_0(1, ("Created %s", VAR_3));

    if (FUNC_8(VAR_4, VAR_5, &VAR_7, VAR_6) == VAR_0
 || FUNC_6(VAR_5, sizeof(char), (size_t) VAR_7, VAR_8) != VAR_7) {
 FUNC_2("error writing %s/%s", FUNC_3(0), VAR_3);
    }

    FUNC_4(VAR_8);
}
