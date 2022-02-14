
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long time; int cmd; int code; } ;
union evrec {unsigned long echo; TYPE_1__ t; } ;
struct seq_oss_readq {unsigned long input_time; } ;
typedef int rec ;


 int VAR_0 ;
 unsigned long VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (union evrec*,int ,int) ;
 int FUNC_1 (struct seq_oss_readq*,union evrec*) ;

int
FUNC_2(struct seq_oss_readq *VAR_3, unsigned long VAR_4, int VAR_5)
{
 if (VAR_4 != VAR_3->input_time) {
  union evrec VAR_6;
  FUNC_0(&VAR_6, 0, sizeof(VAR_6));
  switch (VAR_5) {
  case 128:
   VAR_6.echo = (VAR_4 << 8) | VAR_1;
   FUNC_1(VAR_3, &VAR_6);
   break;
  case 129:
   VAR_6.t.code = VAR_0;
   VAR_6.t.cmd = VAR_2;
   VAR_6.t.time = VAR_4;
   FUNC_1(VAR_3, &VAR_6);
   break;
  }
  VAR_3->input_time = VAR_4;
 }
 return 0;
}
