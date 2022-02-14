
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_rateest_match_info {int flags; int mode; struct xt_rateest* est2; struct xt_rateest* est1; int name2; int name1; } ;
struct xt_rateest {int dummy; } ;
struct xt_mtchk_param {struct xt_rateest_match_info* matchinfo; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct xt_rateest* FUNC_1 (int ) ;
 int FUNC_2 (struct xt_rateest*) ;

__attribute__((used)) static bool FUNC_3(const struct xt_mtchk_param *VAR_4)
{
 struct xt_rateest_match_info *VAR_5 = VAR_4->matchinfo;
 struct xt_rateest *VAR_6, *VAR_7;

 if (FUNC_0(VAR_5->flags & (VAR_0 |
         VAR_3)) != 1)
  goto err1;

 if (!(VAR_5->flags & (VAR_1 | VAR_2)))
  goto err1;

 switch (VAR_5->mode) {
 case 130:
 case 128:
 case 129:
  break;
 default:
  goto err1;
 }

 VAR_6 = FUNC_1(VAR_5->name1);
 if (!VAR_6)
  goto err1;

 if (VAR_5->flags & VAR_3) {
  VAR_7 = FUNC_1(VAR_5->name2);
  if (!VAR_7)
   goto err2;
 } else
  VAR_7 = ((void*)0);


 VAR_5->est1 = VAR_6;
 VAR_5->est2 = VAR_7;
 return 1;

err2:
 FUNC_2(VAR_6);
err1:
 return 0;
}
