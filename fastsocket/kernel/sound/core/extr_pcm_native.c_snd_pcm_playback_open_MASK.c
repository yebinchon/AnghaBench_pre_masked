
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct file*) ;
 struct snd_pcm* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct file*,struct snd_pcm*,int ) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, struct file *VAR_3)
{
 struct snd_pcm *VAR_4;
 int VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_4 = FUNC_2(FUNC_0(VAR_2),
        VAR_0);
 return FUNC_3(VAR_3, VAR_4, VAR_1);
}
