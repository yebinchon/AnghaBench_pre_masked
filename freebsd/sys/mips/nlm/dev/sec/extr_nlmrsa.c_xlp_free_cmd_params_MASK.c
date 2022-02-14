
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlp_rsa_command {struct xlp_rsa_command* rsasrc; int * krp; } ;
typedef int nlm_rsa_ucode_data ;


 int VAR_0 ;
 int FUNC_0 (struct xlp_rsa_command*,int,int ) ;
 int FUNC_1 (struct xlp_rsa_command*,int ) ;

__attribute__((used)) static void
FUNC_2(struct xlp_rsa_command *VAR_1)
{

 if (VAR_1 == ((void*)0))
  return;
 if (VAR_1->rsasrc != ((void*)0)) {
  if (VAR_1->krp == ((void*)0))
   FUNC_0(VAR_1->rsasrc, sizeof(nlm_rsa_ucode_data),
       VAR_0);
  else
   FUNC_1(VAR_1->rsasrc, VAR_0);
 }
 FUNC_1(VAR_1, VAR_0);
}
