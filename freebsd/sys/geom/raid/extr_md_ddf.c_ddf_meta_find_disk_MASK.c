
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct ddf_vol_meta {int ** bvdc; } ;
struct TYPE_4__ {int * Physical_Disk_Sequence; int Primary_Element_Count; } ;
struct TYPE_3__ {int Primary_Element_Count; int Secondary_Element_Count; } ;


 int FUNC_0 (struct ddf_vol_meta*,int ) ;
 scalar_t__ FUNC_1 (struct ddf_vol_meta*,int ) ;
 int FUNC_2 (struct ddf_vol_meta*,int ) ;
 TYPE_2__** VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int
FUNC_3(struct ddf_vol_meta *VAR_2, uint32_t VAR_3,
    int *VAR_4, int *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 VAR_6 = 0;
 for (VAR_7 = 0; VAR_7 < FUNC_2(VAR_2, VAR_1->Secondary_Element_Count); VAR_7++) {
  if (VAR_2->bvdc[VAR_7] == ((void*)0)) {
   VAR_6 += FUNC_0(VAR_2, VAR_1->Primary_Element_Count);
   continue;
  }
  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2, VAR_0[VAR_7]->Primary_Element_Count);
      VAR_8++, VAR_6++) {
   if (FUNC_1(VAR_2, VAR_0[VAR_7]->Physical_Disk_Sequence[VAR_8]) ==
       VAR_3) {
    if (VAR_4 != ((void*)0))
     *VAR_4 = VAR_7;
    if (VAR_5 != ((void*)0))
     *VAR_5 = VAR_8;
    return (VAR_6);
   }
  }
 }
 return (-1);
}
