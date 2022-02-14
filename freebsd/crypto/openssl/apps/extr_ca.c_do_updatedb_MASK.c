
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int length; int data; } ;
struct TYPE_9__ {TYPE_1__* db; } ;
struct TYPE_8__ {int data; } ;
typedef TYPE_2__ CA_DB ;
typedef TYPE_3__ ASN1_UTCTIME ;


 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 (int ,char*,char*) ;
 char VAR_0 ;
 char VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (TYPE_3__*,int ) ;
 char* FUNC_5 (int,char*) ;
 int VAR_5 ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (int ) ;
 char** FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;

__attribute__((used)) static int FUNC_11(CA_DB *VAR_6)
{
    ASN1_UTCTIME *VAR_7 = ((void*)0);
    int VAR_8, VAR_9 = 0;
    int VAR_10, VAR_11;
    char **VAR_12, *VAR_13;

    VAR_7 = FUNC_1();
    if (VAR_7 == ((void*)0))
        return -1;


    if (FUNC_4(VAR_7, 0) == ((void*)0)) {
        FUNC_0(VAR_7);
        return -1;
    }
    VAR_13 = FUNC_5(VAR_7->length + 1, "time string");

    FUNC_6(VAR_13, VAR_7->data, VAR_7->length);
    VAR_13[VAR_7->length] = '\0';

    if (FUNC_10(VAR_13, "49", 2) <= 0)
        VAR_11 = 1;
    else
        VAR_11 = 0;

    for (VAR_8 = 0; VAR_8 < FUNC_7(VAR_6->db->data); VAR_8++) {
        VAR_12 = FUNC_8(VAR_6->db->data, VAR_8);

        if (VAR_12[VAR_4][0] == VAR_1) {

            if (FUNC_10(VAR_12[VAR_2], "49", 2) <= 0)
                VAR_10 = 1;
            else
                VAR_10 = 0;

            if (VAR_10 == VAR_11) {

                if (FUNC_9(VAR_12[VAR_2], VAR_13) <= 0) {
                    VAR_12[VAR_4][0] = VAR_0;
                    VAR_12[VAR_4][1] = '\0';
                    VAR_9++;

                    FUNC_2(VAR_5, "%s=Expired\n", VAR_12[VAR_3]);
                }
            } else if (VAR_10 < VAR_11) {
                VAR_12[VAR_4][0] = VAR_0;
                VAR_12[VAR_4][1] = '\0';
                VAR_9++;

                FUNC_2(VAR_5, "%s=Expired\n", VAR_12[VAR_3]);
            }

        }
    }

    FUNC_0(VAR_7);
    FUNC_3(VAR_13);
    return VAR_9;
}
