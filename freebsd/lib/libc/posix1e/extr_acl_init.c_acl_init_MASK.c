
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct acl_t_struct {int dummy; } ;
typedef TYPE_2__* acl_t ;
struct TYPE_5__ {int acl_maxcnt; } ;
struct TYPE_6__ {TYPE_1__ ats_acl; int ats_brand; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int VAR_5 ;
 int FUNC_1 (void*,int,int) ;

acl_t
FUNC_2(int VAR_6)
{
 int VAR_7;
 acl_t VAR_8;

 if (VAR_6 > VAR_1) {
  VAR_5 = VAR_3;
  return (((void*)0));
 }
 if (VAR_6 < 0) {
  VAR_5 = VAR_2;
  return (((void*)0));
 }

 VAR_7 = FUNC_1((void *)&VAR_8, 1 << VAR_4,
     sizeof(struct acl_t_struct));
 if (VAR_7) {
  VAR_5 = VAR_7;
  return (((void*)0));
 }

 FUNC_0(VAR_8, sizeof(struct acl_t_struct));
 VAR_8->ats_brand = VAR_0;
 VAR_8->ats_acl.acl_maxcnt = VAR_1;

 return (VAR_8);
}
