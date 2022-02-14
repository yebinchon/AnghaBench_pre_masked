
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snddev_info {int playcount; int reccount; scalar_t__ pvchancount; scalar_t__ rvchancount; int clones; } ;


 int VAR_0 ;
 int FUNC_0 (struct snddev_info*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct snddev_info *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2);

 VAR_3 = VAR_2->playcount + VAR_2->reccount - 1;
 if (VAR_2->pvchancount > 0)
  VAR_3 += FUNC_1(VAR_2->pvchancount, VAR_1) - 1;
 if (VAR_2->rvchancount > 0)
  VAR_3 += FUNC_1(VAR_2->rvchancount, VAR_1) - 1;
 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;
 (void)FUNC_2(VAR_2->clones);
 (void)FUNC_3(VAR_2->clones, VAR_3);
}
