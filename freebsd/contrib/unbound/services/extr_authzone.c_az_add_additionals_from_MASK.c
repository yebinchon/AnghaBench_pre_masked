
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regional {int dummy; } ;
struct packed_rrset_data {size_t count; int* rr_len; scalar_t__* rr_data; } ;
struct dns_msg {int dummy; } ;
struct auth_zone {int dummy; } ;
struct auth_rrset {struct packed_rrset_data* data; } ;
struct auth_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct auth_rrset* FUNC_0 (struct auth_data*,int ) ;
 struct auth_data* FUNC_1 (struct auth_zone*,scalar_t__,size_t) ;
 size_t FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct auth_zone*,struct regional*,struct dns_msg*,struct auth_data*,struct auth_rrset*) ;

__attribute__((used)) static int
FUNC_4(struct auth_zone* VAR_2, struct regional* VAR_3,
 struct dns_msg* VAR_4, struct auth_rrset* VAR_5, size_t VAR_6)
{
 struct packed_rrset_data* VAR_7 = VAR_5->data;
 size_t VAR_8;
 if(!VAR_7) return 0;
 for(VAR_8=0; VAR_8<VAR_7->count; VAR_8++) {
  size_t VAR_9;
  struct auth_data* VAR_10;
  struct auth_rrset* VAR_11;
  if(VAR_7->rr_len[VAR_8] < 2+VAR_6)
   continue;
  if(!(VAR_9 = FUNC_2(VAR_7->rr_data[VAR_8]+2+VAR_6,
   VAR_7->rr_len[VAR_8]-2-VAR_6)))
   continue;
  VAR_10 = FUNC_1(VAR_2, VAR_7->rr_data[VAR_8]+2+VAR_6, VAR_9);
  if(!VAR_10)
   continue;
  if((VAR_11=FUNC_0(VAR_10, VAR_0)) != ((void*)0)) {
   if(!FUNC_3(VAR_2, VAR_3, VAR_4, VAR_10, VAR_11))
    return 0;
  }
  if((VAR_11=FUNC_0(VAR_10, VAR_1)) != ((void*)0)) {
   if(!FUNC_3(VAR_2, VAR_3, VAR_4, VAR_10, VAR_11))
    return 0;
  }
 }
 return 1;
}
