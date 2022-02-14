
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct consdev {int dummy; } ;
struct TYPE_2__ {int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct consdev* VAR_3 ;
 int FUNC_0 (int*,int*) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void
FUNC_4(struct consdev *VAR_4)
{
    int VAR_5;
    int VAR_6;

    FUNC_0(&VAR_5, &VAR_6);
    FUNC_3(VAR_5, VAR_6 | VAR_0);
    VAR_2 = VAR_5;
    VAR_1 = FUNC_2(FUNC_1(VAR_5, VAR_0)->dev[0]);
    VAR_3 = VAR_4;
}
