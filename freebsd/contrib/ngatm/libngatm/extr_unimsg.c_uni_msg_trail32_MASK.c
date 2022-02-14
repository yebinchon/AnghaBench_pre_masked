
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct uni_msg {scalar_t__ b_wptr; } ;


 int FUNC_0 (scalar_t__,int *,int) ;
 int FUNC_1 (int ) ;

u_int
FUNC_2(const struct uni_msg *VAR_0, int VAR_1)
{
 u_int VAR_2;

 FUNC_0(VAR_0->b_wptr + 4 * VAR_1, &VAR_2, 4);
 return (FUNC_1(VAR_2));
}
