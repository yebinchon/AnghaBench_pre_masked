
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int dt_sugar_parse_t ;
struct TYPE_5__ {scalar_t__ dn_kind; struct TYPE_5__* dn_list; } ;
typedef TYPE_1__ dt_node_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int) ;
 int FUNC_1 (int *,int,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(dt_sugar_parse_t *VAR_1, dt_node_t *VAR_2, int VAR_3)
{
 dt_node_t *VAR_4;
 dt_node_t *VAR_5 = ((void*)0);
 dt_node_t *VAR_6;
 dt_node_t *VAR_7 = ((void*)0);

 for (VAR_4 = VAR_2; VAR_4 != ((void*)0); VAR_4 = VAR_6) {
  VAR_6 = VAR_4->dn_list;

  if (VAR_4->dn_kind != VAR_0) {
   if (VAR_7 == ((void*)0))
    VAR_7 = VAR_4;
   VAR_5 = VAR_4;
   continue;
  }





  if (VAR_5 != ((void*)0))
   VAR_5->dn_list = ((void*)0);




  if (VAR_7 != ((void*)0)) {
   FUNC_1(VAR_1, VAR_3,
       VAR_7);
  }

  FUNC_0(VAR_1, VAR_4, VAR_3);

  VAR_7 = ((void*)0);

  VAR_5 = VAR_4;
 }


 if (VAR_7 != ((void*)0)) {
  FUNC_1(VAR_1, VAR_3,
      VAR_7);
 }
}
