
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct process {int p_flags; struct process* p_next; } ;
struct TYPE_2__ {struct process* p_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct process*) ;
 int FUNC_3 (struct process*,int) ;
 TYPE_1__ VAR_9 ;

void
FUNC_4(void)
{
    struct process *VAR_10;
    int VAR_11;

    VAR_7 = 0;
    for (VAR_10 = VAR_9.p_next; VAR_10 != ((void*)0); VAR_10 = VAR_10->p_next) {
 if (VAR_10->p_flags & VAR_2) {
     VAR_8++;
     FUNC_0(&VAR_8, VAR_6);
     VAR_10->p_flags &= ~VAR_2;
     VAR_11 = FUNC_3(VAR_10, VAR_1 | VAR_0 | VAR_5);
     if ((VAR_11 & (VAR_3 | VAR_4)) == 0)
  FUNC_2(VAR_10);
     FUNC_1(&VAR_8);
 }
    }
}
