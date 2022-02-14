
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int X509V3_EXT_METHOD ;
struct TYPE_2__ {int excludedSubtrees; int permittedSubtrees; } ;
typedef TYPE_1__ NAME_CONSTRAINTS ;
typedef int BIO ;


 int FUNC_0 (int const*,int ,int *,int,char*) ;

__attribute__((used)) static int FUNC_1(const X509V3_EXT_METHOD *VAR_0, void *VAR_1,
                                BIO *VAR_2, int VAR_3)
{
    NAME_CONSTRAINTS *VAR_4 = VAR_1;
    FUNC_0(VAR_0, VAR_4->permittedSubtrees,
                            VAR_2, VAR_3, "Permitted");
    FUNC_0(VAR_0, VAR_4->excludedSubtrees,
                            VAR_2, VAR_3, "Excluded");
    return 1;
}
