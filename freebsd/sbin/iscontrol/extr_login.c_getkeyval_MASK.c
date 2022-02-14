
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ds_len; scalar_t__ ds_addr; } ;
typedef TYPE_1__ pdu_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

__attribute__((used)) static char *
FUNC_3(char *VAR_0, pdu_t *VAR_1)
{
    char *VAR_2;
    int VAR_3, VAR_4, VAR_5;

    FUNC_0(3);

    VAR_4 = VAR_1->ds_len;
    VAR_2 = (char *)VAR_1->ds_addr;
    VAR_3 = FUNC_1(VAR_0);
    while(VAR_4 > VAR_3) {
  if(FUNC_2(VAR_0, VAR_2, VAR_3) == 0)
       return VAR_2+VAR_3;
  VAR_5 = FUNC_1(VAR_2) + 1;
  VAR_4 -= VAR_5;
  VAR_2 += VAR_5;
    }
    return 0;
}
