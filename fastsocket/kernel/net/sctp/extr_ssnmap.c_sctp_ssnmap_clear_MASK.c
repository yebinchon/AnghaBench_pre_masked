
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int len; int ssn; } ;
struct TYPE_3__ {int len; } ;
struct sctp_ssnmap {TYPE_2__ in; TYPE_1__ out; } ;
typedef int __u16 ;


 int FUNC_0 (int ,int,size_t) ;

void FUNC_1(struct sctp_ssnmap *VAR_0)
{
 size_t VAR_1;

 VAR_1 = (VAR_0->in.len + VAR_0->out.len) * sizeof(__u16);
 FUNC_0(VAR_0->in.ssn, 0x00, VAR_1);
}
