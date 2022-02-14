
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_map_handle {scalar_t__ cur_swap; scalar_t__ cur; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_1(struct swap_map_handle *VAR_1)
{
 if (VAR_1->cur && VAR_1->cur_swap)
  return FUNC_0(VAR_1->cur, VAR_1->cur_swap, ((void*)0));
 else
  return -VAR_0;
}
