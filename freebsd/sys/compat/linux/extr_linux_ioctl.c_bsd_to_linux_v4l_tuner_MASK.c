
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_tuner {int signal; int mode; int flags; int rangehigh; int rangelow; int name; int tuner; } ;
struct l_video_tuner {int signal; int mode; int flags; int rangehigh; int rangelow; int name; int tuner; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct video_tuner *VAR_1, struct l_video_tuner *VAR_2)
{
 VAR_2->tuner = VAR_1->tuner;
 FUNC_0(VAR_2->name, VAR_1->name, VAR_0);
 VAR_2->rangelow = VAR_1->rangelow;
 VAR_2->rangehigh = VAR_1->rangehigh;
 VAR_2->flags = VAR_1->flags;
 VAR_2->mode = VAR_1->mode;
 VAR_2->signal = VAR_1->signal;
 return (0);
}
