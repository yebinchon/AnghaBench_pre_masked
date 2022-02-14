
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spicds_info {int devinfo; int (* ctrl ) (int ,unsigned int,int,unsigned int) ;scalar_t__ cif; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned int,int,unsigned int) ;
 int FUNC_2 (int ,unsigned int,int,unsigned int) ;

__attribute__((used)) static void
FUNC_3(struct spicds_info *VAR_0, int VAR_1)
{
 unsigned int VAR_2, VAR_3;
 if (VAR_0->cif)
  VAR_2 = 1;
 else
  VAR_2 = 0;
 if (VAR_1)
  VAR_3 = 1;
 else
  VAR_3 = 0;
 VAR_0->ctrl(VAR_0->devinfo, VAR_2, 0, VAR_3);
 FUNC_0(1);
 VAR_0->ctrl(VAR_0->devinfo, VAR_2, 1, VAR_3);
 FUNC_0(1);

 return;
}
