
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* di_name; } ;
typedef char Char ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 size_t FUNC_2 (char*) ;
 char* FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int (*) (char*)) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*,char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (size_t) ;

__attribute__((used)) static Char *
FUNC_10(Char *VAR_1)
{
    Char *VAR_2, *VAR_3;

    if (!FUNC_0(VAR_1))
    {
 Char *VAR_4, *VAR_5;
 size_t VAR_6;

 VAR_6 = FUNC_2(VAR_0->di_name);
 if (VAR_6 == 1)
     VAR_6 = 0;
 VAR_2 = FUNC_9((VAR_6 + FUNC_2(VAR_1) + 2) * sizeof(Char));
 for (VAR_4 = VAR_2, VAR_5 = VAR_0->di_name; (*VAR_4++ = *VAR_5++) != '\0';)
     continue;
 if (VAR_6)
     VAR_4[-1] = '/';
 else
     VAR_4--;
 FUNC_1(VAR_4, VAR_1);
 FUNC_8(VAR_1);
 VAR_1 = VAR_2;
 VAR_2 += VAR_6;
    }
    else
 VAR_2 = VAR_1;
    FUNC_5(VAR_1, FUNC_8);
    VAR_3 = FUNC_7(VAR_1, VAR_2);
    FUNC_4(VAR_1);
    FUNC_6(VAR_1);

    return VAR_3;
}
