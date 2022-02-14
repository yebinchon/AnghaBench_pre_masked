
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_2__ {int ** pcpu; } ;
struct gic_v3_softc {TYPE_1__ gic_redists; } ;


 scalar_t__ FUNC_0 (size_t,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int,int ,int ) ;
 size_t VAR_3 ;

__attribute__((used)) static int
FUNC_2(struct gic_v3_softc *VAR_4)
{
 u_int VAR_5;


 for (VAR_5 = 0; VAR_5 <= VAR_3; VAR_5++)
  if (FUNC_0(VAR_5, &VAR_2) != 0)
   VAR_4->gic_redists.pcpu[VAR_5] =
    FUNC_1(sizeof(*VAR_4->gic_redists.pcpu[0]),
        VAR_0, VAR_1);
  else
   VAR_4->gic_redists.pcpu[VAR_5] = ((void*)0);
 return (0);
}
