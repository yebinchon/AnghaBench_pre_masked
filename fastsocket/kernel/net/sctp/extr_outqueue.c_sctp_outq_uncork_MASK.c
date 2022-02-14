
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_outq {scalar_t__ cork; } ;


 int FUNC_0 (struct sctp_outq*,int ) ;

int FUNC_1(struct sctp_outq *VAR_0)
{
 int VAR_1 = 0;
 if (VAR_0->cork)
  VAR_0->cork = 0;
 VAR_1 = FUNC_0(VAR_0, 0);
 return VAR_1;
}
