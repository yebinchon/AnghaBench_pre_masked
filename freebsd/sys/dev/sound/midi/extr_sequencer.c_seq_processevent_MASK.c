
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct seq_softc {int seq_lock; } ;
typedef int kobj_t ;




 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int,int ) ;

 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct seq_softc*,int ,int*) ;
 int FUNC_6 (struct seq_softc*,int ,int*) ;
 scalar_t__ FUNC_7 (struct seq_softc*,int,int *) ;
 int FUNC_8 (struct seq_softc*,int*) ;
 int FUNC_9 (struct seq_softc*,int ,int*) ;
 int FUNC_10 (struct seq_softc*,int*) ;

__attribute__((used)) static int
FUNC_11(struct seq_softc *VAR_2, u_char *VAR_3)
{
 int VAR_4;
 kobj_t VAR_5;

 VAR_4 = 0;

 if (VAR_3[0] == VAR_0)
  VAR_4 = FUNC_8(VAR_2, VAR_3);
 else if (VAR_3[0] == VAR_1)
  VAR_4 = FUNC_10(VAR_2, VAR_3);
 else if (VAR_3[0] != 130 &&
      VAR_3[0] != 131 &&
      VAR_3[0] != 129 &&
     VAR_3[0] != 128) {
  VAR_4 = 1;
  FUNC_0(2, FUNC_4("seq_processevent not known %d\n",
      VAR_3[0]));
 } else if (FUNC_7(VAR_2, VAR_3[1], &VAR_5) != 0) {
  VAR_4 = 1;
  FUNC_0(2, FUNC_4("seq_processevent midi unit not found %d\n",
      VAR_3[1]));
 } else
  switch (VAR_3[0]) {
  case 130:
   VAR_4 = FUNC_6(VAR_2, VAR_5, VAR_3);
   break;
  case 131:
   VAR_4 = FUNC_5(VAR_2, VAR_5, VAR_3);
   break;
  case 129:
   VAR_4 = FUNC_9(VAR_2, VAR_5, VAR_3);
   break;
  case 128:
   FUNC_3(&VAR_2->seq_lock);
   VAR_4 = FUNC_1(VAR_5, &VAR_3[2], 1);
   FUNC_2(&VAR_2->seq_lock);
   break;
  }
 return VAR_4;
}
