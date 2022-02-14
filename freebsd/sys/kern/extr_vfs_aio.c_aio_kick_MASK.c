
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {struct kaioinfo* p_aioinfo; } ;
struct kaioinfo {scalar_t__ kaio_active_count; } ;
struct aioproc {int aioproc; int aioprocflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct aioproc* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct aioproc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct proc *VAR_9)
{
 struct kaioinfo *VAR_10 = VAR_9->p_aioinfo;
 struct aioproc *VAR_11;
 int VAR_12, VAR_13 = 0;

 FUNC_3(&VAR_3, VAR_1);
retryproc:
 if ((VAR_11 = FUNC_0(&VAR_2)) != ((void*)0)) {
  FUNC_1(&VAR_2, VAR_11, VAR_4);
  VAR_11->aioprocflags &= ~VAR_0;
  FUNC_6(VAR_11->aioproc);
 } else if (VAR_8 + VAR_7 < VAR_6 &&
     VAR_10->kaio_active_count + VAR_8 < VAR_5) {
  VAR_8++;
  FUNC_5(&VAR_3);
  VAR_12 = FUNC_2(&VAR_8);
  FUNC_4(&VAR_3);
  if (VAR_12) {
   VAR_8--;
   goto retryproc;
  }
 } else {
  VAR_13 = -1;
 }
 return (VAR_13);
}
