
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_block_decoder {int status; int enabled; } ;
struct pt_block {int dummy; } ;


 int FUNC_0 (struct pt_block_decoder*) ;
 int FUNC_1 (struct pt_block_decoder*,struct pt_block*) ;
 int FUNC_2 (struct pt_block_decoder*,struct pt_block*) ;
 int FUNC_3 (struct pt_block_decoder*,struct pt_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct pt_block_decoder *VAR_3,
     struct pt_block *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5 != 0) {
  if (VAR_5 < 0)
   return VAR_5;

  return FUNC_1(VAR_3, VAR_4);
 }




 if (!VAR_3->enabled) {
  if (VAR_3->status & VAR_2)
   return -VAR_0;

  return -VAR_1;
 }

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_3(VAR_3, VAR_4);
}
