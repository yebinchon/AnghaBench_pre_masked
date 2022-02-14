
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int hcb_p ;
typedef TYPE_3__* ccb_p ;
struct TYPE_5__ {void* savep; void* goalp; void* lastp; } ;
struct TYPE_6__ {TYPE_1__ head; } ;
struct TYPE_7__ {int segments; TYPE_2__ phys; void* startp; int host_flags; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void __inline
FUNC_4(hcb_p VAR_5, ccb_p VAR_6, int VAR_7)
{
 u32 VAR_8, VAR_9;

 FUNC_2(VAR_1);




 if (!VAR_6->segments)
  VAR_7 = 129;




 switch(VAR_7) {
 case 128:
  VAR_9 = FUNC_0 (VAR_5, VAR_3) + 8;
  VAR_8 = VAR_9 - 8 - (VAR_6->segments * (2*4));
  break;
 case 130:
  VAR_6->host_flags |= VAR_0;
  VAR_9 = FUNC_0 (VAR_5, VAR_2) + 8;
  VAR_8 = VAR_9 - 8 - (VAR_6->segments * (2*4));
  break;
 case 129:
 default:
  VAR_8 = VAR_9 = FUNC_1 (VAR_5, VAR_4);
  break;
 }

 VAR_6->phys.head.lastp = FUNC_3(VAR_8);
 VAR_6->phys.head.goalp = FUNC_3(VAR_9);
 VAR_6->phys.head.savep = FUNC_3(VAR_8);
 VAR_6->startp = VAR_6->phys.head.savep;
}
