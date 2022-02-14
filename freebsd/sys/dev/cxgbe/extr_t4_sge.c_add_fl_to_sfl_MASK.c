
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_fl {int flags; } ;
struct adapter {int sfl_lock; int sfl_callout; int sfl; } ;


 int VAR_0 ;
 int FUNC_0 (struct sge_fl*) ;
 int VAR_1 ;
 int FUNC_1 (struct sge_fl*) ;
 int FUNC_2 (int *,struct sge_fl*,int ) ;
 int FUNC_3 (int *,int,int ,struct adapter*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_6(struct adapter *VAR_5, struct sge_fl *VAR_6)
{
 FUNC_4(&VAR_5->sfl_lock);
 FUNC_0(VAR_6);
 if ((VAR_6->flags & VAR_0) == 0) {
  VAR_6->flags |= VAR_1;
  FUNC_2(&VAR_5->sfl, VAR_6, VAR_3);
  FUNC_3(&VAR_5->sfl_callout, VAR_2 / 5, VAR_4, VAR_5);
 }
 FUNC_1(VAR_6);
 FUNC_5(&VAR_5->sfl_lock);
}
