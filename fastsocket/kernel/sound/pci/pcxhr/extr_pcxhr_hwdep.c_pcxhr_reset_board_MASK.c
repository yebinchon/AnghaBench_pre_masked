
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcxhr_rmh {int * cmd; } ;
struct pcxhr_mgr {int dsp_loaded; int is_hr_stereo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pcxhr_rmh*,int ) ;
 int FUNC_1 (struct pcxhr_mgr*) ;
 int FUNC_2 (struct pcxhr_mgr*) ;
 int FUNC_3 (struct pcxhr_mgr*,struct pcxhr_rmh*) ;
 int FUNC_4 (struct pcxhr_mgr*,int ,int ,int *) ;

void FUNC_5(struct pcxhr_mgr *VAR_6)
{
 struct pcxhr_rmh VAR_7;

 if (VAR_6->dsp_loaded & (1 << VAR_3)) {

     if (!VAR_6->is_hr_stereo) {

  FUNC_0(&VAR_7, VAR_0);
  VAR_7.cmd[0] |= VAR_1;
  FUNC_3(VAR_6, &VAR_7);

  FUNC_4(VAR_6, VAR_5,
         0, ((void*)0));
     }

 }

 if (VAR_6->dsp_loaded & (1 << VAR_2))
  FUNC_1(VAR_6);

 if (VAR_6->dsp_loaded & (1 << VAR_4)) {
  FUNC_2(VAR_6);
  VAR_6->dsp_loaded = 1;
 }
 return;
}
