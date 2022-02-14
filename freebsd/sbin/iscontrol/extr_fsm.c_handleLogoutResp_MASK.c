
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdu_t ;
struct TYPE_3__ {int flags; int fd; } ;
typedef TYPE_1__ isess_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(isess_t *VAR_3, pdu_t *VAR_4)
{
     if(VAR_3->flags & VAR_1) {
   int VAR_5 = 0;
   if(FUNC_0(VAR_3->fd, VAR_0, &VAR_5)) {
        FUNC_1("ISCSISTOP");
   }
   return 0;
     }
     return VAR_2;
}
