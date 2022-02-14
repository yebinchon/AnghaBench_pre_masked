
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct regional {int dummy; } ;
struct packed_rrset_data {scalar_t__ count; int* rr_len; scalar_t__* rr_data; } ;
struct dns_msg {int dummy; } ;
struct auth_zone {int name; } ;
struct auth_rrset {struct packed_rrset_data* data; } ;
struct auth_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct auth_rrset* FUNC_0 (struct auth_data*,int ) ;
 struct auth_data* FUNC_1 (struct auth_zone*,scalar_t__,size_t) ;
 int FUNC_2 (scalar_t__,int ) ;
 size_t FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (struct auth_zone*,struct regional*,struct dns_msg*,struct auth_data*,struct auth_rrset*) ;

__attribute__((used)) static int
FUNC_5(struct auth_zone* VAR_2, uint16_t VAR_3,
 struct regional* VAR_4, struct dns_msg* VAR_5,
 struct packed_rrset_data* VAR_6)
{
 int VAR_7 = 0;

 while(VAR_7++ < VAR_1) {
  struct auth_data* VAR_8;
  struct auth_rrset* VAR_9;
  size_t VAR_10;

  if(VAR_6->count == 0) break;
  if(VAR_6->rr_len[0] < 2+1) break;
  if((VAR_10=FUNC_3(VAR_6->rr_data[0]+2, VAR_6->rr_len[0]-2))==0)
   break;
  if(!FUNC_2(VAR_6->rr_data[0]+2, VAR_2->name))
   break;
  if((VAR_8 = FUNC_1(VAR_2, VAR_6->rr_data[0]+2, VAR_10))==((void*)0))
   break;
  if((VAR_9=FUNC_0(VAR_8, VAR_3))!=((void*)0)) {

   if(!FUNC_4(VAR_2, VAR_4, VAR_5, VAR_8, VAR_9))
    return 0;
   break;
  }
  if((VAR_9=FUNC_0(VAR_8, VAR_0))==((void*)0))
   break;
  if(!FUNC_4(VAR_2, VAR_4, VAR_5, VAR_8, VAR_9)) return 0;
  VAR_6 = VAR_9->data;
 }
 return 1;
}
