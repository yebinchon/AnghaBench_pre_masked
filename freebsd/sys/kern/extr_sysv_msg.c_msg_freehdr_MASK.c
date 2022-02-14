
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msg {scalar_t__ msg_ts; size_t msg_spot; struct msg* msg_next; } ;
struct TYPE_4__ {size_t msgseg; scalar_t__ msgssz; } ;
struct TYPE_3__ {short next; } ;


 struct msg* VAR_0 ;
 short VAR_1 ;
 int FUNC_0 (struct msg*) ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(struct msg *VAR_5)
{
 while (VAR_5->msg_ts > 0) {
  short VAR_6;
  if (VAR_5->msg_spot < 0 || VAR_5->msg_spot >= VAR_2.msgseg)
   FUNC_1("msghdr->msg_spot out of range");
  VAR_6 = VAR_3[VAR_5->msg_spot].next;
  VAR_3[VAR_5->msg_spot].next = VAR_1;
  VAR_1 = VAR_5->msg_spot;
  VAR_4++;
  VAR_5->msg_spot = VAR_6;
  if (VAR_5->msg_ts >= VAR_2.msgssz)
   VAR_5->msg_ts -= VAR_2.msgssz;
  else
   VAR_5->msg_ts = 0;
 }
 if (VAR_5->msg_spot != -1)
  FUNC_1("msghdr->msg_spot != -1");
 VAR_5->msg_next = VAR_0;
 VAR_0 = VAR_5;



}
