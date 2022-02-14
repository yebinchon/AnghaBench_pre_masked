
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
struct sk_buff {scalar_t__ csum; } ;
struct TYPE_4__ {int flags; void* end_seq; void* seq; scalar_t__ sacked; } ;
struct TYPE_3__ {int gso_segs; scalar_t__ gso_type; scalar_t__ gso_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_2, u32 VAR_3, u8 VAR_4)
{
 VAR_2->csum = 0;

 FUNC_0(VAR_2)->flags = VAR_4;
 FUNC_0(VAR_2)->sacked = 0;

 FUNC_1(VAR_2)->gso_segs = 1;
 FUNC_1(VAR_2)->gso_size = 0;
 FUNC_1(VAR_2)->gso_type = 0;

 FUNC_0(VAR_2)->seq = VAR_3;
 if (VAR_4 & (VAR_1 | VAR_0))
  VAR_3++;
 FUNC_0(VAR_2)->end_seq = VAR_3;
}
