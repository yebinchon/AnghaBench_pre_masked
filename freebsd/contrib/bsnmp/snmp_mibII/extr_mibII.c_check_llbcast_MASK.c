
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct mibrcvaddr {int flags; } ;
struct TYPE_3__ {int ifi_type; } ;
struct TYPE_4__ {int ifmd_flags; TYPE_1__ ifmd_data; } ;
struct mibif {int index; TYPE_2__ mib; } ;


 int VAR_0 ;




 int VAR_1 ;
 int * FUNC_0 (int ,int*,int) ;
 struct mibrcvaddr* FUNC_1 (struct mibif*,int*,int) ;

__attribute__((used)) static void
FUNC_2(struct mibif *VAR_2)
{
 static u_char VAR_3[6] = { 0xff, 0xff, 0xff, 0xff, 0xff, 0xff };
 struct mibrcvaddr *VAR_4;

 if (!(VAR_2->mib.ifmd_flags & VAR_0))
  return;

 switch (VAR_2->mib.ifmd_data.ifi_type) {

   case 131:
   case 130:
   case 129:
   case 128:
  if (FUNC_0(VAR_2->index, VAR_3, 6) == ((void*)0) &&
      (VAR_4 = FUNC_1(VAR_2, VAR_3, 6)) != ((void*)0))
   VAR_4->flags |= VAR_1;
  break;
 }
}
