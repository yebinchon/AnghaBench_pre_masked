
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cell_list {char const* cell; struct cell_list* next; } ;


 struct cell_list* VAR_0 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (struct cell_list*) ;
 struct cell_list* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 char const* FUNC_4 (char const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (char*,char const*,...) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_2, int VAR_3)
{
    struct cell_list *VAR_4, **VAR_5;
    const char *VAR_6 = VAR_2;
    if(VAR_3){
 VAR_6 = FUNC_0(VAR_2);
 if(VAR_6 == ((void*)0)){
     FUNC_5("No cell matching \"%s\" found.", VAR_2);
     return -1;
 }
 if(VAR_1 && FUNC_3(VAR_6, VAR_2) != 0)
     FUNC_5("Cell \"%s\" expanded to \"%s\"", VAR_2, VAR_6);
    }


    for(VAR_4 = VAR_0, VAR_5 = &VAR_0; VAR_4; VAR_5 = &VAR_4->next, VAR_4 = VAR_4->next)
 if(FUNC_3(VAR_4->cell, VAR_6) == 0)
     return 0;
    VAR_4 = FUNC_2(sizeof(*VAR_4));
    if(VAR_4 == ((void*)0))
 return -1;
    VAR_4->cell = FUNC_4(VAR_6);
    if(VAR_4->cell == ((void*)0)) {
 FUNC_1(VAR_4);
 return -1;
    }
    VAR_4->next = ((void*)0);
    *VAR_5 = VAR_4;
    return 0;
}
