
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ii_type; int ii_flags; TYPE_1__* ii_dtype; } ;
typedef TYPE_2__ iidesc_t ;
struct TYPE_7__ {int iib_tdtd; } ;
typedef TYPE_3__ iiburst_t ;
struct TYPE_5__ {int t_flags; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_1(void *VAR_2, void *VAR_3)
{
 iidesc_t *VAR_4 = VAR_2;
 iiburst_t *VAR_5 = VAR_3;

 switch (VAR_4->ii_type) {
 case 131:
 case 129:
 case 130:
 case 128:
  if (!(VAR_4->ii_flags & VAR_0))
   return (0);
  break;
 default:
  break;
 }

 VAR_4->ii_dtype->t_flags |= VAR_1;
 (void) FUNC_0(VAR_4, VAR_5->iib_tdtd);
 return (1);
}
