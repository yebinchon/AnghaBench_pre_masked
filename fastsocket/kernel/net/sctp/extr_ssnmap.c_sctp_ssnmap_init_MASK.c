
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t* ssn; size_t len; } ;
struct TYPE_3__ {size_t* ssn; size_t len; } ;
struct sctp_ssnmap {TYPE_2__ out; TYPE_1__ in; } ;
typedef size_t __u16 ;


 int FUNC_0 (struct sctp_ssnmap*,int,int ) ;
 int FUNC_1 (size_t,size_t) ;

__attribute__((used)) static struct sctp_ssnmap *FUNC_2(struct sctp_ssnmap *VAR_0, __u16 VAR_1,
         __u16 VAR_2)
{
 FUNC_0(VAR_0, 0x00, FUNC_1(VAR_1, VAR_2));


 VAR_0->in.ssn = (__u16 *)&VAR_0[1];
 VAR_0->in.len = VAR_1;


 VAR_0->out.ssn = &VAR_0->in.ssn[VAR_1];
 VAR_0->out.len = VAR_2;

 return VAR_0;
}
