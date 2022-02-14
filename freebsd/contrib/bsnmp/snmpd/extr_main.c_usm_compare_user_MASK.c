
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_2__ {scalar_t__* sec_name; } ;
struct usm_user {scalar_t__ user_engine_len; scalar_t__* user_engine_id; TYPE_1__ suser; } ;


 size_t FUNC_0 (scalar_t__*) ;

__attribute__((used)) static int
FUNC_1(struct usm_user *VAR_0, struct usm_user *VAR_1)
{
 uint32_t VAR_2;

 if (VAR_0->user_engine_len < VAR_1->user_engine_len)
  return (-1);
 if (VAR_0->user_engine_len > VAR_1->user_engine_len)
  return (1);

 for (VAR_2 = 0; VAR_2 < VAR_0->user_engine_len; VAR_2++) {
  if (VAR_0->user_engine_id[VAR_2] < VAR_1->user_engine_id[VAR_2])
   return (-1);
  if (VAR_0->user_engine_id[VAR_2] > VAR_1->user_engine_id[VAR_2])
   return (1);
 }

 if (FUNC_0(VAR_0->suser.sec_name) < FUNC_0(VAR_1->suser.sec_name))
  return (-1);
 if (FUNC_0(VAR_0->suser.sec_name) > FUNC_0(VAR_1->suser.sec_name))
  return (1);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->suser.sec_name); VAR_2++) {
  if (VAR_0->suser.sec_name[VAR_2] < VAR_1->suser.sec_name[VAR_2])
   return (-1);
  if (VAR_0->suser.sec_name[VAR_2] > VAR_1->suser.sec_name[VAR_2])
   return (1);
 }

 return (0);
}
