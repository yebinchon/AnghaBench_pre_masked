
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int supply; } ;
typedef TYPE_1__ Ring ;


 int FUNC_0 (int ,unsigned char*,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;

void
FUNC_4(Ring *VAR_0, unsigned char *VAR_1, int VAR_2)
{
    int VAR_3;

    while (VAR_2) {
 VAR_3 = FUNC_1(VAR_2, FUNC_2(VAR_0));
 FUNC_0(VAR_0->supply, VAR_1, VAR_3);
 FUNC_3(VAR_0, VAR_3);
 VAR_2 -= VAR_3;
 VAR_1 += VAR_3;
    }
}
