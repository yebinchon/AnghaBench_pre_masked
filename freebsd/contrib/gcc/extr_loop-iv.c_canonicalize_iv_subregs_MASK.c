
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtx_iv {scalar_t__ mult; scalar_t__ delta; int extend_mode; int mode; scalar_t__ step; void* base; int extend; scalar_t__ first_special; } ;
struct niter_desc {int mode; int signed_p; } ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int) ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (struct rtx_iv*,int,int,int,struct niter_desc*) ;
 void* FUNC_3 (int ,int,void*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static bool
FUNC_5 (struct rtx_iv *VAR_5, struct rtx_iv *VAR_6,
    enum rtx_code VAR_7, struct niter_desc *VAR_8)
{
  enum machine_mode VAR_9;
  bool VAR_10;



  if (VAR_5->first_special || VAR_5->mult != VAR_4 || VAR_5->delta != VAR_3)
    return 0;
  if (VAR_6->first_special || VAR_6->mult != VAR_4 || VAR_6->delta != VAR_3)
    return 0;


  switch (VAR_7)
    {
      case 132:
      case 130:
 if (VAR_5->extend == VAR_2
     || VAR_6->extend == VAR_2)
   return 0;
 VAR_10 = 1;
 break;

      case 131:
      case 129:
 if (VAR_5->extend == VAR_0
     || VAR_6->extend == VAR_0)
   return 0;
 VAR_10 = 0;
 break;

      case 128:
 if (VAR_5->extend != VAR_1
     && VAR_6->extend != VAR_1
     && VAR_5->extend != VAR_6->extend)
   return 0;

 VAR_10 = 0;
 if (VAR_5->extend != VAR_1)
   VAR_10 = VAR_5->extend == VAR_0;
 if (VAR_6->extend != VAR_1)
   VAR_10 = VAR_6->extend == VAR_0;
 break;

      default:
 FUNC_1 ();
    }
  VAR_9 = VAR_5->extend_mode;
  if (FUNC_0 (VAR_9) < FUNC_0 (VAR_6->extend_mode))
    VAR_9 = VAR_6->extend_mode;

  if (VAR_5->extend_mode != VAR_9)
    {
      if (VAR_5->mode != VAR_5->extend_mode
   || VAR_5->step != VAR_3)
 return 0;

      VAR_5->base = FUNC_3 (VAR_10 ? VAR_0 : VAR_2,
          VAR_9, VAR_5->base, VAR_5->mode);
      VAR_5->extend_mode = VAR_9;
    }

  if (VAR_6->extend_mode != VAR_9)
    {
      if (VAR_6->mode != VAR_6->extend_mode
   || VAR_6->step != VAR_3)
 return 0;

      VAR_6->base = FUNC_3 (VAR_10 ? VAR_0 : VAR_2,
          VAR_9, VAR_6->base, VAR_6->mode);
      VAR_6->extend_mode = VAR_9;
    }




  if (VAR_5->mode == VAR_5->extend_mode
      && VAR_5->step == VAR_3
      && VAR_5->mode != VAR_6->mode)
    FUNC_2 (VAR_5, VAR_6->mode, VAR_7, VAR_10, VAR_8);

  if (VAR_6->mode == VAR_6->extend_mode
      && VAR_6->step == VAR_3
      && VAR_5->mode != VAR_6->mode)
    FUNC_2 (VAR_6, VAR_5->mode, FUNC_4 (VAR_7), VAR_10, VAR_8);

  if (VAR_5->mode != VAR_6->mode)
    return 0;

  VAR_8->mode = VAR_5->mode;
  VAR_8->signed_p = VAR_10;

  return 1;
}
