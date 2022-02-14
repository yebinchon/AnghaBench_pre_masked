
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int client; int port; } ;
struct TYPE_3__ {int port; int client; } ;
struct snd_seq_event {TYPE_2__ dest; TYPE_1__ source; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct snd_seq_event*,int ,int ) ;
 int VAR_2 ;

int FUNC_1(int VAR_3, int VAR_4, struct snd_seq_event *VAR_5)
{
 VAR_5->flags = VAR_0;
 VAR_5->source.client = VAR_2;
 VAR_5->source.port = VAR_1;
 VAR_5->dest.client = VAR_3;
 VAR_5->dest.port = VAR_4;
 return FUNC_0(VAR_2, VAR_5, 0, 0);
}
