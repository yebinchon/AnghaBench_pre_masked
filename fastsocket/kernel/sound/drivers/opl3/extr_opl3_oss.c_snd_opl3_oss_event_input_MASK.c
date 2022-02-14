
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_event {scalar_t__ type; } ;
struct snd_opl3 {int oss_chset; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct snd_seq_event*,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_seq_event *VAR_2, int VAR_3,
        void *VAR_4, int VAR_5, int VAR_6)
{
 struct snd_opl3 *VAR_7 = VAR_4;

 if (VAR_2->type != VAR_0)
  FUNC_0(&VAR_1, VAR_2, VAR_7->oss_chset);
 return 0;
}
