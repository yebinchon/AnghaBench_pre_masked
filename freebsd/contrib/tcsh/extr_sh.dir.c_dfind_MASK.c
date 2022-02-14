
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct directory {struct directory* di_prev; } ;
typedef scalar_t__ Char ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 struct directory* VAR_2 ;
 struct directory VAR_3 ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static struct directory *
FUNC_3(Char *VAR_4)
{
    struct directory *VAR_5;
    int VAR_6;
    Char *VAR_7;

    if (*VAR_4++ != '+')
 return (0);
    for (VAR_7 = VAR_4; FUNC_0(*VAR_7); VAR_7++)
 continue;
    if (*VAR_7)
 return (0);
    VAR_6 = FUNC_1(VAR_4);
    if (VAR_6 <= 0)
 return (0);
    for (VAR_5 = VAR_2; VAR_6 != 0; VAR_6--) {
 if ((VAR_5 = VAR_5->di_prev) == &VAR_3)
     VAR_5 = VAR_5->di_prev;
 if (VAR_5 == VAR_2)
     FUNC_2(VAR_1 | VAR_0);
    }
    return (VAR_5);
}
