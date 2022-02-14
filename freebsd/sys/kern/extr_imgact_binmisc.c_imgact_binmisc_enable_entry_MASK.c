
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ibe_flags; } ;
typedef TYPE_1__ imgact_binmisc_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(char *VAR_3)
{
 imgact_binmisc_entry_t *VAR_4;

 FUNC_1(&VAR_2);
 if ((VAR_4 = FUNC_0(VAR_3)) == ((void*)0)) {
  FUNC_2(&VAR_2);
  return (VAR_0);
 }

 VAR_4->ibe_flags |= VAR_1;
 FUNC_2(&VAR_2);

 return (0);
}
