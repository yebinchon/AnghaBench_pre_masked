
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int sctp_assoc_t ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (void*) ;

void
FUNC_1(struct sockaddr *VAR_0)
{
 void *VAR_1;


 VAR_1 = (void *)((caddr_t)VAR_0 - sizeof(sctp_assoc_t));

 FUNC_0(VAR_1);
}
