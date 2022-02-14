
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
typedef int u_long ;
struct key_netstarg {int dummy; } ;
typedef scalar_t__ keystatus ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,struct key_netstarg*,int ,scalar_t__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

int
FUNC_2(struct key_netstarg *VAR_4)
{
 keystatus VAR_5;


 if (!FUNC_1((u_long) VAR_0, (xdrproc_t)VAR_2, VAR_4,
   (xdrproc_t)VAR_3, &VAR_5)){
  return (-1);
 }

 if (VAR_5 != VAR_1) {
  FUNC_0("key_setnet status is nonzero");
  return (-1);
 }
 return (1);
}
