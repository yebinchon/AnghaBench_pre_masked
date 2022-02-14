
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int length; int choice; } ;
typedef TYPE_1__ LIST ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_3(int VAR_2, LIST * VAR_3)
{
    if (FUNC_0(VAR_3) != 0) {
 int VAR_4 = VAR_3->length - 1;

 VAR_2 += VAR_3->choice;
 if (VAR_2 < 0)
     VAR_2 = 0;
 if (VAR_2 > VAR_4)
     VAR_2 = VAR_4;
 VAR_3->choice = VAR_2;
 FUNC_2(VAR_3);
 FUNC_1(VAR_3);
 return VAR_1;
    }
    return VAR_0;
}
