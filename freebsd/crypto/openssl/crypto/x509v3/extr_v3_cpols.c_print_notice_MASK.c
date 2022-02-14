
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* exptext; TYPE_4__* noticeref; } ;
typedef TYPE_3__ USERNOTICE ;
struct TYPE_9__ {int noticenos; TYPE_1__* organization; } ;
struct TYPE_7__ {char* data; } ;
struct TYPE_6__ {char* data; } ;
typedef TYPE_4__ NOTICEREF ;
typedef int BIO ;
typedef int ASN1_INTEGER ;


 int FUNC_0 (int *,char*,int,char*,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(BIO *VAR_0, USERNOTICE *VAR_1, int VAR_2)
{
    int VAR_3;
    if (VAR_1->noticeref) {
        NOTICEREF *VAR_4;
        VAR_4 = VAR_1->noticeref;
        FUNC_0(VAR_0, "%*sOrganization: %s\n", VAR_2, "",
                   VAR_4->organization->data);
        FUNC_0(VAR_0, "%*sNumber%s: ", VAR_2, "",
                   FUNC_4(VAR_4->noticenos) > 1 ? "s" : "");
        for (VAR_3 = 0; VAR_3 < FUNC_4(VAR_4->noticenos); VAR_3++) {
            ASN1_INTEGER *VAR_5;
            char *VAR_6;
            VAR_5 = FUNC_5(VAR_4->noticenos, VAR_3);
            if (VAR_3)
                FUNC_1(VAR_0, ", ");
            if (VAR_5 == ((void*)0))
                FUNC_1(VAR_0, "(null)");
            else {
                VAR_6 = FUNC_3(((void*)0), VAR_5);
                if (VAR_6 == ((void*)0))
                    return;
                FUNC_1(VAR_0, VAR_6);
                FUNC_2(VAR_6);
            }
        }
        FUNC_1(VAR_0, "\n");
    }
    if (VAR_1->exptext)
        FUNC_0(VAR_0, "%*sExplicit Text: %s\n", VAR_2, "",
                   VAR_1->exptext->data);
}
