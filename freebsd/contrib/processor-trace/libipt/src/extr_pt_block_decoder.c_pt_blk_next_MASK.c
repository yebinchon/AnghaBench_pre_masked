
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_block_decoder {scalar_t__ speculative; int mode; int ip; } ;
struct pt_block {int speculative; int mode; int ip; } ;
typedef int block ;


 int FUNC_0 (struct pt_block*,size_t,struct pt_block*) ;
 int FUNC_1 (struct pt_block*,int ,int) ;
 int FUNC_2 (struct pt_block_decoder*,struct pt_block*) ;
 int VAR_0 ;

int FUNC_3(struct pt_block_decoder *VAR_1, struct pt_block *VAR_2,
  size_t VAR_3)
{
 struct pt_block VAR_4, *VAR_5;
 int VAR_6, VAR_7;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 VAR_5 = VAR_3 == sizeof(VAR_4) ? VAR_2 : &VAR_4;


 FUNC_1(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->ip = VAR_1->ip;
 VAR_5->mode = VAR_1->mode;
 if (VAR_1->speculative)
  VAR_5->speculative = 1;


 VAR_7 = FUNC_2(VAR_1, VAR_5);

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 return VAR_7;
}
