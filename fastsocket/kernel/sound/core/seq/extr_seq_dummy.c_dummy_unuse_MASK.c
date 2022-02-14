
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_seq_port_subscribe {int dummy; } ;
struct TYPE_7__ {int channel; int param; } ;
struct TYPE_8__ {TYPE_3__ control; } ;
struct TYPE_6__ {int client; } ;
struct TYPE_5__ {int port; } ;
struct snd_seq_event {TYPE_4__ data; int type; TYPE_2__ dest; TYPE_1__ source; } ;
struct snd_seq_dummy_port {int client; int port; int connect; scalar_t__ duplex; } ;
typedef int ev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_seq_event*,int ,int) ;
 int FUNC_1 (int ,struct snd_seq_event*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(void *VAR_4, struct snd_seq_port_subscribe *VAR_5)
{
 struct snd_seq_dummy_port *VAR_6;
 int VAR_7;
 struct snd_seq_event VAR_8;

 VAR_6 = VAR_4;
 FUNC_0(&VAR_8, 0, sizeof(VAR_8));
 if (VAR_6->duplex)
  VAR_8.source.port = VAR_6->connect;
 else
  VAR_8.source.port = VAR_6->port;
 VAR_8.dest.client = VAR_2;
 VAR_8.type = VAR_3;
 for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
  VAR_8.data.control.channel = VAR_7;
  VAR_8.data.control.param = VAR_0;
  FUNC_1(VAR_6->client, &VAR_8, 0, 0);
  VAR_8.data.control.param = VAR_1;
  FUNC_1(VAR_6->client, &VAR_8, 0, 0);
 }
 return 0;
}
