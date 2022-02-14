
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int krb5_context ;
struct TYPE_8__ {int length; int data; } ;
struct TYPE_7__ {TYPE_3__ address; void* addr_type; } ;
typedef TYPE_1__ krb5_address ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,unsigned long*,int ) ;
 int FUNC_2 (int ,int,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ,int,int ,unsigned long) ;

__attribute__((used)) static int
FUNC_6(krb5_context VAR_2, const krb5_address *VAR_3,
     unsigned long VAR_4, krb5_address *VAR_5, krb5_address *VAR_6)
{
    unsigned long VAR_7;
    uint32_t VAR_8, VAR_9, VAR_10 = 0xffffffff;

    if (VAR_4 > 32) {
 FUNC_5(VAR_2, VAR_1,
          FUNC_0("IPv4 prefix too large (%ld)", "len"), VAR_4);
 return VAR_1;
    }
    VAR_10 = VAR_10 << (32 - VAR_4);

    FUNC_1(VAR_3->address.data, &VAR_7, VAR_3->address.length);

    VAR_8 = VAR_7 & VAR_10;
    VAR_9 = VAR_8 | ~VAR_10;

    VAR_5->addr_type = VAR_0;
    if(FUNC_3(&VAR_5->address, 4) != 0)
 return -1;
    FUNC_2(VAR_5->address.data, VAR_8, VAR_5->address.length);

    VAR_6->addr_type = VAR_0;
    if(FUNC_3(&VAR_6->address, 4) != 0) {
 FUNC_4(VAR_2, VAR_5);
 return -1;
    }
    FUNC_2(VAR_6->address.data, VAR_9, VAR_6->address.length);

    return 0;
}
