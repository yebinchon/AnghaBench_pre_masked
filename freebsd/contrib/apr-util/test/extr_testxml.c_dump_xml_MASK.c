
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* first_child; TYPE_2__* attr; int name; } ;
typedef TYPE_1__ apr_xml_elem ;
struct TYPE_6__ {int value; int name; struct TYPE_6__* next; } ;
typedef TYPE_2__ apr_xml_attr ;
typedef int abts_case ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,char*,int ) ;

__attribute__((used)) static void FUNC_2(abts_case *VAR_0, apr_xml_elem *VAR_1, int VAR_2)
{
    apr_xml_attr *VAR_3;
    apr_xml_elem *VAR_4;

    if (VAR_2 == 0) {
        FUNC_1(VAR_0, "mary", VAR_1->name);
    } else {
        FUNC_1(VAR_0, "hmm", VAR_1->name);
    }

    if (VAR_1->attr) {
        VAR_3 = VAR_1->attr;
        FUNC_0(VAR_0, VAR_3);
        FUNC_1(VAR_0, "for", VAR_3->name);
        FUNC_1(VAR_0, "dinner <>=", VAR_3->value);
        VAR_3 = VAR_3->next;
        FUNC_0(VAR_0, VAR_3);
        FUNC_1(VAR_0, "roast", VAR_3->name);
        FUNC_1(VAR_0, "lamb", VAR_3->value);
    }
    if (VAR_1->first_child) {
        VAR_4 = VAR_1->first_child;
        while (VAR_4) {
            FUNC_2(VAR_0, VAR_4, VAR_2 + 1);
            VAR_4 = VAR_4->next;
        }
    }
}
