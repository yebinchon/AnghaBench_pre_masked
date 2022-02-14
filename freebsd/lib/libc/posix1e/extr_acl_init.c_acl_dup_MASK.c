
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* acl_t ;
struct TYPE_5__ {scalar_t__ ats_cur_entry; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;

acl_t
FUNC_1(acl_t VAR_1)
{
 acl_t VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 != ((void*)0)) {
  *VAR_2 = *VAR_1;
  VAR_1->ats_cur_entry = 0;
  VAR_2->ats_cur_entry = 0;
 }

 return (VAR_2);
}
