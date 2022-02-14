
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_block_decoder {int status; int enabled; } ;


 int FUNC_0 (struct pt_block_decoder*,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct pt_block_decoder *VAR_2, int VAR_3)
{
 if (!VAR_2)
  return -VAR_0;

 if (VAR_3 < 0)
  return VAR_3;

 VAR_2->status = VAR_3;
 if (!(VAR_3 & VAR_1))
  VAR_2->enabled = 1;
 return FUNC_0(VAR_2, ((void*)0));
}
