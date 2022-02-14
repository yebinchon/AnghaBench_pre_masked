
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ii_type; int ii_owner; int ii_name; } ;
typedef TYPE_1__ iidesc_t ;
struct TYPE_4__ {TYPE_1__* iim_ret; int * iim_file; int iim_bind; int iim_fuzzy; int * iim_name; } ;
typedef TYPE_2__ iidesc_match_t ;






 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static int
FUNC_1(void *VAR_2, void *VAR_3)
{
 iidesc_t *VAR_4 = VAR_2;
 iidesc_match_t *VAR_5 = VAR_3;
 if (FUNC_0(VAR_4->ii_name, VAR_5->iim_name) == 0)
  return (0);

 switch (VAR_4->ii_type) {
 case 131:
 case 130:
  if (VAR_5->iim_bind == VAR_0) {
   VAR_5->iim_ret = VAR_4;
   return (-1);
  } else if (VAR_5->iim_fuzzy && VAR_5->iim_ret == ((void*)0)) {
   VAR_5->iim_ret = VAR_4;

   return (0);
  }
  break;
 case 129:
 case 128:
  if (VAR_5->iim_bind == VAR_1 &&
      VAR_5->iim_file != ((void*)0) &&
      FUNC_0(VAR_4->ii_owner, VAR_5->iim_file)) {
   VAR_5->iim_ret = VAR_4;
   return (-1);
  }
  break;
 default:
  break;
 }
 return (0);
}
