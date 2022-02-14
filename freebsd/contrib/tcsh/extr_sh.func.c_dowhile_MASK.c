
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ a_seek; scalar_t__ f_seek; int type; } ;
struct whyle {scalar_t__ w_fename; struct whyle* w_next; TYPE_1__ w_end; int w_start; } ;
struct command {int dummy; } ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct command*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ***,int) ;
 int FUNC_4 (int ***) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 struct whyle* VAR_7 ;
 struct whyle* FUNC_8 (int,int) ;
 int VAR_8 ;

void
FUNC_9(Char **VAR_9, struct command *VAR_10)
{
    int VAR_11;
    int VAR_12 = VAR_7 != 0 &&
     FUNC_0(&VAR_7->w_start, &VAR_5) &&
     VAR_7->w_fename == 0;

    FUNC_1(VAR_10);
    VAR_9++;




    if (VAR_6)
 VAR_11 = 0;
    else if (VAR_4 && !VAR_12)
 VAR_11 = !FUNC_3(&VAR_9, 1);
    else
 VAR_11 = !FUNC_4(&VAR_9);
    if (*VAR_9 && !VAR_6)
 FUNC_6(VAR_1 | VAR_0);
    if (!VAR_12) {
 struct whyle *VAR_13 = FUNC_8(1, sizeof(*VAR_13));

 VAR_13->w_start = VAR_5;
 VAR_13->w_end.type = VAR_2;
 VAR_13->w_end.f_seek = 0;
 VAR_13->w_end.a_seek = 0;
 VAR_13->w_next = VAR_7;
 VAR_7 = VAR_13;
 VAR_8 = VAR_3;
 if (VAR_4) {



     FUNC_5();
     FUNC_2();
     return;
 }
    }
    if (VAR_11)

 FUNC_7();
}
