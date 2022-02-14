
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; scalar_t__ f_seek; } ;
struct TYPE_4__ {TYPE_2__ w_end; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 () ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void
FUNC_4(void)
{
    if (VAR_2->w_end.type == VAR_0 && VAR_2->w_end.f_seek == 0) {
 FUNC_2(VAR_1, 0, ((void*)0));
 FUNC_1(&VAR_2->w_end);
 VAR_2->w_end.f_seek--;
    }
    else {
 FUNC_0(&VAR_2->w_end);
    }
    FUNC_3();
}
