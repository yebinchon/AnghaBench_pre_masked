
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int to; int from; } ;
typedef TYPE_1__ substring_t ;


 int VAR_0 ;
 char* FUNC_0 (size_t,int ) ;
 int FUNC_1 (char*,TYPE_1__ const*,size_t) ;

char *FUNC_2(const substring_t *VAR_1)
{
 size_t VAR_2 = VAR_1->to - VAR_1->from + 1;
 char *VAR_3 = FUNC_0(VAR_2, VAR_0);
 if (VAR_3)
  FUNC_1(VAR_3, VAR_1, VAR_2);
 return VAR_3;
}
