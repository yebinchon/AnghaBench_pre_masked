
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct noce_if_info {void* x; void* cond_earliest; void* cond; int insn_a; int jump; int b; int a; } ;
typedef void* rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 int VAR_0 ;

 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;



 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int FUNC_5 (void*,int) ;
 int FUNC_6 (void*,int ,int ) ;
 void* FUNC_7 (struct noce_if_info*) ;
 int FUNC_8 () ;
 void* FUNC_9 (int ,int,int ,int ,void*,int,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (void*,void*) ;
 void* FUNC_11 (struct noce_if_info*,int ,void**) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int) ;

__attribute__((used)) static int
FUNC_15 (struct noce_if_info *VAR_8)
{
  rtx VAR_9, VAR_10, VAR_11, VAR_12;
  enum rtx_code VAR_13, VAR_14;
  int VAR_15;


  if (VAR_7)
    return VAR_0;




  if (FUNC_3 (FUNC_1 (VAR_8->x))
      || FUNC_2 (FUNC_1 (VAR_8->x)))
    return VAR_0;

  VAR_9 = FUNC_11 (VAR_8, VAR_8->a, &VAR_10);
  if (!VAR_9)
    return VAR_0;



  VAR_13 = FUNC_0 (VAR_9);
  if (FUNC_12 (FUNC_5 (VAR_9, 0), VAR_8->a))
    {
      if (! FUNC_12 (FUNC_5 (VAR_9, 1), VAR_8->b))
 return VAR_0;
    }
  else if (FUNC_12 (FUNC_5 (VAR_9, 1), VAR_8->a))
    {
      if (! FUNC_12 (FUNC_5 (VAR_9, 0), VAR_8->b))
 return VAR_0;
      VAR_13 = FUNC_14 (VAR_13);
    }
  else
    return VAR_0;



  switch (VAR_13)
    {
    case 133:
    case 135:
    case 128:
    case 129:
      VAR_14 = VAR_2;
      VAR_15 = 0;
      break;
    case 137:
    case 139:
    case 130:
    case 131:
      VAR_14 = VAR_3;
      VAR_15 = 0;
      break;
    case 132:
    case 134:
      VAR_14 = VAR_5;
      VAR_15 = 1;
      break;
    case 136:
    case 138:
      VAR_14 = VAR_6;
      VAR_15 = 1;
      break;
    default:
      return VAR_0;
    }

  FUNC_13 ();

  VAR_11 = FUNC_9 (FUNC_1 (VAR_8->x), VAR_14,
    VAR_8->a, VAR_8->b,
    VAR_8->x, VAR_15, VAR_1);
  if (! VAR_11)
    {
      FUNC_8 ();
      return VAR_0;
    }
  if (VAR_11 != VAR_8->x)
    FUNC_10 (VAR_8->x, VAR_11);

  VAR_12 = FUNC_7 (VAR_8);
  if (!VAR_12)
    return VAR_0;

  FUNC_6 (VAR_12, VAR_8->jump, FUNC_4 (VAR_8->insn_a));
  VAR_8->cond = VAR_9;
  VAR_8->cond_earliest = VAR_10;

  return VAR_4;
}
