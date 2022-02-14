
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_ulpevent {int msg_flags; } ;


 int VAR_0 ;

int FUNC_0(const struct sctp_ulpevent *VAR_1)
{
 return VAR_0 == (VAR_1->msg_flags & VAR_0);
}
