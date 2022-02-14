
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rwlock {int dummy; } ;
struct mtx {int dummy; } ;
struct neglist {struct mtx nl_lock; int nl_list; } ;
struct namecache {int nc_flag; int nc_name; int nc_dvp; } ;
struct TYPE_2__ {struct mtx nl_lock; int nl_list; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct rwlock* FUNC_1 (struct namecache*) ;
 struct neglist* FUNC_2 (struct namecache*) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ) ;
 struct namecache* FUNC_4 (int *) ;
 int FUNC_5 (int *,struct namecache*,int ) ;
 int FUNC_6 (int *,struct namecache*,int ) ;
 struct mtx* FUNC_7 (int ) ;
 int FUNC_8 (struct namecache*) ;
 int FUNC_9 (scalar_t__,struct namecache**,struct neglist**) ;
 int FUNC_10 (struct namecache*,int) ;
 int FUNC_11 (int ,int) ;
 int VAR_2 ;
 int FUNC_12 (struct mtx*) ;
 int * FUNC_13 (struct mtx*) ;
 int FUNC_14 (struct mtx*) ;
 int FUNC_15 (struct mtx*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 struct mtx VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_16 (struct rwlock*) ;
 int FUNC_17 (struct rwlock*) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_18(void)
{
 struct namecache *VAR_14, *VAR_15;
 struct neglist *VAR_16;
 struct mtx *VAR_17;
 struct rwlock *VAR_18;

 if (FUNC_13(&VAR_6) != ((void*)0) ||
     !FUNC_14(&VAR_6)) {
  FUNC_11(VAR_12, 1);
  return;
 }

 FUNC_12(&VAR_5.nl_lock);
 VAR_14 = FUNC_4(&VAR_5.nl_list);
 if (VAR_14 != ((void*)0)) {
  VAR_16 = FUNC_2(VAR_14);
  FUNC_12(&VAR_16->nl_lock);
  FUNC_6(&VAR_5.nl_list, VAR_14, VAR_4);
  FUNC_5(&VAR_16->nl_list, VAR_14, VAR_4);
  VAR_14->nc_flag &= ~VAR_0;
  VAR_7--;
  FUNC_15(&VAR_16->nl_lock);
 }
 FUNC_15(&VAR_5.nl_lock);

 FUNC_9(VAR_10, &VAR_14, &VAR_16);
 VAR_10++;
 if (VAR_10 == VAR_9)
  VAR_10 = 0;
 if (VAR_14 == ((void*)0) && VAR_10 == 0)
  FUNC_9(VAR_10, &VAR_14, &VAR_16);
 FUNC_15(&VAR_6);
 if (VAR_14 == ((void*)0))
  return;

 FUNC_0(VAR_14->nc_flag & VAR_1);
 VAR_17 = FUNC_7(VAR_14->nc_dvp);
 VAR_18 = FUNC_1(VAR_14);
 FUNC_15(&VAR_16->nl_lock);
 FUNC_12(VAR_17);
 FUNC_16(VAR_18);
 FUNC_12(&VAR_16->nl_lock);
 VAR_15 = FUNC_4(&VAR_16->nl_list);
 if (VAR_14 != VAR_15 || VAR_17 != FUNC_7(VAR_15->nc_dvp) ||
     VAR_18 != FUNC_1(VAR_15) || !(VAR_15->nc_flag & VAR_1)) {
  VAR_14 = ((void*)0);
 } else {
  FUNC_3(VAR_13, VAR_3, VAR_11, VAR_2, VAR_14->nc_dvp,
      VAR_14->nc_name);

  FUNC_10(VAR_14, 1);
  FUNC_11(VAR_8, 1);
 }
 FUNC_15(&VAR_16->nl_lock);
 FUNC_17(VAR_18);
 FUNC_15(VAR_17);
 FUNC_8(VAR_14);
}
