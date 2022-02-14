
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct neglist {int nl_lock; int nl_list; } ;
struct namecache {int nc_flag; } ;
struct TYPE_2__ {int nl_lock; int nl_list; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct neglist* FUNC_1 (struct namecache*) ;
 int VAR_3 ;
 int FUNC_2 (int *,struct namecache*,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct namecache*,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_8(struct namecache *VAR_8, bool VAR_9)
{
 struct neglist *VAR_10;
 bool VAR_11 = 0;
 bool VAR_12 = 0;

 FUNC_0(VAR_8->nc_flag & VAR_2);
 FUNC_4(VAR_8, VAR_3);
 VAR_10 = FUNC_1(VAR_8);
 if (!VAR_9) {
  if (VAR_8->nc_flag & VAR_1) {
   VAR_11 = 1;
   FUNC_6(&VAR_5.nl_lock);
   if (!(VAR_8->nc_flag & VAR_1)) {
    VAR_12 = 1;
    FUNC_6(&VAR_10->nl_lock);
   }
  } else {
   VAR_12 = 1;
   FUNC_6(&VAR_10->nl_lock);
  }
 }
 if (VAR_8->nc_flag & VAR_1) {
  FUNC_5(&VAR_5.nl_lock, VAR_0);
  FUNC_2(&VAR_5.nl_list, VAR_8, VAR_4);
  VAR_6--;
 } else {
  FUNC_5(&VAR_10->nl_lock, VAR_0);
  FUNC_2(&VAR_10->nl_list, VAR_8, VAR_4);
 }
 if (VAR_12)
  FUNC_7(&VAR_10->nl_lock);
 if (VAR_11)
  FUNC_7(&VAR_5.nl_lock);
 FUNC_3(&VAR_7, 1);
}
