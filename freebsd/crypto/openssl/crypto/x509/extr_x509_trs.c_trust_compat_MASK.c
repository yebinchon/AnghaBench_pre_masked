
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509_TRUST ;
struct TYPE_4__ {int ex_flags; } ;
typedef TYPE_1__ X509 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int,int ) ;

__attribute__((used)) static int FUNC_1(X509_TRUST *VAR_4, X509 *VAR_5, int VAR_6)
{

    FUNC_0(VAR_5, -1, 0);
    if ((VAR_6 & VAR_1) == 0 && VAR_5->ex_flags & VAR_0)
        return VAR_2;
    else
        return VAR_3;
}
