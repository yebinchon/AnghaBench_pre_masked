
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int opcode; } ;
struct TYPE_6__ {TYPE_1__ bhs; } ;
struct TYPE_7__ {size_t ds_len; TYPE_2__ ipdu; scalar_t__ ds_addr; } ;
typedef TYPE_3__ pdu_t ;


 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(char *VAR_0, pdu_t *VAR_1)
{
     char *VAR_2;
     int VAR_3;
     size_t VAR_4, VAR_5;

     VAR_4 = VAR_1->ds_len;
     VAR_2 = (char *)VAR_1->ds_addr;
     VAR_3 = VAR_1->ipdu.bhs.opcode;

     FUNC_0("%s: cmd=0x%x len=%d\n", VAR_0, VAR_3, (int)VAR_4);
     while(VAR_4 > 0) {
   FUNC_0("\t%s\n", VAR_2);
   VAR_5 = FUNC_1(VAR_2) + 1;
   VAR_4 -= VAR_5;
   VAR_2 += VAR_5;
     }
}
