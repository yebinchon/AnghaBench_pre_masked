
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_2__ {scalar_t__ cpd_devid; scalar_t__ cpd_revid; int * cpd_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_2[VAR_4].cpd_desc != ((void*)0); VAR_4++) {
  if (FUNC_1(VAR_3) == VAR_2[VAR_4].cpd_devid &&
      FUNC_2(VAR_3) >= VAR_2[VAR_4].cpd_revid) {
   FUNC_0(VAR_3, VAR_2[VAR_4].cpd_desc);
   return (VAR_0);
  }
 }

 return (VAR_1);
}
