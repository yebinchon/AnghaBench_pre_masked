
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct icl_conn {int ic_check_send_space; int ic_send_cv; } ;


 int FUNC_0 (struct icl_conn*) ;
 int FUNC_1 (struct icl_conn*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct socket*) ;

__attribute__((used)) static int
FUNC_4(struct socket *VAR_1, void *VAR_2, int VAR_3)
{
 struct icl_conn *VAR_4;

 if (!FUNC_3(VAR_1))
  return (VAR_0);

 VAR_4 = VAR_2;

 FUNC_0(VAR_4);
 VAR_4->ic_check_send_space = 1;
 FUNC_1(VAR_4);

 FUNC_2(&VAR_4->ic_send_cv);

 return (VAR_0);
}
