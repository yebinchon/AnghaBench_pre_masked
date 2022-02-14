
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct seq_softc {int unit; int seq_lock; int music; } ;
typedef int kobj_t ;


 int VAR_0 ;



 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int,int) ;
 int FUNC_4 (int ,int,int,int) ;
 int VAR_1 ;
 char* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int,...) ;

__attribute__((used)) static int
FUNC_10(struct seq_softc *VAR_2, kobj_t VAR_3, u_char *VAR_4)
{
 int VAR_5, VAR_6;
 u_char VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_5 = 0;
 VAR_7 = VAR_4[2];
 VAR_8 = VAR_4[3];
 VAR_9 = VAR_4[4];
 VAR_10 = VAR_4[5];

 FUNC_6(&VAR_2->seq_lock, VAR_0);

 FUNC_0(5, FUNC_9("seq_chnvoice: unit %d, dev %d, cmd %s,"
     " chn %d, note %d, parm %d.\n", VAR_2->unit, VAR_4[1],
     FUNC_5(VAR_7, VAR_1), VAR_8, VAR_9, VAR_10));

 VAR_6 = FUNC_2(VAR_3, VAR_8, VAR_9);

 FUNC_8(&VAR_2->seq_lock);

 switch (VAR_7) {
 case 128:
  if (VAR_9 < 128 || VAR_9 == 255) {
   if (VAR_2->music) {
   }
   FUNC_4(VAR_3, VAR_6, VAR_9, VAR_10);
  }
  break;
 case 129:
  FUNC_3(VAR_3, VAR_6, VAR_9, VAR_10);
  break;
 case 130:
  FUNC_1(VAR_3, VAR_6, VAR_10);
  break;
 default:
  VAR_5 = 1;
  FUNC_0(2, FUNC_9("seq_chnvoice event type %d not handled\n",
      VAR_4[1]));
  break;
 }

 FUNC_7(&VAR_2->seq_lock);
 return VAR_5;
}
