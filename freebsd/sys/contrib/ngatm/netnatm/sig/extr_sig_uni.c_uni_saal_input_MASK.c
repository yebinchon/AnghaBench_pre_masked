
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni_msg {int dummy; } ;
struct uni {int dummy; } ;
typedef enum saal_sig { ____Placeholder_saal_sig } saal_sig ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct uni*,int ,int,char*,int) ;
 int FUNC_1 (struct uni*,int ,int ,struct uni_msg*) ;
 int FUNC_2 (struct uni_msg*) ;

void
FUNC_3(struct uni *VAR_7, enum saal_sig VAR_8, struct uni_msg *VAR_9)
{
 switch (VAR_8) {

   case 131:
  if (VAR_9 != ((void*)0))
   FUNC_2(VAR_9);
  FUNC_1(VAR_7, VAR_2, 0, ((void*)0));
  break;

   case 132:
  if (VAR_9 != ((void*)0))
   FUNC_2(VAR_9);
  FUNC_1(VAR_7, VAR_1, 0, ((void*)0));
  break;

   case 130:
  if (VAR_9 != ((void*)0))
   FUNC_2(VAR_9);
  FUNC_1(VAR_7, VAR_3, 0, ((void*)0));
  break;

   case 129:
  if (VAR_9 != ((void*)0))
   FUNC_2(VAR_9);
  FUNC_1(VAR_7, VAR_4, 0, ((void*)0));
  break;

   case 133:
  FUNC_1(VAR_7, VAR_0, 0, VAR_9);
  break;

   case 128:
  FUNC_1(VAR_7, VAR_5, 0, VAR_9);
  break;

   default:
  FUNC_0(VAR_7, VAR_6, 1, "bogus saal signal %u", VAR_8);
  if (VAR_9 != ((void*)0))
   FUNC_2(VAR_9);
  break;
 }
}
