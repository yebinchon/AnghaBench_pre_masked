
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union evrec {int dummy; } evrec ;
struct snd_seq_event {int data; int type; } ;
struct TYPE_2__ {int port; int client; } ;
struct seq_oss_devinfo {TYPE_1__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,union evrec*,int ) ;
 int FUNC_1 (struct seq_oss_devinfo*,struct snd_seq_event*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct seq_oss_devinfo *VAR_2, union evrec *VAR_3, struct snd_seq_event *VAR_4)
{
 VAR_4->type = VAR_1;

 FUNC_1(VAR_2, VAR_4, VAR_2->addr.client, VAR_2->addr.port);
 FUNC_0(&VAR_4->data, VAR_3, VAR_0);
 return 0;
}
