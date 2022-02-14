
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dn_kind; char* dn_string; struct TYPE_3__* dn_list; } ;
typedef TYPE_1__ dt_node_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,char const*,char*) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_3, dt_node_t *VAR_4)
{
 dt_node_t *VAR_5;
 size_t VAR_6 = 0;
 char *VAR_7;

 for (VAR_5 = VAR_4; VAR_5 != ((void*)0); VAR_5 = VAR_5->dn_list) {
  if (VAR_5->dn_kind == VAR_0 ||
      VAR_5->dn_kind == VAR_1)
   VAR_6 += FUNC_2(VAR_5->dn_string) + 1;
 }

 VAR_7 = FUNC_0(VAR_6 + 1);
 VAR_7[0] = '\0';

 for (VAR_5 = VAR_4; VAR_5 != ((void*)0); VAR_5 = VAR_5->dn_list) {
  if (VAR_5->dn_kind == VAR_0 ||
      VAR_5->dn_kind == VAR_1) {
   (void) FUNC_1(VAR_7, VAR_5->dn_string);
   (void) FUNC_1(VAR_7, " ");
  }
 }

 FUNC_3(VAR_2, "#%s: %s\n", VAR_3, VAR_7);
}
