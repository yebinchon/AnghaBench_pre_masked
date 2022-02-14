
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ client; } ;
struct snd_seq_port_subscribe {TYPE_1__ sender; } ;
struct snd_opl4 {int access_mutex; scalar_t__ used; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_opl4*) ;
 int FUNC_3 (struct snd_opl4*) ;

__attribute__((used)) static int FUNC_4(void *VAR_2, struct snd_seq_port_subscribe *VAR_3)
{
 struct snd_opl4 *VAR_4 = VAR_2;
 int VAR_5;

 FUNC_0(&VAR_4->access_mutex);

 if (VAR_4->used) {
  FUNC_1(&VAR_4->access_mutex);
  return -VAR_0;
 }
 VAR_4->used++;

 if (VAR_3->sender.client != VAR_1) {
  VAR_5 = FUNC_2(VAR_4);
  if (VAR_5 < 0) {
   FUNC_1(&VAR_4->access_mutex);
   return VAR_5;
  }
 }

 FUNC_1(&VAR_4->access_mutex);

 FUNC_3(VAR_4);
 return 0;
}
