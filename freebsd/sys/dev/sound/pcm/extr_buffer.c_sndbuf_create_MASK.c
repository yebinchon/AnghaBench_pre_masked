
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dbuf {struct pcm_channel* channel; int dev; int name; } ;
struct pcm_channel {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct snd_dbuf* FUNC_0 (int,int ,int) ;
 int FUNC_1 (int ,int ,char*,char*,char*) ;

struct snd_dbuf *
FUNC_2(device_t VAR_4, char *VAR_5, char *VAR_6, struct pcm_channel *VAR_7)
{
 struct snd_dbuf *VAR_8;

 VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_0, VAR_1 | VAR_2);
 FUNC_1(VAR_8->name, VAR_3, "%s:%s", VAR_5, VAR_6);
 VAR_8->dev = VAR_4;
 VAR_8->channel = VAR_7;

 return VAR_8;
}
