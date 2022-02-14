
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; char* path; } ;
typedef int Lst ;
typedef TYPE_1__ GNode ;


 char* FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,TYPE_1__*,int ) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,size_t,char*,char*) ;
 int FUNC_5 (char*) ;

void
FUNC_6(GNode *VAR_1, Lst VAR_2)
{
    char *VAR_3;
    size_t VAR_4 = FUNC_5(VAR_1->name) + 6 - 2;

    VAR_3 = FUNC_2(VAR_4);
    FUNC_4(VAR_3, VAR_4, "lib%s.a", &VAR_1->name[2]);

    VAR_1->path = FUNC_0(VAR_3, VAR_2);

    FUNC_3(VAR_3);




    FUNC_1(VAR_0, VAR_1->path == ((void*)0) ? VAR_1->name : VAR_1->path, VAR_1, 0);

}
