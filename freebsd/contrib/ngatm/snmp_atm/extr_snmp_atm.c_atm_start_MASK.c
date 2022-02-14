
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ifi_type; } ;
struct TYPE_4__ {TYPE_1__ ifmd_data; } ;
struct mibif {int * xnotify; TYPE_2__ mib; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mibif*) ;
 struct mibif* FUNC_1 () ;
 struct mibif* FUNC_2 (struct mibif*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4(void)
{
 struct mibif *VAR_5;

 VAR_3 = FUNC_3(&VAR_2,
     "The Begemot MIB for ATM interfaces.", VAR_1);

 VAR_4 = 1;
 for (VAR_5 = FUNC_1(); VAR_5 != ((void*)0); VAR_5 = FUNC_2(VAR_5))
  if (VAR_5->mib.ifmd_data.ifi_type == VAR_0 &&
      VAR_5->xnotify == ((void*)0))
   FUNC_0(VAR_5);
}
