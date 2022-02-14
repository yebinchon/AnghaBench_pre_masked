
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct data_dependence_relation {int dummy; } ;
struct TYPE_2__ {int num_dependence_dependent; } ;


 int FUNC_0 (struct data_dependence_relation*) ;
 int FUNC_1 (struct data_dependence_relation*) ;
 int VAR_0 ;
 int FUNC_2 (struct data_dependence_relation*) ;
 scalar_t__ FUNC_3 (struct data_dependence_relation*) ;
 int FUNC_4 (struct data_dependence_relation*) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (scalar_t__,char*) ;
 scalar_t__ FUNC_6 (struct data_dependence_relation*,int ,int ) ;

__attribute__((used)) static void
FUNC_7 (struct data_dependence_relation *VAR_4)
{

  if (VAR_2 && (VAR_3 & VAR_0))
    FUNC_5 (VAR_2, "(subscript_dependence_tester \n");

  if (FUNC_6 (VAR_4, FUNC_0 (VAR_4), FUNC_1 (VAR_4)))
    VAR_1.num_dependence_dependent++;

  FUNC_4 (VAR_4);
  if (FUNC_3 (VAR_4))
    FUNC_2 (VAR_4);

  if (VAR_2 && (VAR_3 & VAR_0))
    FUNC_5 (VAR_2, ")\n");
}
