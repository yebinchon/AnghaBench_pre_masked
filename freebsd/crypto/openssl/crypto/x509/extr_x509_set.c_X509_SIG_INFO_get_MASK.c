
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int mdnid; int pknid; int secbits; int flags; } ;
typedef TYPE_1__ X509_SIG_INFO ;


 int VAR_0 ;

int FUNC_0(const X509_SIG_INFO *VAR_1, int *VAR_2, int *VAR_3,
                      int *VAR_4, uint32_t *VAR_5)
{
    if (VAR_2 != ((void*)0))
        *VAR_2 = VAR_1->mdnid;
    if (VAR_3 != ((void*)0))
        *VAR_3 = VAR_1->pknid;
    if (VAR_4 != ((void*)0))
        *VAR_4 = VAR_1->secbits;
    if (VAR_5 != ((void*)0))
        *VAR_5 = VAR_1->flags;
    return (VAR_1->flags & VAR_0) != 0;
}
