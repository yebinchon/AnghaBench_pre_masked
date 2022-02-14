
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_buffparms {int callback_parm; int (* audio_callback ) (int,int ) ;} ;
struct audio_operations {int poll_sleeper; int out_sleeper; } ;


 struct audio_operations** VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(int VAR_1, struct dma_buffparms *VAR_2)
{
 struct audio_operations *VAR_3 = VAR_0[VAR_1];

 if (VAR_2->audio_callback != ((void*)0))
  VAR_2->audio_callback(VAR_1, VAR_2->callback_parm);
 FUNC_1(&VAR_3->out_sleeper);
 FUNC_1(&VAR_3->poll_sleeper);
}
