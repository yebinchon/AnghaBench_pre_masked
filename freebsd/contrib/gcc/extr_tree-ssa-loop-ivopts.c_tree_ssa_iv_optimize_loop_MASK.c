
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct loop {int num; } ;
struct ivopts_data {struct loop* current_loop; } ;
struct iv_ca {int dummy; } ;
typedef TYPE_2__* edge ;
struct TYPE_7__ {int index; } ;
struct TYPE_6__ {TYPE_4__* src; TYPE_1__* dest; } ;
struct TYPE_5__ {int index; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ivopts_data*,struct iv_ca*) ;
 int FUNC_1 (struct ivopts_data*) ;
 int FUNC_2 (struct ivopts_data*) ;
 int FUNC_3 (struct ivopts_data*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct ivopts_data*) ;
 int FUNC_5 (struct ivopts_data*) ;
 int FUNC_6 (struct ivopts_data*) ;
 struct iv_ca* FUNC_7 (struct ivopts_data*) ;
 int FUNC_8 (scalar_t__,char*,...) ;
 int FUNC_9 (struct ivopts_data*) ;
 int FUNC_10 (struct iv_ca**) ;
 int FUNC_11 (TYPE_4__*) ;
 scalar_t__ FUNC_12 (struct ivopts_data*) ;
 int FUNC_13 (scalar_t__,int ,int ) ;
 int FUNC_14 (struct ivopts_data*) ;
 int FUNC_15 (struct ivopts_data*) ;
 int FUNC_16 () ;
 TYPE_2__* FUNC_17 (struct loop*) ;

__attribute__((used)) static bool
FUNC_18 (struct ivopts_data *VAR_5, struct loop *VAR_6)
{
  bool VAR_7 = 0;
  struct iv_ca *VAR_8;
  edge VAR_9;

  VAR_5->current_loop = VAR_6;

  if (VAR_3 && (VAR_4 & VAR_1))
    {
      FUNC_8 (VAR_3, "Processing loop %d\n", VAR_6->num);

      VAR_9 = FUNC_17 (VAR_6);
      if (VAR_9)
 {
   FUNC_8 (VAR_3, "  single exit %d -> %d, exit condition ",
     VAR_9->src->index, VAR_9->dest->index);
   FUNC_13 (VAR_3, FUNC_11 (VAR_9->src), VAR_2);
   FUNC_8 (VAR_3, "\n");
 }

      FUNC_8 (VAR_3, "\n");
    }



  if (!FUNC_4 (VAR_5))
    goto finish;


  FUNC_5 (VAR_5);
  if (FUNC_12 (VAR_5) > VAR_0)
    goto finish;


  FUNC_6 (VAR_5);


  FUNC_3 (VAR_5);
  FUNC_1 (VAR_5);
  FUNC_2 (VAR_5);


  VAR_8 = FUNC_7 (VAR_5);
  if (!VAR_8)
    goto finish;
  VAR_7 = 1;


  FUNC_0 (VAR_5, VAR_8);
  FUNC_10 (&VAR_8);


  FUNC_15 (VAR_5);


  FUNC_14 (VAR_5);




  FUNC_16 ();

finish:
  FUNC_9 (VAR_5);

  return VAR_7;
}
