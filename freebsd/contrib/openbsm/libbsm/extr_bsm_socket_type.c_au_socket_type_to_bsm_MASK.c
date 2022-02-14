
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct bsm_socket_type {int bst_bsm_socket_type; } ;


 int VAR_0 ;
 struct bsm_socket_type* FUNC_0 (int) ;

u_short
FUNC_1(int VAR_1)
{
 const struct bsm_socket_type *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 == ((void*)0))
  return (VAR_0);
 return (VAR_2->bst_bsm_socket_type);
}
