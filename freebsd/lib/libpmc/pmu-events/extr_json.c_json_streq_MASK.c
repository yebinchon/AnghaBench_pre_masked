
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int start; } ;
typedef TYPE_1__ jsmntok_t ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 unsigned int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,unsigned int) ;

int FUNC_3(char *VAR_0, jsmntok_t *VAR_1, const char *VAR_2)
{
 unsigned VAR_3 = FUNC_0(VAR_1);
 return VAR_3 == FUNC_1(VAR_2) && !FUNC_2(VAR_0 + VAR_1->start, VAR_2, VAR_3);
}
