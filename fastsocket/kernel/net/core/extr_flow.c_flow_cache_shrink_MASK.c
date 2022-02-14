
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flow_cache_percpu {int dummy; } ;
struct flow_cache {int low_watermark; } ;


 int FUNC_0 (struct flow_cache*,struct flow_cache_percpu*,int) ;
 int FUNC_1 (struct flow_cache*) ;

__attribute__((used)) static void FUNC_2(struct flow_cache *VAR_0,
         struct flow_cache_percpu *VAR_1)
{
 int VAR_2 = VAR_0->low_watermark / FUNC_1(VAR_0);

 FUNC_0(VAR_0, VAR_1, VAR_2);
}
