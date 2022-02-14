
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct seq_softc {int unit; int seq_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,int,...) ;

__attribute__((used)) static int
FUNC_3(struct seq_softc *VAR_1, u_char *VAR_2)
{
 int VAR_3;

 VAR_3 = 0;
 FUNC_1(&VAR_1->seq_lock, VAR_0);

 FUNC_0(5, FUNC_2("seq_local: unit %d, cmd %d\n", VAR_1->unit,
     VAR_2[1]));
 switch (VAR_2[1]) {
 default:
  FUNC_0(1, FUNC_2("seq_local event type %d not handled\n",
      VAR_2[1]));
  VAR_3 = 1;
  break;
 }
 return VAR_3;
}
