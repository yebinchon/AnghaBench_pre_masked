
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neglist {int nl_lock; int nl_list; } ;
struct namecache {int dummy; } ;


 struct namecache* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct neglist* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(int VAR_2, struct namecache **VAR_3,
    struct neglist **VAR_4)
{
 struct neglist *VAR_5;
 struct namecache *VAR_6;
 int VAR_7;

 *VAR_3 = VAR_6 = ((void*)0);
 VAR_5 = ((void*)0);

 for (VAR_7 = VAR_2; VAR_7 < VAR_1; VAR_7++) {
  VAR_5 = &VAR_0[VAR_7];
  if (FUNC_0(&VAR_5->nl_list) == ((void*)0))
   continue;
  FUNC_1(&VAR_5->nl_lock);
  VAR_6 = FUNC_0(&VAR_5->nl_list);
  if (VAR_6 != ((void*)0))
   break;
  FUNC_2(&VAR_5->nl_lock);
 }

 *VAR_4 = VAR_5;
 *VAR_3 = VAR_6;
}
