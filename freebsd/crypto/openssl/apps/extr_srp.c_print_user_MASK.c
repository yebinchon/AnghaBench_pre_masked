
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* db; } ;
struct TYPE_6__ {int data; } ;
typedef TYPE_2__ CA_DB ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,char) ;
 int FUNC_1 (TYPE_2__*,int,int,char*) ;
 char** FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(CA_DB *VAR_2, int VAR_3, int VAR_4)
{
    if (VAR_4 > 0) {
        char **VAR_5 = FUNC_2(VAR_2->db->data, VAR_3);

        if (VAR_5[VAR_1][0] != 'I') {
            FUNC_1(VAR_2, VAR_3, VAR_4, "User entry");
            FUNC_1(VAR_2, FUNC_0(VAR_2, VAR_5[VAR_0], 'I'), VAR_4,
                        "g N entry");
        }

    }
}
