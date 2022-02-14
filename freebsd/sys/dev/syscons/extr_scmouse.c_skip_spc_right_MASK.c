
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xsize; int vtb; } ;
typedef TYPE_1__ scr_stat ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int
FUNC_2(scr_stat *VAR_0, int VAR_1)
{
    int VAR_2;
    int VAR_3;

    for (VAR_3 = VAR_1 % VAR_0->xsize; VAR_3 < VAR_0->xsize; ++VAR_3) {
 VAR_2 = FUNC_1(&VAR_0->vtb, VAR_1);
 if (!FUNC_0(VAR_2))
     break;
 ++VAR_1;
    }
    return VAR_3;
}
