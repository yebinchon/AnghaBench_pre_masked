
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct process {scalar_t__ p_index; scalar_t__ p_procid; scalar_t__ p_jobid; int p_command; struct process* p_next; } ;
typedef int Strbuf ;
struct TYPE_2__ {struct process* p_next; } ;


 int FUNC_0 (int*,int ) ;
 int FUNC_1 (int*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;

int
FUNC_2(struct Strbuf *VAR_3, struct Strbuf *VAR_4, int *VAR_5)
{
    struct process *VAR_6;

    FUNC_1(VAR_4);
    FUNC_1(VAR_5);
    for (;VAR_2 <= VAR_0; VAR_2++) {
 for (VAR_6 = VAR_1.p_next; VAR_6 != ((void*)0); VAR_6 = VAR_6->p_next)
     if (VAR_6->p_index == VAR_2 && VAR_6->p_procid == VAR_6->p_jobid)
  break;
 if (VAR_6 == ((void*)0))
     continue;
 FUNC_0(VAR_3, VAR_6->p_command);
 VAR_2++;
 return 1;
    }
    return 0;
}
