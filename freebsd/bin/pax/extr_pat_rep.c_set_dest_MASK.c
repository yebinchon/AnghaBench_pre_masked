
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int ln_nlen; int ln_name; int nlen; int name; } ;
typedef TYPE_1__ ARCHD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,char*,int) ;

int
FUNC_1(ARCHD *VAR_2, char *VAR_3, int VAR_4)
{
 if (FUNC_0(VAR_2->name, &(VAR_2->nlen), VAR_3, VAR_4) < 0)
  return(-1);






 if ((VAR_2->type != VAR_0) && (VAR_2->type != VAR_1))
  return(0);

 if (FUNC_0(VAR_2->ln_name, &(VAR_2->ln_nlen), VAR_3, VAR_4) < 0)
  return(-1);
 return(0);
}
