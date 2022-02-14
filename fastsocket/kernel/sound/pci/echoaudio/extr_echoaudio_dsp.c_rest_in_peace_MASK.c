
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct echoaudio {int * dsp_code; int active_mask; int pipe_alloc_mask; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct echoaudio*,int ) ;
 int FUNC_2 (struct echoaudio*,int ) ;
 int FUNC_3 (struct echoaudio*,int ) ;
 int FUNC_4 (struct echoaudio*,int ) ;

__attribute__((used)) static int FUNC_5(struct echoaudio *VAR_2)
{
 FUNC_0(("rest_in_peace() open=%x\n", VAR_2->pipe_alloc_mask));


 FUNC_4(VAR_2, VAR_2->active_mask);

 FUNC_3(VAR_2, VAR_1);






 if (VAR_2->dsp_code) {

  VAR_2->dsp_code = ((void*)0);

  return FUNC_2(VAR_2, VAR_0);
 }
 return 0;
}
