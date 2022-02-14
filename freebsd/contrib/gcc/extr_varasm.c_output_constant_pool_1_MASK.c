
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct constant_descriptor_rtx {int mode; int labelno; int constant; } ;
typedef int rtx ;
struct TYPE_6__ {int flags; } ;
struct TYPE_8__ {TYPE_2__ common; } ;
struct TYPE_5__ {int (* internal_label ) (int ,char*,int ) ;} ;
struct TYPE_7__ {TYPE_1__ asm_out; } ;


 int FUNC_0 (int ,int ,int ,unsigned int,int ,int ) ;

 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,int ) ;
 int VAR_3 ;
 int FUNC_7 (unsigned int) ;
 int VAR_4 ;
 int FUNC_8 (int) ;
 TYPE_4__* VAR_5 ;
 int FUNC_9 (int ,int ,unsigned int) ;
 int FUNC_10 (int ,char*,int ) ;
 TYPE_3__ VAR_6 ;

__attribute__((used)) static void
FUNC_11 (struct constant_descriptor_rtx *VAR_7,
   unsigned int VAR_8)
{
  rtx VAR_9, VAR_10;

  VAR_9 = VAR_7->constant;
  VAR_10 = VAR_9;
  switch (FUNC_1 (VAR_9))
    {
    case 129:
      if (FUNC_1 (FUNC_6 (VAR_9, 0)) != VAR_1
   || FUNC_1 (FUNC_6 (FUNC_6 (VAR_9, 0), 0)) != 128)
 break;
      VAR_10 = FUNC_6 (FUNC_6 (VAR_9, 0), 0);


    case 128:
      VAR_10 = FUNC_6 (VAR_9, 0);
      FUNC_8 (!FUNC_3 (VAR_10));
      FUNC_8 (!FUNC_5 (VAR_10)
    || FUNC_4 (VAR_10) != VAR_0);
      break;

    default:
      break;
    }






  FUNC_7 (VAR_8);


  VAR_6.asm_out.internal_label (VAR_3, "LC", VAR_7->labelno);


  FUNC_9 (VAR_7->mode, VAR_9, VAR_8);



  if (VAR_8 > FUNC_2 (VAR_7->mode)
      && VAR_5
      && (VAR_5->common.flags & VAR_2))
    FUNC_7 (VAR_8);




  return;
}
