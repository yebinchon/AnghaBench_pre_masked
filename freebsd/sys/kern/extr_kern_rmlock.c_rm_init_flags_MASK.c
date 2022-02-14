
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmlock {int lock_object; int rm_lock_mtx; int rm_lock_sx; int rm_activeReaders; int rm_writecpus; } ;
struct lock_class {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct lock_class VAR_13 ;
 struct lock_class VAR_14 ;
 int FUNC_1 (int *,struct lock_class*,char const*,int *,int) ;
 int FUNC_2 (int *,char const*,char*,int) ;
 int FUNC_3 (int *,char*,int) ;

void
FUNC_4(struct rmlock *VAR_15, const char *VAR_16, int VAR_17)
{
 struct lock_class *VAR_18;
 int VAR_19, VAR_20;

 VAR_19 = 0;
 if (!(VAR_17 & VAR_7))
  VAR_19 |= VAR_3;
 if (VAR_17 & VAR_8)
  VAR_19 |= VAR_1;
 if (VAR_17 & VAR_6)
  VAR_19 |= VAR_0;
 VAR_15->rm_writecpus = VAR_12;
 FUNC_0(&VAR_15->rm_activeReaders);
 if (VAR_17 & VAR_9) {
  VAR_19 |= VAR_2;
  VAR_18 = &VAR_14;
  VAR_20 = (VAR_17 & VAR_6 ? VAR_10 : 0);
  FUNC_3(&VAR_15->rm_lock_sx, "rmlock_sx",
      VAR_20 | VAR_11);
 } else {
  VAR_18 = &VAR_13;
  VAR_20 = (VAR_17 & VAR_6 ? VAR_4 : 0);
  FUNC_2(&VAR_15->rm_lock_mtx, VAR_16, "rmlock_mtx",
      VAR_20 | VAR_5);
 }
 FUNC_1(&VAR_15->lock_object, VAR_18, VAR_16, ((void*)0), VAR_19);
}
