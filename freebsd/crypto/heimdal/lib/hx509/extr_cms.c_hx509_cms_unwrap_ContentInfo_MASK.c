
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int length; int data; } ;
typedef TYPE_1__ heim_oid ;
typedef TYPE_1__ heim_octet_string ;
struct TYPE_14__ {int * content; int contentType; } ;
typedef TYPE_3__ ContentInfo ;


 int FUNC_0 (int ,int ,TYPE_3__*,size_t*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

int
FUNC_6(const heim_octet_string *VAR_0,
        heim_oid *VAR_1,
        heim_octet_string *VAR_2,
        int *VAR_3)
{
    ContentInfo VAR_4;
    size_t VAR_5;
    int VAR_6;

    FUNC_5(VAR_1, 0, sizeof(*VAR_1));
    FUNC_5(VAR_2, 0, sizeof(*VAR_2));

    VAR_6 = FUNC_0(VAR_0->data, VAR_0->length, &VAR_4, &VAR_5);
    if (VAR_6)
 return VAR_6;

    VAR_6 = FUNC_2(&VAR_4.contentType, VAR_1);
    if (VAR_6) {
 FUNC_4(&VAR_4);
 return VAR_6;
    }
    if (VAR_4.content) {
 VAR_6 = FUNC_1(VAR_4.content, VAR_2);
 if (VAR_6) {
     FUNC_3(VAR_1);
     FUNC_4(&VAR_4);
     return VAR_6;
 }
    } else
 FUNC_5(VAR_2, 0, sizeof(*VAR_2));

    if (VAR_3)
 *VAR_3 = (VAR_4.content != ((void*)0)) ? 1 : 0;

    FUNC_4(&VAR_4);

    return 0;
}
