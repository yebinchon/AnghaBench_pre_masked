
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; int rxsubchans; int signal; int audmode; int capability; int rangehigh; int rangelow; int type; int name; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_8, void *VAR_9,
     struct v4l2_tuner *VAR_10)
{
 if (VAR_10->index > 0)
  return -VAR_0;

 FUNC_0(VAR_10->name, "FM");
 VAR_10->type = VAR_5;
 VAR_10->rangelow = VAR_2;
 VAR_10->rangehigh = VAR_1;
 VAR_10->rxsubchans = VAR_6|VAR_7;
 VAR_10->capability = VAR_3;
 VAR_10->audmode = VAR_4;
 VAR_10->signal = 0xffff;
 return 0;
}
