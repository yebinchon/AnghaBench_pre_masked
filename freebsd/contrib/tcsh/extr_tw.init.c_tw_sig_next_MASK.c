
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int Strbuf ;
struct TYPE_2__ {char* iname; } ;


 int FUNC_0 (int*,char const) ;
 int FUNC_1 (int*) ;
 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

int
FUNC_2(struct Strbuf *VAR_3, struct Strbuf *VAR_4, int *VAR_5)
{
    FUNC_1(VAR_4);
    FUNC_1(VAR_5);
    for (;VAR_2 < VAR_1; VAR_2++) {
 const char *VAR_6;

 if (VAR_0[VAR_2].iname == ((void*)0))
     continue;

 for (VAR_6 = VAR_0[VAR_2].iname; *VAR_6 != '\0'; VAR_6++)
     FUNC_0(VAR_3, *VAR_6);
 VAR_2++;
 return 1;
    }
    return 0;
}
