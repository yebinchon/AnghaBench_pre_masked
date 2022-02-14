
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_sackhdr {int num_gap_ack_blocks; TYPE_2__* variable; int cum_tsn_ack; } ;
struct TYPE_3__ {int end; int start; } ;
struct TYPE_4__ {TYPE_1__ gab; } ;
typedef TYPE_2__ sctp_sack_variable_t ;
typedef int __u32 ;
typedef int __u16 ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct sctp_sackhdr *VAR_0, __u32 VAR_1)
{
 int VAR_2;
 sctp_sack_variable_t *VAR_3;
 __u16 VAR_4;
 __u32 VAR_5 = FUNC_1(VAR_0->cum_tsn_ack);

 if (FUNC_0(VAR_1, VAR_5))
  goto pass;
 VAR_3 = VAR_0->variable;
 VAR_4 = VAR_1 - VAR_5;
 for (VAR_2 = 0; VAR_2 < FUNC_2(VAR_0->num_gap_ack_blocks); ++VAR_2) {
  if (FUNC_0(FUNC_2(VAR_3[VAR_2].gab.start), VAR_4) &&
      FUNC_0(VAR_4, FUNC_2(VAR_3[VAR_2].gab.end)))
   goto pass;
 }

 return 0;
pass:
 return 1;
}
