
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int Strbuf ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 (int*,char const) ;
 int FUNC_1 (int*) ;
 TYPE_1__* VAR_0 ;

int
FUNC_2(struct Strbuf *VAR_1, struct Strbuf *VAR_2, int *VAR_3)
{
    FUNC_1(VAR_2);
    FUNC_1(VAR_3);
    if (VAR_0 && VAR_0->name) {
 const char *VAR_4;

 for (VAR_4 = VAR_0->name; *VAR_4 != '\0'; VAR_4++)
     FUNC_0(VAR_1, *VAR_4);
 VAR_0++;
 return 1;
    }
    return 0;
}
