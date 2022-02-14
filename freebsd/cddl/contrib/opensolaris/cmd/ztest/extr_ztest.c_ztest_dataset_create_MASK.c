
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int zo_verbose; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ,int ,int *) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(char *VAR_6)
{
 uint64_t VAR_7 = FUNC_3(100);
 int VAR_8 = FUNC_0(VAR_6, VAR_1, 0,
     VAR_4, ((void*)0));

 if (VAR_8 || VAR_7 < 80)
  return (VAR_8);

 if (VAR_5.zo_verbose >= 6)
  (void) FUNC_1("Setting dataset %s to sync always\n", VAR_6);
 return (FUNC_2(VAR_6, VAR_2,
     VAR_3, VAR_0));
}
