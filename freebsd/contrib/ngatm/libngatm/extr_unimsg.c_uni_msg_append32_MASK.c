
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct uni_msg {int b_wptr; } ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct uni_msg*,int) ;

int
FUNC_3(struct uni_msg *VAR_0, u_int VAR_1)
{
 if (FUNC_2(VAR_0, 4) == -1)
  return (-1);
 VAR_1 = FUNC_1(VAR_1);
 FUNC_0(&VAR_1, VAR_0->b_wptr, 4);
 VAR_0->b_wptr += 4;
 return (0);
}
