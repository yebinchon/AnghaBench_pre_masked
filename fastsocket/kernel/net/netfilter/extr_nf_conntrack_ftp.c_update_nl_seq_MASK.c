
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct nf_ct_ftp_master {unsigned int* seq_aft_nl_num; scalar_t__** seq_aft_nl; } ;
struct nf_conn {int dummy; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct nf_conn *VAR_1, u32 VAR_2,
     struct nf_ct_ftp_master *VAR_3, int VAR_4,
     struct sk_buff *VAR_5)
{
 unsigned int VAR_6, VAR_7;


 for (VAR_6 = 0; VAR_6 < VAR_3->seq_aft_nl_num[VAR_4]; VAR_6++) {
  if (VAR_3->seq_aft_nl[VAR_4][VAR_6] == VAR_2)
   return;
 }

 if (VAR_3->seq_aft_nl_num[VAR_4] < VAR_0) {
  VAR_3->seq_aft_nl[VAR_4][VAR_3->seq_aft_nl_num[VAR_4]++] = VAR_2;
 } else {
  if (FUNC_1(VAR_3->seq_aft_nl[VAR_4][0], VAR_3->seq_aft_nl[VAR_4][1]))
   VAR_7 = 0;
  else
   VAR_7 = 1;

  if (FUNC_0(VAR_2, VAR_3->seq_aft_nl[VAR_4][VAR_7]))
   VAR_3->seq_aft_nl[VAR_4][VAR_7] = VAR_2;
 }
}
