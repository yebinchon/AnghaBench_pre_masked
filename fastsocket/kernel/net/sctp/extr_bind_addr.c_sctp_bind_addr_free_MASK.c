
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_bind_addr {scalar_t__ malloced; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct sctp_bind_addr*) ;
 int FUNC_2 (struct sctp_bind_addr*) ;

void FUNC_3(struct sctp_bind_addr *VAR_1)
{

 FUNC_2(VAR_1);

 if (VAR_1->malloced) {
  FUNC_1(VAR_1);
  FUNC_0(VAR_0);
 }
}
