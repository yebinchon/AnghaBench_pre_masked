
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct pipe {TYPE_1__ pipe_sel; } ;
struct knote {struct pipe* kn_hook; } ;


 int FUNC_0 (struct pipe*) ;
 int FUNC_1 (struct pipe*) ;
 int FUNC_2 (int *,struct knote*,int) ;

__attribute__((used)) static void
FUNC_3(struct knote *VAR_0)
{
 struct pipe *VAR_1 = VAR_0->kn_hook;

 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->pipe_sel.si_note, VAR_0, 1);
 FUNC_1(VAR_1);
}
