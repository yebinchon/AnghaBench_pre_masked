
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_pipe {int dummy; } ;
struct vx_core {int lock; } ;
struct snd_pcm_runtime {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vx_core*,struct vx_pipe*) ;
 int FUNC_4 (struct vx_core*,struct snd_pcm_runtime*,struct vx_pipe*,int) ;
 int FUNC_5 (struct vx_core*,struct vx_pipe*) ;
 int FUNC_6 (struct vx_core*,int ) ;
 int FUNC_7 (struct vx_core*,int ) ;

__attribute__((used)) static int FUNC_8(struct vx_core *VAR_2,
       struct snd_pcm_runtime *VAR_3,
       struct vx_pipe *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7 = 0;

 VAR_6 = FUNC_5(VAR_2, VAR_4);
 if (VAR_6 < 0) {

  FUNC_6(VAR_2, VAR_1);
  FUNC_0("error hbuffer\n");
  return VAR_6;
 }
 if (VAR_6 < VAR_5) {
  FUNC_6(VAR_2, VAR_1);
  FUNC_0("no enough hbuffer space %d\n", VAR_6);
  return -VAR_0;
 }




 FUNC_1(&VAR_2->lock);
 FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5);
 VAR_7 = FUNC_3(VAR_2, VAR_4);

 FUNC_7(VAR_2, VAR_1);
 FUNC_2(&VAR_2->lock);
 return VAR_7;
}
