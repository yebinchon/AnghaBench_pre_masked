
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int client; } ;
struct snd_seq_event {scalar_t__ type; TYPE_1__ source; } ;
struct snd_seq_client {int accept_output; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct snd_seq_event*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct snd_seq_client*,struct snd_seq_event*,struct file*,int,int,int) ;
 int FUNC_3 (struct snd_seq_client*) ;
 struct snd_seq_client* FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(int VAR_4, struct snd_seq_event *VAR_5,
     struct file *VAR_6, int VAR_7,
     int VAR_8, int VAR_9)
{
 struct snd_seq_client *VAR_10;
 int VAR_11;

 if (FUNC_1(!VAR_5))
  return -VAR_0;

 if (VAR_5->type == VAR_3)
  return 0;
 if (VAR_5->type == VAR_2)
  return -VAR_0;


 VAR_5->source.client = VAR_4;

 if (FUNC_0(VAR_5))
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_4);
 if (VAR_10 == ((void*)0))
  return -VAR_0;

 if (! VAR_10->accept_output)
  VAR_11 = -VAR_1;
 else
  VAR_11 = FUNC_2(VAR_10, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

 FUNC_3(VAR_10);
 return VAR_11;
}
