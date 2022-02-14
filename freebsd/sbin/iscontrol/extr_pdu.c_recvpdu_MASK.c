
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdu_t ;
struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ isess_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int *) ;
 scalar_t__ VAR_1 ;

int
FUNC_3(isess_t *VAR_2, pdu_t *VAR_3)
{
     if(FUNC_0(VAR_2->fd, VAR_0, VAR_3)) {
   FUNC_1("recvpdu");
   return -1;
     }


     if(VAR_1)
   FUNC_2("T-", VAR_3);

     return 0;
}
