
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sc_cnstate {int kbd_opened; } ;
struct consdev {int dummy; } ;
struct TYPE_2__ {int sc; } ;


 int FUNC_0 (struct sc_cnstate*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ,struct sc_cnstate*) ;
 int FUNC_2 (int ,struct sc_cnstate*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct consdev *VAR_1)
{
    struct sc_cnstate VAR_2;
    int VAR_3, VAR_4;


    FUNC_2(VAR_0->sc, &VAR_2, 1);
    VAR_4 = FUNC_3();
    if (!VAR_2.kbd_opened) {
 FUNC_4(VAR_4);
 FUNC_1(VAR_0->sc, &VAR_2);
 return -1;
    }
    VAR_3 = FUNC_0(&VAR_2);
    FUNC_4(VAR_4);
    FUNC_1(VAR_0->sc, &VAR_2);
    return VAR_3;
}
