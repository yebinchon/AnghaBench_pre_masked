
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ex_nscert; } ;
typedef TYPE_1__ X509 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_1(const X509 *VAR_1)
{
    int VAR_2;
    VAR_2 = FUNC_0(VAR_1);
    if (!VAR_2)
        return 0;

    if (VAR_2 != 5 || VAR_1->ex_nscert & VAR_0)
        return VAR_2;
    else
        return 0;
}
