
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct seltd* td_sel; } ;
struct seltd {int st_selq; scalar_t__ st_flags; int st_wait; int st_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 struct seltd* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *,char*,int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct thread *VAR_4)
{
 struct seltd *VAR_5;

 if ((VAR_5 = VAR_4->td_sel) != ((void*)0))
  goto out;
 VAR_4->td_sel = VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1, VAR_2|VAR_3);
 FUNC_3(&VAR_5->st_mtx, "sellck", ((void*)0), VAR_0);
 FUNC_1(&VAR_5->st_wait, "select");
out:
 VAR_5->st_flags = 0;
 FUNC_0(&VAR_5->st_selq);
}
