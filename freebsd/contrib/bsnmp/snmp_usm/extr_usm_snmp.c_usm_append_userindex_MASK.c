
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t uint ;
struct TYPE_2__ {int* sec_name; } ;
struct usm_user {size_t user_engine_len; size_t* user_engine_id; TYPE_1__ suser; } ;
struct asn_oid {size_t len; size_t* subs; } ;


 size_t FUNC_0 (int*) ;

__attribute__((used)) static void
FUNC_1(struct asn_oid *VAR_0, uint VAR_1,
    const struct usm_user *VAR_2)
{
 uint32_t VAR_3;

 VAR_0->len = VAR_1 + VAR_2->user_engine_len + FUNC_0(VAR_2->suser.sec_name);
 VAR_0->len += 2;
 VAR_0->subs[VAR_1] = VAR_2->user_engine_len;
 for (VAR_3 = 1; VAR_3 < VAR_2->user_engine_len + 1; VAR_3++)
  VAR_0->subs[VAR_1 + VAR_3] = VAR_2->user_engine_id[VAR_3 - 1];

 VAR_1 += VAR_2->user_engine_len + 1;
 VAR_0->subs[VAR_1] = FUNC_0(VAR_2->suser.sec_name);
 for (VAR_3 = 1; VAR_3 <= VAR_0->subs[VAR_1]; VAR_3++)
  VAR_0->subs[VAR_1 + VAR_3] = VAR_2->suser.sec_name[VAR_3 - 1];
}
