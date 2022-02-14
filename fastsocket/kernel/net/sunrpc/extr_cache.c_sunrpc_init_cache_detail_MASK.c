
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_detail {int last_warn; int others; scalar_t__ last_close; int readers; scalar_t__ entries; scalar_t__ nextcheck; int queue; int hash_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct cache_detail *VAR_3)
{
 FUNC_3(&VAR_3->hash_lock);
 FUNC_0(&VAR_3->queue);
 FUNC_5(&VAR_2);
 VAR_3->nextcheck = 0;
 VAR_3->entries = 0;
 FUNC_1(&VAR_3->readers, 0);
 VAR_3->last_close = 0;
 VAR_3->last_warn = -1;
 FUNC_2(&VAR_3->others, &VAR_1);
 FUNC_6(&VAR_2);


 FUNC_4(&VAR_0, 0);
}
