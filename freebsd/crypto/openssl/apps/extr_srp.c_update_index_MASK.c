
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int error; } ;
struct TYPE_4__ {TYPE_3__* db; } ;
typedef TYPE_1__ CA_DB ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char**) ;
 int FUNC_2 (TYPE_3__*,char**) ;
 char** FUNC_3 (int,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(CA_DB *VAR_2, char **VAR_3)
{
    char **VAR_4;
    int VAR_5;

    VAR_4 = FUNC_3(sizeof(*VAR_4) * (VAR_0 + 1), "row pointers");
    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
        VAR_4[VAR_5] = VAR_3[VAR_5];
    VAR_4[VAR_0] = ((void*)0);

    if (!FUNC_2(VAR_2->db, VAR_4)) {
        FUNC_0(VAR_1, "failed to update srpvfile\n");
        FUNC_0(VAR_1, "TXT_DB error number %ld\n", VAR_2->db->error);
        FUNC_1(VAR_4);
        return 0;
    }
    return 1;
}
