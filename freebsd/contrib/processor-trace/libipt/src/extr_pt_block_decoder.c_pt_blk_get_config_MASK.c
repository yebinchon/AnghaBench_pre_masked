
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_config {int dummy; } ;
struct pt_block_decoder {int query; } ;


 struct pt_config const* FUNC_0 (int *) ;

const struct pt_config *
FUNC_1(const struct pt_block_decoder *VAR_0)
{
 if (!VAR_0)
  return ((void*)0);

 return FUNC_0(&VAR_0->query);
}
