
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int client; int port; } ;
struct TYPE_8__ {TYPE_3__ addr; } ;
struct TYPE_6__ {int client; } ;
struct TYPE_5__ {scalar_t__ port; int client; } ;
struct snd_seq_event {TYPE_4__ data; TYPE_2__ dest; TYPE_1__ source; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct snd_seq_event*,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_1(struct snd_seq_event * VAR_6, int VAR_7, int VAR_8)
{
 if (VAR_4 < 0)
  return -VAR_0;

 FUNC_0(VAR_6, 0, sizeof(struct snd_seq_event));

 VAR_6->flags &= ~VAR_3;
 VAR_6->flags |= VAR_2;

 VAR_6->source.client = VAR_5;
 VAR_6->source.port = VAR_4;
 VAR_6->dest.client = VAR_1;



 VAR_6->data.addr.client = VAR_7;
 VAR_6->data.addr.port = VAR_8;

 return 0;
}
