
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ml_offset; int ml_size; } ;
typedef TYPE_1__ mlist_t ;


 int FUNC_0 (char*,char*,char*) ;
 char* FUNC_1 (char*,int*) ;

__attribute__((used)) static char *
FUNC_2(char *VAR_0, mlist_t *VAR_1)
{
 int VAR_2, VAR_3;

 if (*VAR_0 == ',')
  VAR_0++;
 VAR_0 = FUNC_1(VAR_0, &VAR_2);
 if (*VAR_0++ != ',')
  FUNC_0("offsize/2", ",", VAR_0 - 1);
 VAR_0 = FUNC_1(VAR_0, &VAR_3);
 if (*VAR_0++ != ';')
  FUNC_0("offsize/3", ";", VAR_0 - 1);
 VAR_1->ml_offset = VAR_2;
 VAR_1->ml_size = VAR_3;
 return (VAR_0);
}
