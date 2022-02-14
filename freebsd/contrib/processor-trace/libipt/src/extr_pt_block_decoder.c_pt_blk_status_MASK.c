
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_block_decoder {int status; int process_event; int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(const struct pt_block_decoder *VAR_3, int VAR_4)
{
 int VAR_5;

 if (!VAR_3)
  return -VAR_0;

 VAR_5 = VAR_3->status;






 if (!VAR_3->enabled)
  VAR_4 |= VAR_2;





 if ((VAR_5 & VAR_1) && !VAR_3->process_event)
  VAR_4 |= VAR_1;

 return VAR_4;
}
