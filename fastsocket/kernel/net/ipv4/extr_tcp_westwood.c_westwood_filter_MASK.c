
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct westwood {int bw_ns_est; int bw_est; int bk; } ;


 void* FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct westwood *VAR_0, u32 VAR_1)
{

 if (VAR_0->bw_ns_est == 0 && VAR_0->bw_est == 0) {
  VAR_0->bw_ns_est = VAR_0->bk / VAR_1;
  VAR_0->bw_est = VAR_0->bw_ns_est;
 } else {
  VAR_0->bw_ns_est = FUNC_0(VAR_0->bw_ns_est, VAR_0->bk / VAR_1);
  VAR_0->bw_est = FUNC_0(VAR_0->bw_est, VAR_0->bw_ns_est);
 }
}
