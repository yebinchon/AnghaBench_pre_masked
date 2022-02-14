
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snddev_info {int pvchancount; int rvchancount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snddev_info*) ;
 int FUNC_1 (struct snddev_info*) ;
 int FUNC_2 (struct snddev_info*,int ,int,int) ;

__attribute__((used)) static void
FUNC_3(struct snddev_info *VAR_2, int VAR_3)
{
 FUNC_0(VAR_2);

 if (VAR_3 < 0)
  return;

 if (VAR_3 >= 0 && VAR_2->pvchancount > VAR_3)
  (void)FUNC_2(VAR_2, VAR_0, VAR_3, -1);
 else if (VAR_3 > 0 && VAR_2->pvchancount == 0)
  (void)FUNC_2(VAR_2, VAR_0, 1, -1);

 if (VAR_3 >= 0 && VAR_2->rvchancount > VAR_3)
  (void)FUNC_2(VAR_2, VAR_1, VAR_3, -1);
 else if (VAR_3 > 0 && VAR_2->rvchancount == 0)
  (void)FUNC_2(VAR_2, VAR_1, 1, -1);

 FUNC_1(VAR_2);
}
