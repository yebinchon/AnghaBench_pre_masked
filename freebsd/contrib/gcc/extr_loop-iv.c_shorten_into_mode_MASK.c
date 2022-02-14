
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtx_iv {int mode; int extend; int base; int extend_mode; } ;
struct niter_desc {void* infinite; void* noloop_assumptions; } ;
typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int ,void*) ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int,int,int ,int *,int *) ;
 int FUNC_3 (int,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4 (struct rtx_iv *VAR_4, enum machine_mode VAR_5,
     enum rtx_code VAR_6, bool VAR_7, struct niter_desc *VAR_8)
{
  rtx VAR_9, VAR_10, VAR_11, VAR_12;

  FUNC_2 (VAR_5, VAR_7, VAR_4->extend_mode, &VAR_9, &VAR_10);
  VAR_12 = FUNC_3 (130, VAR_1, VAR_4->extend_mode,
     VAR_4->base, VAR_9);
  VAR_11 = FUNC_3 (134, VAR_1, VAR_4->extend_mode,
           VAR_4->base, VAR_10);

  switch (VAR_6)
    {
      case 132:
      case 130:
      case 131:
      case 129:
 if (VAR_12 != VAR_3)
   VAR_8->infinite =
    FUNC_0 (0, VAR_12, VAR_8->infinite);
 if (VAR_11 != VAR_3)
   VAR_8->noloop_assumptions =
    FUNC_0 (0, VAR_11, VAR_8->noloop_assumptions);
 break;

      case 136:
      case 134:
      case 135:
      case 133:
 if (VAR_11 != VAR_3)
   VAR_8->infinite =
    FUNC_0 (0, VAR_11, VAR_8->infinite);
 if (VAR_12 != VAR_3)
   VAR_8->noloop_assumptions =
    FUNC_0 (0, VAR_12, VAR_8->noloop_assumptions);
 break;

      case 128:
 if (VAR_11 != VAR_3)
   VAR_8->infinite =
    FUNC_0 (0, VAR_11, VAR_8->infinite);
 if (VAR_12 != VAR_3)
   VAR_8->infinite =
    FUNC_0 (0, VAR_12, VAR_8->infinite);
 break;

      default:
 FUNC_1 ();
    }

  VAR_4->mode = VAR_5;
  VAR_4->extend = VAR_7 ? VAR_0 : VAR_2;
}
