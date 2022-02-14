
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct tty {int dummy; } ;
struct thread {int dummy; } ;
struct rp_port {int rp_channel; } ;
typedef int caddr_t ;


 int VAR_0 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct rp_port* FUNC_2 (struct tty*) ;

__attribute__((used)) static int
FUNC_3(struct tty *VAR_1, u_long VAR_2, caddr_t VAR_3, struct thread *VAR_4)
{
 struct rp_port *VAR_5;

 VAR_5 = FUNC_2(VAR_1);
 switch (VAR_2) {
 case 128:
  FUNC_1(&VAR_5->rp_channel);
  return (0);
 case 129:
  FUNC_0(&VAR_5->rp_channel);
  return (0);
 default:
  return VAR_0;
 }
}
