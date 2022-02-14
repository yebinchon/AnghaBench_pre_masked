
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct uni_msg {int b_wptr; } ;


 int FUNC_0 (int,int *,int) ;
 int FUNC_1 (int ) ;

u_int
FUNC_2(struct uni_msg *VAR_0)
{
 uint32_t VAR_1;

 VAR_0->b_wptr -= 4;
 FUNC_0(VAR_0->b_wptr, &VAR_1, 4);
 return (FUNC_1(VAR_1));
}
