
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
struct node_queue_bw {scalar_t__ bw_absolute; int bw_percent; } ;


 int FUNC_0 (scalar_t__,int) ;

u_int64_t
FUNC_1(struct node_queue_bw *VAR_0, u_int64_t VAR_1)
{
 if (VAR_0->bw_absolute > 0)
  return (FUNC_0(VAR_0->bw_absolute, VAR_1));

 if (VAR_0->bw_percent > 0)
  return (VAR_1 / 100 * VAR_0->bw_percent);

 return (0);
}
