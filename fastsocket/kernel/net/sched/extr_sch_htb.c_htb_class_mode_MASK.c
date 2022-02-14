
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htb_class {long ctokens; long tokens; } ;
typedef enum htb_cmode { ____Placeholder_htb_cmode } htb_cmode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long FUNC_0 (struct htb_class*) ;
 long FUNC_1 (struct htb_class*) ;

__attribute__((used)) static inline enum htb_cmode
FUNC_2(struct htb_class *VAR_3, long *VAR_4)
{
 long VAR_5;

 if ((VAR_5 = (VAR_3->ctokens + *VAR_4)) < FUNC_1(VAR_3)) {
  *VAR_4 = -VAR_5;
  return VAR_0;
 }

 if ((VAR_5 = (VAR_3->tokens + *VAR_4)) >= FUNC_0(VAR_3))
  return VAR_1;

 *VAR_4 = -VAR_5;
 return VAR_2;
}
