
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_auth_bytes {int refcnt; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct sctp_auth_bytes*) ;

void FUNC_3(struct sctp_auth_bytes *VAR_1)
{
 if (!VAR_1)
  return;

 if (FUNC_1(&VAR_1->refcnt)) {
  FUNC_2(VAR_1);
  FUNC_0(VAR_0);
 }
}
