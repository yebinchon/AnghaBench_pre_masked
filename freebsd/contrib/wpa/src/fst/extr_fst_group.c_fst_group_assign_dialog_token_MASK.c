
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct fst_group {scalar_t__ dialog_token; } ;



u8 FUNC_0(struct fst_group *VAR_0)
{
 VAR_0->dialog_token++;
 if (VAR_0->dialog_token == 0)
  VAR_0->dialog_token++;
 return VAR_0->dialog_token;
}
