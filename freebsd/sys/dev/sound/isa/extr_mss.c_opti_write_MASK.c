
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mss_info {int passwdreg; int password; int bd_id; int indir; int conf_base; } ;




 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static void
FUNC_1(struct mss_info *VAR_0, u_char VAR_1, u_char VAR_2)
{
 FUNC_0(VAR_0->conf_base, VAR_0->passwdreg, VAR_0->password);

 switch(VAR_0->bd_id) {
 case 129:
  if (VAR_1 > 7) {
   FUNC_0(VAR_0->conf_base, VAR_0->passwdreg, VAR_1);
   FUNC_0(VAR_0->conf_base, VAR_0->passwdreg,
    VAR_0->password);
   FUNC_0(VAR_0->conf_base, 9, VAR_2);
   return;
  }
  FUNC_0(VAR_0->conf_base, VAR_1, VAR_2);
  break;

 case 128:
  FUNC_0(VAR_0->indir, 0, VAR_1);
  FUNC_0(VAR_0->conf_base, VAR_0->passwdreg, VAR_0->password);
  FUNC_0(VAR_0->indir, 1, VAR_2);
  break;
 }
}
