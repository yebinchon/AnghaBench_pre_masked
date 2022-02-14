
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ifnet {int dummy; } ;
typedef int * device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int*) ;
 struct ifnet* FUNC_1 (int ,int) ;

struct ifnet *
FUNC_2(u_char VAR_1, device_t VAR_2)
{
 int VAR_3;

 if (VAR_2 == ((void*)0) || FUNC_0(VAR_2, &VAR_3) != 0)
  return (FUNC_1(VAR_1, VAR_0));
 return (FUNC_1(VAR_1, VAR_3));
}
