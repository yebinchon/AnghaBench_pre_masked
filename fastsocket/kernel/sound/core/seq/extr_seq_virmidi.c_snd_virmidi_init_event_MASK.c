
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_virmidi {int seq_mode; int port; int client; } ;
struct TYPE_4__ {int port; int client; } ;
struct TYPE_3__ {int port; } ;
struct snd_seq_event {int type; TYPE_2__ dest; TYPE_1__ source; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct snd_seq_event*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct snd_virmidi *VAR_2,
       struct snd_seq_event *VAR_3)
{
 FUNC_0(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->source.port = VAR_2->port;
 switch (VAR_2->seq_mode) {
 case 128:
  VAR_3->dest.client = VAR_0;
  break;
 case 129:

  VAR_3->dest.client = VAR_2->client;
  VAR_3->dest.port = VAR_2->port;
  break;
 }
 VAR_3->type = VAR_1;
}
