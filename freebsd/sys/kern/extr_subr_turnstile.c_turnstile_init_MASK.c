
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct turnstile {int ts_lock; int ts_free; int ts_pending; int * ts_blocked; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (int *,char*,int *,int) ;

__attribute__((used)) static int
FUNC_4(void *VAR_4, int VAR_5, int VAR_6)
{
 struct turnstile *VAR_7;

 FUNC_2(VAR_4, VAR_5);
 VAR_7 = VAR_4;
 FUNC_1(&VAR_7->ts_blocked[VAR_2]);
 FUNC_1(&VAR_7->ts_blocked[VAR_3]);
 FUNC_1(&VAR_7->ts_pending);
 FUNC_0(&VAR_7->ts_free);
 FUNC_3(&VAR_7->ts_lock, "turnstile lock", ((void*)0), VAR_1 | VAR_0);
 return (0);
}
