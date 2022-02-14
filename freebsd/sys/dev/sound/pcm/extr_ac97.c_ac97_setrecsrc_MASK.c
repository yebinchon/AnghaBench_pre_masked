
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ac97mixtable_entry {int recidx; } ;
struct ac97_info {int lock; struct ac97mixtable_entry* mix; } ;


 int VAR_0 ;
 int FUNC_0 (struct ac97_info*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct ac97_info *VAR_1, int VAR_2)
{
 struct ac97mixtable_entry *VAR_3 = &VAR_1->mix[VAR_2];

 if (VAR_3->recidx > 0) {
  int VAR_4 = VAR_3->recidx - 1;
  VAR_4 |= VAR_4 << 8;
  FUNC_1(VAR_1->lock);
  FUNC_0(VAR_1, VAR_0, VAR_4);
  FUNC_2(VAR_1->lock);
  return 0;
 } else
  return -1;
}
