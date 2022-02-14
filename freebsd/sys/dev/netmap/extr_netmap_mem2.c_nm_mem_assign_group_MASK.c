
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_mem_d {int nm_grp; int lasterr; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct netmap_mem_d*) ;
 int FUNC_1 (struct netmap_mem_d*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int
FUNC_5(struct netmap_mem_d *VAR_4, struct device *VAR_5)
{
 int VAR_6 = 0, VAR_7;
 VAR_7 = FUNC_2(VAR_5);
 if (VAR_2 & VAR_1)
  FUNC_4("iommu_group %d", VAR_7);

 FUNC_0(VAR_4);

 if (VAR_4->nm_grp < 0)
  VAR_4->nm_grp = VAR_7;

 if (VAR_4->nm_grp != VAR_7) {
  if (VAR_3)
   FUNC_3("iommu group mismatch: %u vs %u",
     VAR_4->nm_grp, VAR_7);
  VAR_4->lasterr = VAR_6 = VAR_0;
 }

 FUNC_1(VAR_4);
 return VAR_6;
}
