
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int16_t ;
struct TYPE_2__ {scalar_t__ et_type; int * et_name; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int,char*,char*) ;
 scalar_t__ FUNC_1 (int *,char*) ;

__attribute__((used)) static u_int16_t
FUNC_2(char *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].et_name != ((void*)0); ++VAR_2)
  if (FUNC_1(VAR_0[VAR_2].et_name, VAR_1) == 0)
   return ((u_int16_t)VAR_0[VAR_2].et_type);

 FUNC_0(1, "invalid element type `%s'", VAR_1);

}
