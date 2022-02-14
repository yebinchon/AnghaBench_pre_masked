
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int idp_flags; unsigned int idp_reasons; TYPE_1__* idp; } ;
typedef TYPE_2__ X509_CRL ;
struct TYPE_12__ {int ex_flags; int crldp; } ;
typedef TYPE_3__ X509 ;
struct TYPE_13__ {unsigned int dp_reasons; int distpoint; } ;
struct TYPE_10__ {int distpoint; } ;
typedef TYPE_4__ DIST_POINT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(X509 *VAR_5, X509_CRL *VAR_6, int VAR_7,
                           unsigned int *VAR_8)
{
    int VAR_9;
    if (VAR_6->idp_flags & VAR_2)
        return 0;
    if (VAR_5->ex_flags & VAR_1) {
        if (VAR_6->idp_flags & VAR_4)
            return 0;
    } else {
        if (VAR_6->idp_flags & VAR_3)
            return 0;
    }
    *VAR_8 = VAR_6->idp_reasons;
    for (VAR_9 = 0; VAR_9 < FUNC_2(VAR_5->crldp); VAR_9++) {
        DIST_POINT *VAR_10 = FUNC_3(VAR_5->crldp, VAR_9);
        if (FUNC_0(VAR_10, VAR_6, VAR_7)) {
            if (!VAR_6->idp || FUNC_1(VAR_10->distpoint, VAR_6->idp->distpoint)) {
                *VAR_8 &= VAR_10->dp_reasons;
                return 1;
            }
        }
    }
    if ((!VAR_6->idp || !VAR_6->idp->distpoint)
        && (VAR_7 & VAR_0))
        return 1;
    return 0;
}
