
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* di_prev; TYPE_1__* di_next; } ;
struct TYPE_5__ {int di_name; } ;
struct TYPE_4__ {int di_name; } ;
typedef char Char ;


 scalar_t__ FUNC_0 (char) ;
 int VAR_0 ;
 char* FUNC_1 (char const*,char*) ;
 TYPE_3__* VAR_1 ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (int ) ;

Char *
FUNC_4(Char *VAR_2)
{
    int VAR_3;
    const Char *VAR_4;
    Char *VAR_5;





    if (VAR_2[1] == '-' && (VAR_2[2] == '\0' || VAR_2[2] == '/')) {

 const Char *VAR_6 = FUNC_3 (VAR_0);

 if (VAR_6 && *VAR_6 &&
     !VAR_1->di_next->di_name && !VAR_1->di_prev->di_name)
     return FUNC_1(VAR_6, &VAR_2[2]);
 VAR_3 = -1;
 VAR_5 = &VAR_2[2];
    }
    else if (FUNC_0(VAR_2[1])) {

 VAR_3 = VAR_2[1] - '0';
 for (VAR_5 = &VAR_2[2]; FUNC_0(*VAR_5); VAR_5++)
     VAR_3 = VAR_3 * 10 + (*VAR_5 - '0');
 if (*VAR_5 != '\0' && *VAR_5 != '/')

     return VAR_2;
    }
    else

 return VAR_2;

    VAR_4 = FUNC_2(VAR_3);
    if (VAR_4 == ((void*)0))
 return ((void*)0);
    return FUNC_1(VAR_4, VAR_5);
}
