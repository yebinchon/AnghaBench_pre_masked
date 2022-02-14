
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int len; } ;
struct TYPE_3__ {int len; } ;
struct sctp_ssnmap {TYPE_2__ out; TYPE_1__ in; scalar_t__ malloced; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sctp_ssnmap*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;

void FUNC_5(struct sctp_ssnmap *VAR_2)
{
 if (VAR_2 && VAR_2->malloced) {
  int VAR_3;

  VAR_3 = FUNC_4(VAR_2->in.len, VAR_2->out.len);
  if (VAR_3 <= VAR_0)
   FUNC_3(VAR_2);
  else
   FUNC_1((unsigned long)VAR_2, FUNC_2(VAR_3));
  FUNC_0(VAR_1);
 }
}
