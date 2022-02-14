
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_rrset_data {scalar_t__ count; int* rr_len; int* rr_data; } ;
struct auth_zone {int namelen; int name; } ;
struct auth_xfer {int have_zone; void* expiry; void* retry; void* refresh; void* serial; } ;
struct auth_rrset {struct packed_rrset_data* data; } ;
struct auth_data {int dummy; } ;


 int VAR_0 ;
 struct auth_rrset* FUNC_0 (struct auth_data*,int ) ;
 struct auth_data* FUNC_1 (struct auth_zone*,int ,int ) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct auth_zone* VAR_1, struct auth_xfer* VAR_2)
{
 struct auth_data* VAR_3;
 struct auth_rrset* VAR_4;
 struct packed_rrset_data* VAR_5;
 VAR_3 = FUNC_1(VAR_1, VAR_1->name, VAR_1->namelen);
 if(!VAR_3) return 0;
 VAR_4 = FUNC_0(VAR_3, VAR_0);
 if(!VAR_4 || VAR_4->data->count==0)
  return 0;
 if(VAR_4->data->rr_len[0] < 2+4*5) return 0;


 VAR_5 = VAR_4->data;
 VAR_2->have_zone = 1;
 VAR_2->serial = FUNC_2(VAR_5->rr_data[0]+(VAR_5->rr_len[0]-20));
 VAR_2->refresh = FUNC_2(VAR_5->rr_data[0]+(VAR_5->rr_len[0]-16));
 VAR_2->retry = FUNC_2(VAR_5->rr_data[0]+(VAR_5->rr_len[0]-12));
 VAR_2->expiry = FUNC_2(VAR_5->rr_data[0]+(VAR_5->rr_len[0]-8));

 return 1;
}
