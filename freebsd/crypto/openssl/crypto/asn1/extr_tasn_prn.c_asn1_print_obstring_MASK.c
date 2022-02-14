
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int flags; scalar_t__ length; scalar_t__ data; } ;
typedef int BIO ;
typedef TYPE_1__ ASN1_STRING ;


 scalar_t__ FUNC_0 (int *,char const*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_3(BIO *VAR_1, const ASN1_STRING *VAR_2, int VAR_3)
{
    if (VAR_2->type == VAR_0) {
        if (FUNC_1(VAR_1, " (%ld unused bits)\n", VAR_2->flags & 0x7) <= 0)
            return 0;
    } else if (FUNC_2(VAR_1, "\n") <= 0)
        return 0;
    if ((VAR_2->length > 0)
        && FUNC_0(VAR_1, (const char *)VAR_2->data, VAR_2->length,
                           VAR_3 + 2) <= 0)
        return 0;
    return 1;
}
