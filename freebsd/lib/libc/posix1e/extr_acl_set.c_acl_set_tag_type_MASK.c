
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int acl_tag_t ;
typedef TYPE_1__* acl_entry_t ;
struct TYPE_5__ {int ae_tag; } ;


 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_3 ;

int
FUNC_2(acl_entry_t VAR_4, acl_tag_t VAR_5)
{

 if (VAR_4 == ((void*)0)) {
  VAR_3 = VAR_2;
  return (-1);
 }

 switch(VAR_5) {
 case 130:
 case 131:
  if (!FUNC_1(VAR_4, VAR_1)) {
   VAR_3 = VAR_2;
   return (-1);
  }
  FUNC_0(VAR_4, VAR_1);
  break;
 case 134:
  if (!FUNC_1(VAR_4, VAR_0)) {
   VAR_3 = VAR_2;
   return (-1);
  }
  FUNC_0(VAR_4, VAR_0);
  break;
 }

 switch(VAR_5) {
 case 128:
 case 129:
 case 132:
 case 133:
 case 131:
 case 130:
 case 134:
  VAR_4->ae_tag = VAR_5;
  return (0);
 }

 VAR_3 = VAR_2;
 return (-1);
}
