
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* db; } ;
struct TYPE_4__ {int data; } ;
typedef TYPE_2__ CA_DB ;


 char VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 char** FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(CA_DB *VAR_3, char *VAR_4, char VAR_5)
{
    char **VAR_6;
    int VAR_7;
    if (VAR_4 == ((void*)0))
        return -1;
    if (VAR_5 == VAR_0) {
        for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3->db->data); VAR_7++) {
            VAR_6 = FUNC_1(VAR_3->db->data, VAR_7);
            if (VAR_6[VAR_2][0] == VAR_0
                && FUNC_2(VAR_4, VAR_6[VAR_1]) == 0)
                return VAR_7;
        }
    } else {
        for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3->db->data); VAR_7++) {
            VAR_6 = FUNC_1(VAR_3->db->data, VAR_7);

            if (VAR_6[VAR_2][0] != VAR_0
                && FUNC_2(VAR_4, VAR_6[VAR_1]) == 0)
                return VAR_7;
        }
    }

    return -1;
}
