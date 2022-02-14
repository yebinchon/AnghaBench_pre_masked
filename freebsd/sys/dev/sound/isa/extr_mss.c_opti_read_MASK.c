
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mss_info {int password; int bd_id; int indir; int passwdreg; int conf_base; } ;




 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int) ;

u_char
FUNC_2(struct mss_info *VAR_0, u_char VAR_1)
{
 FUNC_1(VAR_0->conf_base, VAR_0->passwdreg, VAR_0->password);

 switch(VAR_0->bd_id) {
 case 129:
  if (VAR_1 > 7) {
   FUNC_1(VAR_0->conf_base, VAR_0->passwdreg, VAR_1);
   FUNC_1(VAR_0->conf_base, VAR_0->passwdreg, VAR_0->password);
   return(FUNC_0(VAR_0->conf_base, 9));
  }
  return(FUNC_0(VAR_0->conf_base, VAR_1));
  break;

 case 128:
  FUNC_1(VAR_0->indir, 0, VAR_1);
  FUNC_1(VAR_0->conf_base, VAR_0->passwdreg, VAR_0->password);
  return FUNC_0(VAR_0->indir, 1);
  break;
 }
 return -1;
}
