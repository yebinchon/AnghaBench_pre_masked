
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int num_untrusted; TYPE_1__* param; } ;
typedef TYPE_2__ X509_STORE_CTX ;
typedef int X509 ;
struct TYPE_5__ {int purpose; int flags; int trust; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int *,int,int ) ;

__attribute__((used)) static int FUNC_3(X509_STORE_CTX *VAR_4, X509 *VAR_5, int VAR_6, int VAR_7,
                         int VAR_8)
{
    int VAR_9 = VAR_1;
    if (VAR_7 >= VAR_4->num_untrusted && VAR_6 == VAR_4->param->purpose)
        VAR_9 = FUNC_1(VAR_5, VAR_4->param->trust, VAR_0);

    switch (VAR_9) {
    case 128:
        return 1;
    case 129:
        break;
    default:
        switch (FUNC_0(VAR_5, VAR_6, VAR_8 > 0)) {
        case 1:
            return 1;
        case 0:
            break;
        default:
            if ((VAR_4->param->flags & VAR_3) == 0)
                return 1;
        }
        break;
    }

    return FUNC_2(VAR_4, VAR_5, VAR_7, VAR_2);
}
