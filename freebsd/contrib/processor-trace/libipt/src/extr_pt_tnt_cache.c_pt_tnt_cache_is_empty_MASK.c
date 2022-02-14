
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_tnt_cache {scalar_t__ index; } ;


 int VAR_0 ;

int FUNC_0(const struct pt_tnt_cache *VAR_1)
{
 if (!VAR_1)
  return -VAR_0;

 return VAR_1->index == 0;
}
