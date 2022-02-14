
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rs6000_framedata {scalar_t__ lr_offset; int saved_gpr; scalar_t__ gpr_offset; int saved_fpr; scalar_t__ fpr_offset; scalar_t__ frameless; } ;
struct frame_info {int dummy; } ;
struct TYPE_2__ {int wordsize; int ppc_lr_regnum; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__) ;
 size_t FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int *,int ) ;
 int * VAR_5 ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 () ;
 struct frame_info* FUNC_6 () ;
 scalar_t__ FUNC_7 (struct frame_info*) ;
 scalar_t__ FUNC_8 (struct frame_info*) ;
 int FUNC_9 (struct frame_info*) ;
 int FUNC_10 (scalar_t__,int *,int) ;
 scalar_t__ FUNC_11 (scalar_t__,int) ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (scalar_t__,int ,struct rs6000_framedata*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_17 (void)
{
  CORE_ADDR VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
  struct rs6000_framedata VAR_11;
  struct frame_info *VAR_12 = FUNC_6 ();
  int VAR_13, VAR_14;

  VAR_6 = FUNC_12 ();
  VAR_8 = FUNC_7 (VAR_12);

  if (FUNC_0 (FUNC_9 (VAR_12),
       FUNC_7 (VAR_12),
       FUNC_7 (VAR_12)))
    {
      FUNC_5 ();
      FUNC_3 ();
      return;
    }


  FUNC_2 (0, ((void*)0), VAR_0);





  VAR_10 = FUNC_8 (VAR_12);
  (void) FUNC_14 (VAR_10, FUNC_9 (VAR_12), &VAR_11);

  VAR_14 = FUNC_4 (VAR_4)->wordsize;
  if (VAR_11.frameless)
    VAR_9 = VAR_8;
  else
    VAR_9 = FUNC_11 (VAR_8, VAR_14);
  if (VAR_11.lr_offset == 0)
     VAR_7 = FUNC_13 (FUNC_4 (VAR_4)->ppc_lr_regnum);
  else
    VAR_7 = FUNC_11 (VAR_9 + VAR_11.lr_offset, VAR_14);


  FUNC_16 (VAR_2, VAR_7);



  if (VAR_11.saved_gpr != -1)
    {
      VAR_10 = VAR_9 + VAR_11.gpr_offset;
      for (VAR_13 = VAR_11.saved_gpr; VAR_13 <= 31; ++VAR_13)
 {
   FUNC_10 (VAR_10, &VAR_5[FUNC_1 (VAR_13)],
         VAR_14);
   VAR_10 += VAR_14;
 }
    }

  if (VAR_11.saved_fpr != -1)
    {
      VAR_10 = VAR_9 + VAR_11.fpr_offset;
      for (VAR_13 = VAR_11.saved_fpr; VAR_13 <= 31; ++VAR_13)
 {
   FUNC_10 (VAR_10, &VAR_5[FUNC_1 (VAR_13 + VAR_1)], 8);
   VAR_10 += 8;
 }
    }

  FUNC_16 (VAR_3, VAR_9);
  FUNC_15 (-1);
  FUNC_3 ();
}
