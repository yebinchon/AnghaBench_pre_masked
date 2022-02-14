
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acl_entry {scalar_t__ ae_tag; scalar_t__ ae_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct acl_entry*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct acl_entry *VAR_3, struct acl_entry *VAR_4)
{

 FUNC_1(FUNC_0(VAR_3) == VAR_0);
 FUNC_1(FUNC_0(VAR_4) == VAR_0);





 if (VAR_3->ae_tag < VAR_4->ae_tag)
  return (-1);
 if (VAR_3->ae_tag > VAR_4->ae_tag)
  return (1);





 if (VAR_3->ae_tag == VAR_2 || VAR_3->ae_tag == VAR_1) {
  if (VAR_3->ae_id < VAR_4->ae_id)
   return (-1);
  if (VAR_3->ae_id > VAR_4->ae_id)
   return (1);


 }






 return (0);
}
