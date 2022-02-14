
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct uni_msg {int b_rptr; } ;


 int FUNC_0 (int,int *,int) ;
 int FUNC_1 (int ) ;

u_int
FUNC_2(struct uni_msg *VAR_0)
{
 uint32_t VAR_1;

 FUNC_0(VAR_0->b_rptr, &VAR_1, 4);
 VAR_0->b_rptr += 4;
 return (FUNC_1(VAR_1));
}
