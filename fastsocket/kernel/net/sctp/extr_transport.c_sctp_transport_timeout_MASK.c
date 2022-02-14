
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_transport {unsigned long rto; scalar_t__ state; scalar_t__ hbinterval; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_0 (unsigned long) ;

unsigned long FUNC_1(struct sctp_transport *VAR_3)
{
 unsigned long VAR_4;
 VAR_4 = VAR_3->rto + FUNC_0(VAR_3->rto);
 if ((VAR_3->state != VAR_1) &&
     (VAR_3->state != VAR_0))
  VAR_4 += VAR_3->hbinterval;
 VAR_4 += VAR_2;
 return VAR_4;
}
