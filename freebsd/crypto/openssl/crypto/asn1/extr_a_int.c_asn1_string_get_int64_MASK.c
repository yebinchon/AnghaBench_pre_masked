
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int type; int length; int data; } ;
typedef TYPE_1__ ASN1_STRING ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(int64_t *VAR_4, const ASN1_STRING *VAR_5, int VAR_6)
{
    if (VAR_5 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }
    if ((VAR_5->type & ~VAR_3) != VAR_6) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    return FUNC_1(VAR_4, VAR_5->data, VAR_5->length, VAR_5->type & VAR_3);
}
