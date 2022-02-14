
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct initiator_state {int dummy; } ;


 size_t VAR_0 ;
 struct initiator_state* VAR_1 ;
 int FUNC_0 (char*,size_t,size_t) ;

__attribute__((used)) static struct initiator_state *
FUNC_1(u_int VAR_2)
{
 if (VAR_2 >= VAR_0) {
  FUNC_0("illegal init_id %d, max %d", VAR_2, VAR_0 - 1);
  return (((void*)0));
 } else {
  return (&VAR_1[VAR_2]);
 }
}
