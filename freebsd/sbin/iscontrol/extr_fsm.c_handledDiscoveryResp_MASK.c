
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct TYPE_3__ {int ds_len; scalar_t__* ds_addr; } ;
typedef TYPE_1__ pdu_t ;
typedef int isess_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,scalar_t__*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(isess_t *VAR_0, pdu_t *VAR_1)
{
     u_char *VAR_2;
     int VAR_3, VAR_4;

     FUNC_0(3);

     VAR_3 = VAR_1->ds_len;
     VAR_2 = VAR_1->ds_addr;
     while(VAR_3 > 0) {
   if(*VAR_2 != 0)
        FUNC_1("%s\n", VAR_2);
   VAR_4 = FUNC_2((char *)VAR_2) + 1;
   VAR_3 -= VAR_4;
   VAR_2 += VAR_4;
     }
     return 0;
}
