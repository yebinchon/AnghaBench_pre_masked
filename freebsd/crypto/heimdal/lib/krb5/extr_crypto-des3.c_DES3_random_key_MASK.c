
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * data; } ;
struct TYPE_5__ {TYPE_1__ keyvalue; } ;
typedef TYPE_2__ krb5_keyblock ;
typedef int krb5_context ;
typedef int DES_cblock ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void
FUNC_3(krb5_context VAR_0,
  krb5_keyblock *VAR_1)
{
    DES_cblock *VAR_2 = VAR_1->keyvalue.data;
    do {
 FUNC_2(VAR_2, 3 * sizeof(DES_cblock));
 FUNC_1(&VAR_2[0]);
 FUNC_1(&VAR_2[1]);
 FUNC_1(&VAR_2[2]);
    } while(FUNC_0(&VAR_2[0]) ||
     FUNC_0(&VAR_2[1]) ||
     FUNC_0(&VAR_2[2]));
}
