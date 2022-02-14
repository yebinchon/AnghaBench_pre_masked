
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct neglist {int nl_lock; int nl_list; } ;
struct namecache {int nc_flag; } ;
struct TYPE_2__ {int nl_lock; int nl_list; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct neglist* FUNC_1 (struct namecache*) ;
 int FUNC_2 (int *,struct namecache*,int ) ;
 int FUNC_3 (int *,struct namecache*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_6(struct namecache *VAR_5)
{
 struct neglist *VAR_6;

 FUNC_0(VAR_5->nc_flag & VAR_1);
 if (VAR_5->nc_flag & VAR_0)
  return;
 VAR_6 = FUNC_1(VAR_5);
 FUNC_4(&VAR_3.nl_lock);
 FUNC_4(&VAR_6->nl_lock);
 if (!(VAR_5->nc_flag & VAR_0)) {
  VAR_4++;
  FUNC_3(&VAR_6->nl_list, VAR_5, VAR_2);
  FUNC_2(&VAR_3.nl_list, VAR_5, VAR_2);
  VAR_5->nc_flag |= VAR_0;
 }
 FUNC_5(&VAR_6->nl_lock);
 FUNC_5(&VAR_3.nl_lock);
}
