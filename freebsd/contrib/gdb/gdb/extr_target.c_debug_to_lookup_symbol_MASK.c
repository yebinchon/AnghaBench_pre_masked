
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* to_lookup_symbol ) (char*,int *) ;} ;
typedef int CORE_ADDR ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (char*,int *) ;

__attribute__((used)) static int
FUNC_2 (char *VAR_2, CORE_ADDR *VAR_3)
{
  int VAR_4;

  VAR_4 = VAR_0.to_lookup_symbol (VAR_2, VAR_3);

  FUNC_0 (VAR_1, "target_lookup_symbol (%s, xxx)\n", VAR_2);

  return VAR_4;
}
