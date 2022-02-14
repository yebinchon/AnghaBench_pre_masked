
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_device {int dummy; } ;
struct snd_opl4 {int seq_client; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_seq_device*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct snd_seq_device *VAR_1)
{
 struct snd_opl4 *VAR_2;

 VAR_2 = *(struct snd_opl4 **)FUNC_0(VAR_1);
 if (!VAR_2)
  return -VAR_0;

 if (VAR_2->seq_client >= 0) {
  FUNC_1(VAR_2->seq_client);
  VAR_2->seq_client = -1;
 }
 return 0;
}
