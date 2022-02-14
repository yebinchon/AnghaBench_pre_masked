
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* acl_entry_t ;
struct TYPE_5__ {int ae_id; int ae_tag; int ae_entry_type; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__* const) ;

__attribute__((used)) static int
FUNC_1(const acl_entry_t VAR_2, const acl_entry_t VAR_3)
{






 switch (FUNC_0(VAR_2)) {
 case 128:
  if (VAR_2->ae_tag != VAR_3->ae_tag || VAR_2->ae_entry_type != VAR_3->ae_entry_type)
   return (0);


  if (VAR_2->ae_tag == VAR_1 || VAR_2->ae_tag == VAR_0) {
   if (VAR_2->ae_id != VAR_3->ae_id)
    return (0);
  }

  return (1);

 default:
  if ((VAR_2->ae_tag == VAR_3->ae_tag) && (VAR_2->ae_id == VAR_3->ae_id))
   return (1);
 }

 return (0);
}
