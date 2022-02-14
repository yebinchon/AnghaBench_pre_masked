
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {struct kaioinfo* p_aioinfo; } ;
struct kaioinfo {scalar_t__ kaio_active_count; int kaio_task; } ;
struct aioproc {int aioproc; int aioprocflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct aioproc* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct aioproc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct proc *VAR_10)
{
 struct kaioinfo *VAR_11 = VAR_10->p_aioinfo;
 struct aioproc *VAR_12;

 FUNC_2(&VAR_3, VAR_1);
 if ((VAR_12 = FUNC_0(&VAR_2)) != ((void*)0)) {
  FUNC_1(&VAR_2, VAR_12, VAR_4);
  VAR_12->aioprocflags &= ~VAR_0;
  FUNC_4(VAR_12->aioproc);
 } else if (VAR_8 + VAR_7 < VAR_6 &&
     VAR_11->kaio_active_count + VAR_8 < VAR_5) {
  FUNC_3(VAR_9, &VAR_11->kaio_task);
 }
}
