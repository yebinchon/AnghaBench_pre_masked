
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_sgio2audio {int ad1843_lock; } ;
struct TYPE_4__ {int codec_control; } ;
struct TYPE_5__ {TYPE_1__ audio; } ;
struct TYPE_6__ {TYPE_2__ perif; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static int FUNC_6(void *VAR_3, int VAR_4, int VAR_5)
{
 struct snd_sgio2audio *VAR_6 = VAR_3;
 int VAR_7;
 unsigned long VAR_8;

 FUNC_1(&VAR_6->ad1843_lock, VAR_8);

 FUNC_5((VAR_4 << VAR_0) |
        (VAR_5 << VAR_1),
        &VAR_2->perif.audio.codec_control);
 FUNC_4();
 VAR_7 = FUNC_0(&VAR_2->perif.audio.codec_control);
 FUNC_3(200);

 FUNC_2(&VAR_6->ad1843_lock, VAR_8);
 return 0;
}
