
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct cache_head {int flags; int last_refresh; int expiry_time; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct cache_head *VAR_1, time_t VAR_2)
{
 VAR_1->expiry_time = VAR_2;
 VAR_1->last_refresh = FUNC_0();
 FUNC_2();
 FUNC_1(VAR_0, &VAR_1->flags);
}
