
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tlsv1_server {int state; int use_session_ticket; } ;


 int VAR_0 ;


 int * FUNC_0 (struct tlsv1_server*,size_t*) ;
 int * FUNC_1 (struct tlsv1_server*,size_t*) ;
 int FUNC_2 (struct tlsv1_server*,char*,int) ;

u8 * FUNC_3(struct tlsv1_server *VAR_1, size_t *VAR_2)
{
 switch (VAR_1->state) {
 case 128:
  return FUNC_1(VAR_1, VAR_2);
 case 129:
  return FUNC_0(VAR_1, VAR_2);
 default:
  if (VAR_1->state == VAR_0 && VAR_1->use_session_ticket) {

   return ((void*)0);
  }
  FUNC_2(VAR_1, "Unexpected state %d while generating reply",
     VAR_1->state);
  return ((void*)0);
 }
}
