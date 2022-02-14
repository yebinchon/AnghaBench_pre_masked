
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ len; int * val; } ;
typedef TYPE_4__ hx509_octet_string_list ;
typedef int hx509_context ;
typedef int hx509_cert ;
typedef int heim_oid ;
struct TYPE_15__ {size_t len; TYPE_3__* val; } ;
struct TYPE_11__ {int value; int type_id; } ;
struct TYPE_12__ {TYPE_1__ otherName; } ;
struct TYPE_13__ {scalar_t__ element; TYPE_2__ u; } ;
typedef TYPE_5__ GeneralNames ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int *,int const*) ;
 int FUNC_3 (int ,size_t*,TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ,int ,int,char*) ;

int
FUNC_7(hx509_context VAR_2,
      hx509_cert VAR_3,
      const heim_oid *VAR_4,
      hx509_octet_string_list *VAR_5)
{
    GeneralNames VAR_6;
    int VAR_7;
    size_t VAR_8, VAR_9;

    VAR_5->val = ((void*)0);
    VAR_5->len = 0;

    VAR_8 = 0;
    while (1) {
 VAR_7 = FUNC_3(FUNC_0(VAR_3), &VAR_8, &VAR_6);
 VAR_8++;
 if (VAR_7 == VAR_0) {
     return 0;
 } else if (VAR_7 != 0) {
     FUNC_6(VAR_2, 0, VAR_7, "Error searching for SAN");
     FUNC_5(VAR_5);
     return VAR_7;
 }

 for (VAR_9 = 0; VAR_9 < VAR_6.len; VAR_9++) {
     if (VAR_6.val[VAR_9].element == VAR_1 &&
  FUNC_2(&VAR_6.val[VAR_9].u.otherName.type_id, VAR_4) == 0)
     {
  VAR_7 = FUNC_1(VAR_5, &VAR_6.val[VAR_9].u.otherName.value);
  if (VAR_7) {
      FUNC_6(VAR_2, 0, VAR_7,
        "Error adding an exra SAN to "
        "return list");
      FUNC_5(VAR_5);
      FUNC_4(&VAR_6);
      return VAR_7;
  }
     }
 }
 FUNC_4(&VAR_6);
    }
}
