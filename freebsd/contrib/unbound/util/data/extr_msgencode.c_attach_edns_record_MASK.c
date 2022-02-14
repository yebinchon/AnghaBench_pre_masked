
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edns_option {scalar_t__ opt_code; scalar_t__ opt_len; int opt_data; struct edns_option* next; } ;
struct edns_data {scalar_t__ udp_size; scalar_t__ bits; struct edns_option* opt_list; int edns_version; int ext_rcode; int edns_present; } ;
typedef int sldns_buffer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;
 size_t FUNC_3 (int *) ;
 size_t FUNC_4 (int *,int) ;
 int FUNC_5 (int *,size_t) ;
 int FUNC_6 (int *,int ,scalar_t__) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *,size_t,size_t) ;
 int FUNC_9 (int *,int ) ;

void
FUNC_10(sldns_buffer* VAR_1, struct edns_data* VAR_2)
{
 size_t VAR_3;
 size_t VAR_4;
 struct edns_option* VAR_5;
 if(!VAR_2 || !VAR_2->edns_present)
  return;

 FUNC_8(VAR_1, 10,
  FUNC_4(VAR_1, 10) + 1);
 VAR_3 = FUNC_2(VAR_1);
 FUNC_0(VAR_1);
 FUNC_5(VAR_1, VAR_3);

 FUNC_9(VAR_1, 0);
 FUNC_7(VAR_1, VAR_0);
 FUNC_7(VAR_1, VAR_2->udp_size);
 FUNC_9(VAR_1, VAR_2->ext_rcode);
 FUNC_9(VAR_1, VAR_2->edns_version);
 FUNC_7(VAR_1, VAR_2->bits);
 VAR_4 = FUNC_3(VAR_1);
 FUNC_7(VAR_1, 0);

 for(VAR_5=VAR_2->opt_list; VAR_5; VAR_5=VAR_5->next) {
  FUNC_7(VAR_1, VAR_5->opt_code);
  FUNC_7(VAR_1, VAR_5->opt_len);
  if(VAR_5->opt_len != 0)
   FUNC_6(VAR_1, VAR_5->opt_data, VAR_5->opt_len);
 }
 if(VAR_2->opt_list)
  FUNC_8(VAR_1, VAR_4,
   FUNC_3(VAR_1)-VAR_4-2);
 FUNC_1(VAR_1);
}
