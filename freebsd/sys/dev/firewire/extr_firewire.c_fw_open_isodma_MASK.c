
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_xferq {int flag; } ;
struct firewire_comm {int nisodma; struct fw_xferq** ir; struct fw_xferq** it; } ;


 int VAR_0 ;
 int FUNC_0 (struct firewire_comm*) ;
 int FUNC_1 (struct firewire_comm*) ;
 int FUNC_2 (char*,int) ;

int
FUNC_3(struct firewire_comm *VAR_1, int VAR_2)
{
 struct fw_xferq **VAR_3;
 struct fw_xferq *VAR_4;
 int VAR_5;

 if (VAR_2)
  VAR_3 = &VAR_1->it[0];
 else
  VAR_3 = &VAR_1->ir[0];

 FUNC_0(VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_1->nisodma; VAR_5++) {
  VAR_4 = VAR_3[VAR_5];
  if ((VAR_4->flag & VAR_0) == 0) {
   VAR_4->flag |= VAR_0;
   break;
  }
 }
 if (VAR_5 == VAR_1->nisodma) {
  FUNC_2("no free dma channel (tx=%d)\n", VAR_2);
  VAR_5 = -1;
 }
 FUNC_1(VAR_1);
 return (VAR_5);
}
