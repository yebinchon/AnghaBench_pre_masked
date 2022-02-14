
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int ex_flags; scalar_t__ akid; } ;
typedef TYPE_1__ X509 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(X509 *VAR_7, X509 *VAR_8)
{
    if (FUNC_0(FUNC_3(VAR_7),
                      FUNC_2(VAR_8)))
        return VAR_5;

    FUNC_5(VAR_7);
    FUNC_5(VAR_8);

    if (VAR_8->akid) {
        int VAR_9 = FUNC_1(VAR_7, VAR_8->akid);
        if (VAR_9 != VAR_6)
            return VAR_9;
    }

    if (VAR_8->ex_flags & VAR_0) {
        if (FUNC_4(VAR_7, VAR_1))
            return VAR_4;
    } else if (FUNC_4(VAR_7, VAR_2))
        return VAR_3;
    return VAR_6;
}
