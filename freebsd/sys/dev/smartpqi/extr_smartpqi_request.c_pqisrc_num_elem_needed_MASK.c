
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ max_sg_per_iu; } ;
typedef TYPE_1__ pqisrc_softstate_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static uint32_t
FUNC_3(pqisrc_softstate_t *VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4;
 uint32_t VAR_5 = 1;
 FUNC_0(" IN ");
 FUNC_1("SGL_Count :%d",VAR_3);






 if(VAR_3 > VAR_2->max_sg_per_iu || VAR_3 <= VAR_0)
  return VAR_5;



 VAR_4 = VAR_3 - VAR_0;
 VAR_5 += FUNC_2(VAR_4, VAR_1);
 FUNC_0(" OUT ");
 return VAR_5;
}
