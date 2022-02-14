
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct If {scalar_t__* form; } ;
typedef int Token ;
typedef int Boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 struct If const* VAR_5 ;
 struct If* VAR_6 ;
 int VAR_7 ;

int
FUNC_3(const struct If *VAR_8, char *VAR_9, Boolean *VAR_10, int VAR_11, Boolean VAR_12)
{
    static const struct If *VAR_13;
    const struct If *VAR_14 = VAR_5;
    char *VAR_15 = VAR_3;
    Token VAR_16 = VAR_4;
    int VAR_17;

    VAR_7 = VAR_12;

    while (*VAR_9 == ' ' || *VAR_9 == '\t')
 VAR_9++;

    if (VAR_8 == ((void*)0) && (VAR_8 = VAR_13) == ((void*)0)) {

 for (VAR_8 = VAR_6; ; VAR_8++)
     if (VAR_8->form[0] == 0)
  break;
 VAR_13 = VAR_8;
    }
    FUNC_1(VAR_8 != ((void*)0));

    VAR_5 = VAR_8;
    VAR_3 = VAR_9;
    VAR_4 = VAR_2;

    VAR_17 = FUNC_2(VAR_10);

    if (VAR_17 == VAR_0 && VAR_11)
 FUNC_0(VAR_1, "Malformed conditional (%s)", VAR_9);

    VAR_5 = VAR_14;
    VAR_3 = VAR_15;
    VAR_4 = VAR_16;

    return VAR_17;
}
