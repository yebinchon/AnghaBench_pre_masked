
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_wss {unsigned int mode; int hardware; int* image; int open_mutex; int reg_lock; scalar_t__ single_dma; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_wss*,size_t,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct snd_wss*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_wss *VAR_10, unsigned int VAR_11)
{
 unsigned long VAR_12;

 FUNC_1(&VAR_10->open_mutex);
 if ((VAR_10->mode & VAR_11) ||
     ((VAR_10->mode & VAR_9) && VAR_10->single_dma)) {
  FUNC_2(&VAR_10->open_mutex);
  return -VAR_6;
 }
 if (VAR_10->mode & VAR_9) {
  VAR_10->mode |= VAR_11;
  FUNC_2(&VAR_10->open_mutex);
  return 0;
 }

 FUNC_4(&VAR_10->reg_lock, VAR_12);
 if (!(VAR_10->hardware & VAR_8)) {
  FUNC_3(VAR_10, VAR_1,
       VAR_3 |
       VAR_4 |
       VAR_5);
  FUNC_3(VAR_10, VAR_1, 0);
 }
 FUNC_6(VAR_10, FUNC_0(VAR_7), 0);
 FUNC_6(VAR_10, FUNC_0(VAR_7), 0);
 VAR_10->image[VAR_2] |= VAR_0;
 FUNC_3(VAR_10, VAR_2, VAR_10->image[VAR_2]);
 if (!(VAR_10->hardware & VAR_8)) {
  FUNC_3(VAR_10, VAR_1,
       VAR_3 |
       VAR_4 |
       VAR_5);
  FUNC_3(VAR_10, VAR_1, 0);
 }
 FUNC_5(&VAR_10->reg_lock, VAR_12);

 VAR_10->mode = VAR_11;
 FUNC_2(&VAR_10->open_mutex);
 return 0;
}
