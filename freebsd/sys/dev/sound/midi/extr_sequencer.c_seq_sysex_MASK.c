
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct seq_softc {int unit; int seq_lock; } ;
typedef int kobj_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,int) ;

__attribute__((used)) static int
FUNC_6(struct seq_softc *VAR_2, kobj_t VAR_3, u_char *VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_2(&VAR_2->seq_lock, VAR_1);
 FUNC_0(5, FUNC_5("seq_sysex: unit %d device %d\n", VAR_2->unit,
     VAR_4[1]));
 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < 6 && VAR_4[VAR_5 + 2] != 0xff; VAR_5++)
  VAR_6 = VAR_5 + 1;
 if (VAR_6 > 0) {
  FUNC_4(&VAR_2->seq_lock);
  if (FUNC_1(VAR_3, &VAR_4[2], VAR_6) == VAR_0) {
   FUNC_3(&VAR_2->seq_lock);
   return 1;
  }
  FUNC_3(&VAR_2->seq_lock);
 }
 return 0;
}
