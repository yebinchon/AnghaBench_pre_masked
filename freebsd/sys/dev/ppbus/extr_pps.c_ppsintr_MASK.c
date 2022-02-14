
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pps_data {int ppbus; TYPE_2__* pps; } ;
struct TYPE_4__ {int mode; } ;
struct TYPE_5__ {TYPE_1__ ppsparam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_5)
{
 struct pps_data *VAR_6 = (struct pps_data *)VAR_5;

 FUNC_0(VAR_6->ppbus);
 FUNC_3(&VAR_6->pps[0]);
 if (!(FUNC_1(VAR_6->ppbus) & VAR_4))
  return;

 if (VAR_6->pps[0].ppsparam.mode & VAR_3)
  FUNC_2(VAR_6->ppbus, VAR_1 | VAR_0);
 FUNC_4(&VAR_6->pps[0], VAR_2);
 if (VAR_6->pps[0].ppsparam.mode & VAR_3)
  FUNC_2(VAR_6->ppbus, VAR_1);
}
