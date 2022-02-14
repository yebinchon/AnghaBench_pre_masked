
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comm_point {scalar_t__ tcp_is_reading; } ;


 int FUNC_0 (struct comm_point*) ;
 int FUNC_1 (struct comm_point*) ;

__attribute__((used)) static int
FUNC_2(struct comm_point* VAR_0)
{
 if(VAR_0->tcp_is_reading)
  return FUNC_0(VAR_0);
 return FUNC_1(VAR_0);
}
