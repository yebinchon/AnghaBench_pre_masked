
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_2__ {scalar_t__ gpd_devid; int * gpd_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_2[VAR_4].gpd_desc != ((void*)0); VAR_4++) {
  if (FUNC_1(VAR_3) == VAR_2[VAR_4].gpd_devid) {
   FUNC_0(VAR_3, VAR_2[VAR_4].gpd_desc);
   return (VAR_0);
  }
 }

 return (VAR_1);
}
