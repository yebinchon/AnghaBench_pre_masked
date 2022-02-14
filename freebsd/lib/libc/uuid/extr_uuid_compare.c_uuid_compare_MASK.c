
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int node; } ;
typedef TYPE_1__ uuid_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (TYPE_1__ const*,TYPE_1__ const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__ const*,int *) ;
 int VAR_5 ;

int32_t
FUNC_3(const uuid_t *VAR_6, const uuid_t *VAR_7, uint32_t *VAR_8)
{
 int VAR_9;

 if (VAR_8 != ((void*)0))
  *VAR_8 = VAR_5;


 if (VAR_6 == VAR_7)
  return (0);
 if (VAR_6 == ((void*)0))
  return ((FUNC_2(VAR_7, ((void*)0))) ? 0 : -1);
 if (VAR_7 == ((void*)0))
  return ((FUNC_2(VAR_6, ((void*)0))) ? 0 : 1);


 FUNC_0(VAR_6, VAR_7, VAR_3);
 FUNC_0(VAR_6, VAR_7, VAR_4);
 FUNC_0(VAR_6, VAR_7, VAR_2);
 FUNC_0(VAR_6, VAR_7, VAR_0);
 FUNC_0(VAR_6, VAR_7, VAR_1);

 VAR_9 = FUNC_1(VAR_6->node, VAR_7->node, sizeof(VAR_6->node));
 if (VAR_9)
  return ((VAR_9 < 0) ? -1 : 1);
 return (0);
}
