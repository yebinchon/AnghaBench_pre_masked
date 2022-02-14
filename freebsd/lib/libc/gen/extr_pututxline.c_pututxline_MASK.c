
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utmpx {int dummy; } ;
struct futx {int fu_type; } ;




 int VAR_0 ;






 int VAR_1 ;
 struct utmpx* FUNC_0 (struct futx*) ;
 int FUNC_1 (struct futx*) ;
 int FUNC_2 (struct futx*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct futx*) ;
 int FUNC_5 (struct futx*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct futx*) ;
 int FUNC_8 (struct utmpx const*,struct futx*) ;

struct utmpx *
FUNC_9(const struct utmpx *VAR_2)
{
 struct futx VAR_3;
 int VAR_4;

 VAR_4 = 0;

 FUNC_8(VAR_2, &VAR_3);

 switch (VAR_3.fu_type) {
 case 135:
  FUNC_2(&VAR_3);
  FUNC_6();
  break;
 case 129:
  FUNC_3();
  break;
 case 130:
 case 131:
  break;
 case 128:
  VAR_4 |= FUNC_1(&VAR_3);
  VAR_4 |= FUNC_5(&VAR_3);
  break;






 case 134:





  if (FUNC_4(&VAR_3) != 0)
   return (((void*)0));
  break;
 default:
  VAR_1 = VAR_0;
  return (((void*)0));
 }

 VAR_4 |= FUNC_7(&VAR_3);
 return (VAR_4 ? ((void*)0) : FUNC_0(&VAR_3));
}
