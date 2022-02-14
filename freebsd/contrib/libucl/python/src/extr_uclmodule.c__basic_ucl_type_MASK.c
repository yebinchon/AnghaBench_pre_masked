
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int type; } ;
typedef TYPE_1__ ucl_object_t ;
typedef int PyObject ;


 int * FUNC_0 (int ) ;
 int * FUNC_1 (char*,long long) ;
 int VAR_0 ;






 int FUNC_2 (TYPE_1__ const*) ;
 long long FUNC_3 (TYPE_1__ const*) ;
 scalar_t__ FUNC_4 (TYPE_1__ const*) ;
 long long FUNC_5 (TYPE_1__ const*) ;

__attribute__((used)) static PyObject *
FUNC_6 (ucl_object_t const *VAR_1)
{
 switch (VAR_1->type) {
 case 131:
  return FUNC_1 ("L", (long long)FUNC_4 (VAR_1));
 case 132:
  return FUNC_1 ("d", FUNC_3 (VAR_1));
 case 129:
  return FUNC_1 ("s", FUNC_5 (VAR_1));
 case 133:
  return FUNC_0 (FUNC_2 (VAR_1));
 case 128:
  return FUNC_1 ("d", FUNC_3 (VAR_1));
 case 130:
  VAR_0;
 }
 return ((void*)0);
}
