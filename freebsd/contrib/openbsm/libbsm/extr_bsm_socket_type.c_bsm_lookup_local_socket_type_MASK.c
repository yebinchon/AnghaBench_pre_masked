
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsm_socket_type {int bst_local_socket_type; } ;


 struct bsm_socket_type const* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static const struct bsm_socket_type *
FUNC_0(int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_0[VAR_3].bst_local_socket_type ==
      VAR_2)
   return (&VAR_0[VAR_3]);
 }
 return (((void*)0));
}
