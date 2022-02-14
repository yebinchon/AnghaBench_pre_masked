
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_pcm {int info_flags; char* name; scalar_t__ device; TYPE_2__* card; TYPE_1__* streams; } ;
struct TYPE_7__ {int reg_mask; scalar_t__ reg; } ;
struct TYPE_8__ {TYPE_3__ oss; } ;
struct TYPE_6__ {size_t number; } ;
struct TYPE_5__ {scalar_t__ substream_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 TYPE_4__* FUNC_0 (struct snd_pcm*) ;
 int FUNC_1 (struct snd_pcm*,int) ;
 int FUNC_2 (int ,size_t,char*) ;
 int FUNC_3 (struct snd_pcm*) ;
 int FUNC_4 (char*,char*,char*,char*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm *VAR_6)
{
 FUNC_0(VAR_6)->oss.reg = 0;
 if (VAR_5[VAR_6->card->number] == (int)VAR_6->device) {
  char VAR_7[128];
  int VAR_8;
  FUNC_1(VAR_6, 0);
  VAR_8 = (VAR_6->streams[VAR_3].substream_count > 0 &&
         VAR_6->streams[VAR_2].substream_count &&
         !(VAR_6->info_flags & VAR_1));
  FUNC_4(VAR_7, "%s%s", VAR_6->name, VAR_8 ? " (DUPLEX)" : "");





  FUNC_0(VAR_6)->oss.reg++;
  FUNC_0(VAR_6)->oss.reg_mask |= 1;
 }
 if (VAR_4[VAR_6->card->number] == (int)VAR_6->device) {
  FUNC_1(VAR_6, 1);
  FUNC_0(VAR_6)->oss.reg++;
  FUNC_0(VAR_6)->oss.reg_mask |= 2;
 }

 if (FUNC_0(VAR_6)->oss.reg)
  FUNC_3(VAR_6);

 return 0;
}
