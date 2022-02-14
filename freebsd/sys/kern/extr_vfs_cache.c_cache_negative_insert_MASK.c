
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neglist {int nl_lock; int nl_list; } ;
struct namecache {int nc_flag; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 struct neglist* FUNC_1 (struct namecache*) ;
 int VAR_2 ;
 int FUNC_2 (int *,struct namecache*,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct namecache*,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_8(struct namecache *VAR_5, bool VAR_6)
{
 struct neglist *VAR_7;

 FUNC_0(VAR_5->nc_flag & VAR_1);
 FUNC_4(VAR_5, VAR_2);
 VAR_7 = FUNC_1(VAR_5);
 if (!VAR_6) {
  FUNC_6(&VAR_7->nl_lock);
 } else {
  FUNC_5(&VAR_7->nl_lock, VAR_0);
 }
 FUNC_2(&VAR_7->nl_list, VAR_5, VAR_3);
 if (!VAR_6)
  FUNC_7(&VAR_7->nl_lock);
 FUNC_3(&VAR_4, 1);
}
