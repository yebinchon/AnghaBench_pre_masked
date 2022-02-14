
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
typedef int krb5_storage ;
typedef int krb5_error_code ;
typedef int krb5_data ;
struct TYPE_7__ {int length; int data; } ;
struct TYPE_6__ {scalar_t__ addr_type; TYPE_2__ address; } ;
typedef TYPE_1__ krb5_address ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,unsigned long*,int) ;
 int FUNC_1 (TYPE_1__*,char*,size_t,size_t*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (char*,size_t,char*,int) ;
 size_t FUNC_9 (char*,char*,size_t) ;

__attribute__((used)) static int
FUNC_10 (const krb5_address *VAR_5, char *VAR_6, size_t VAR_7)
{
    krb5_error_code VAR_8;
    krb5_address VAR_9, VAR_10;
    uint16_t VAR_11 = 0;
    size_t VAR_12 = 0, VAR_13, VAR_14 = 0;
    krb5_storage *VAR_15;

    VAR_15 = FUNC_4((krb5_data*)FUNC_7(&VAR_5->address));
    if (VAR_15 == ((void*)0))
        return VAR_1;


    FUNC_6(VAR_15, VAR_3);

    FUNC_5(VAR_15, 2, VAR_4);
    FUNC_2(VAR_15, &VAR_9);

    FUNC_5(VAR_15, 2, VAR_4);
    FUNC_2(VAR_15, &VAR_10);
    FUNC_3(VAR_15);
    if(VAR_10 == VAR_2 && VAR_10 == 2) {
 unsigned long VAR_16;
 FUNC_0(VAR_10, &VAR_16, 2);
 VAR_11 = VAR_16;
    }
    VAR_13 = FUNC_9(VAR_6, "ADDRPORT:", VAR_7);
    VAR_12 += VAR_13;
    if (VAR_7 > VAR_13)
 VAR_14 += VAR_13;
    else
 VAR_14 = VAR_7;

    VAR_8 = FUNC_1(&VAR_9, VAR_6 + VAR_14, VAR_7 - VAR_14, &VAR_13);
    if (VAR_8)
 return VAR_8;
    VAR_12 += VAR_13;
    if (VAR_7 - VAR_14 > VAR_13)
 VAR_14 += VAR_13;
    else
 VAR_14 = VAR_7;

    VAR_8 = FUNC_8(VAR_6 + VAR_14, VAR_7 - VAR_14, ",PORT=%u", VAR_11);
    if (VAR_8 < 0)
 return VAR_0;
    VAR_12 += VAR_8;
    return VAR_12;
}
