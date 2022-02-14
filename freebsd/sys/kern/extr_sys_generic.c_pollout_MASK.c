
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct thread {scalar_t__* td_retval; } ;
struct pollfd {scalar_t__ revents; } ;


 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_1(struct thread *VAR_0, struct pollfd *VAR_1, struct pollfd *VAR_2, u_int VAR_3)
{
 int VAR_4 = 0;
 u_int VAR_5 = 0;
 u_int VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4 = FUNC_0(&VAR_1->revents, &VAR_2->revents,
      sizeof(VAR_2->revents));
  if (VAR_4)
   return (VAR_4);
  if (VAR_1->revents != 0)
   VAR_6++;
  VAR_1++;
  VAR_2++;
 }
 VAR_0->td_retval[0] = VAR_6;
 return (0);
}
