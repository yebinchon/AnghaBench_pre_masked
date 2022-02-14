
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcxhr_rmh {int* cmd; int cmd_len; } ;
struct pcxhr_mgr {scalar_t__ is_hr_stereo; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pcxhr_mgr*,unsigned int,int*) ;
 int FUNC_1 (struct pcxhr_rmh*,int ) ;
 int FUNC_2 (struct pcxhr_mgr*,struct pcxhr_rmh*) ;
 int FUNC_3 (struct pcxhr_mgr*,unsigned int,int*) ;

int FUNC_4(struct pcxhr_mgr *VAR_4, unsigned int VAR_5)
{
 struct pcxhr_rmh VAR_6;
 int VAR_7, VAR_8;

 if (VAR_5 == 0)
  return 0;

 if (VAR_4->is_hr_stereo)
  VAR_7 = FUNC_0(VAR_4, VAR_5, &VAR_8);
 else
  VAR_7 = FUNC_3(VAR_4, VAR_5, &VAR_8);

 if (VAR_7)
  return VAR_7;

 if (VAR_8) {
  FUNC_1(&VAR_6, VAR_0);
  VAR_6.cmd[0] |= VAR_3;
  if (VAR_5 < VAR_1)
   VAR_6.cmd[1] = VAR_2;
  else
   VAR_6.cmd[1] = VAR_2 * 2;
  VAR_6.cmd[2] = VAR_5;
  VAR_6.cmd_len = 3;
  VAR_7 = FUNC_2(VAR_4, &VAR_6);
  if (VAR_7)
   return VAR_7;
 }
 return 0;
}
