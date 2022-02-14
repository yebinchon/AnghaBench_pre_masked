
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct dt_pragmadesc {char* dpd_name; int dpd_kind; int (* dpd_func ) (char*,TYPE_1__*) ;} ;
struct TYPE_6__ {scalar_t__ dn_kind; char* dn_string; struct TYPE_6__* dn_list; } ;
typedef TYPE_1__ dt_node_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (char*,TYPE_1__*) ;
 struct dt_pragmadesc* VAR_4 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,TYPE_1__*) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_5 ;

void
FUNC_5(dt_node_t *VAR_6)
{
 const struct dt_pragmadesc *VAR_7;
 dt_node_t *VAR_8;
 int VAR_9 = 129;

 for (VAR_8 = VAR_6; VAR_8 != ((void*)0); VAR_8 = VAR_8->dn_list) {
  if (VAR_8->dn_kind == VAR_1) {
   FUNC_1("line", VAR_8);
   break;
  }

  if (VAR_8->dn_kind != VAR_0)
   FUNC_4(VAR_2, "invalid control directive\n");

  if (VAR_9 == 129 &&
      FUNC_2(VAR_8->dn_string, "pragma") == 0) {
   VAR_9 = 128;
   continue;
  }

  if (VAR_9 == 128 &&
      FUNC_2(VAR_8->dn_string, "D") == 0) {
   VAR_9 = 130;
   continue;
  }

  for (VAR_7 = VAR_4; VAR_7->dpd_name != ((void*)0); VAR_7++) {
   if (VAR_7->dpd_kind <= VAR_9 &&
       FUNC_2(VAR_7->dpd_name, VAR_8->dn_string) == 0)
    break;
  }

  VAR_5--;

  if (VAR_7->dpd_name != ((void*)0)) {
   VAR_7->dpd_func(VAR_7->dpd_name, VAR_8->dn_list);
   VAR_5++;
   break;
  }

  switch (VAR_9) {
  case 129:
   FUNC_4(VAR_2, "invalid control directive: "
       "#%s\n", VAR_8->dn_string);

  case 128:
   break;
  case 130:
  default:
   FUNC_4(VAR_3, "invalid D pragma: %s\n",
       VAR_8->dn_string);
  }

  VAR_5++;
  break;
 }

 FUNC_0(&VAR_6);
}
