
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * pd_devsw; scalar_t__ pd_unit; } ;
typedef TYPE_1__ pdinfo_t ;
typedef int EFI_DEVICE_PATH ;


 int FUNC_0 (int *,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 (int *,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(pdinfo_t *VAR_4, EFI_DEVICE_PATH *VAR_5)
{
 pdinfo_t *VAR_6;

 if (FUNC_2(VAR_4, VAR_5))
  return;

 VAR_6 = FUNC_1(&VAR_1, VAR_3, VAR_2);
 if (VAR_6 != ((void*)0))
  VAR_4->pd_unit = VAR_6->pd_unit + 1;
 else
  VAR_4->pd_unit = 0;


 VAR_4->pd_devsw = &VAR_0;
 FUNC_0(&VAR_1, VAR_4, VAR_2);
}
