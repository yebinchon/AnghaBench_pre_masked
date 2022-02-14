
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; scalar_t__ f_seek; } ;
struct whyle {TYPE_1__ w_end; struct whyle* w_next; } ;
typedef int Char ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 () ;
 struct whyle* VAR_3 ;
 int VAR_4 ;

void
FUNC_4(Char *VAR_5)
{
    struct whyle *VAR_6;




    VAR_4 = VAR_2;
    for (VAR_6 = VAR_3; VAR_6; VAR_6 = VAR_6->w_next)
 if (VAR_6->w_end.type == VAR_0 && VAR_6->w_end.f_seek == 0) {
     FUNC_2(VAR_1, 0, ((void*)0));
     FUNC_1(&VAR_6->w_end);
 }
 else {
     FUNC_0(&VAR_6->w_end);
 }
    FUNC_2(VAR_2, 0, VAR_5);



    FUNC_3();
}
