
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int win; } ;
typedef TYPE_1__ LIST ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;



__attribute__((used)) static bool
FUNC_1(int VAR_1, LIST * VAR_2, LIST * VAR_3)
{
    bool VAR_4;

    switch (VAR_1) {
    case 129:
 VAR_4 = (VAR_2->win != 0) && (FUNC_0(VAR_2) != 0);
 break;
    case 128:
 VAR_4 = (VAR_3->win != 0) && (FUNC_0(VAR_3) != 0);
 break;
    default:
 VAR_4 = VAR_0;
 break;
    }
    return VAR_4;
}
