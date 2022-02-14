
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int f_mode; } ;
struct TYPE_2__ {int play_sample_size; int rec_sample_size; scalar_t__ base; } ;
typedef scalar_t__ LPDAQD ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_8, int VAR_9)
{
 int VAR_10, VAR_11;
 LPDAQD VAR_12, VAR_13;

 VAR_12 = VAR_7.base + VAR_0;
 VAR_13 = VAR_7.base + VAR_3;

 switch (VAR_9) {
 case 128:
 case 129:
  VAR_10 = VAR_9;
  break;
 default:
  VAR_10 = VAR_4;
  break;
 }

 for (VAR_11 = 0; VAR_11 < 3; ++VAR_11, VAR_12 += VAR_1, VAR_13 += VAR_1) {
  if (VAR_8->f_mode & VAR_6)
   FUNC_0(VAR_10, VAR_12 + VAR_2);
  if (VAR_8->f_mode & VAR_5)
   FUNC_0(VAR_10, VAR_13 + VAR_2);
 }
 if (VAR_8->f_mode & VAR_6)
  VAR_7.play_sample_size = VAR_10;
 if (VAR_8->f_mode & VAR_5)
  VAR_7.rec_sample_size = VAR_10;

 return VAR_10;
}
