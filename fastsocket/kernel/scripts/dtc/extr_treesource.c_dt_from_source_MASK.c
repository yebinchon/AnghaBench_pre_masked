
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct boot_info {int dummy; } ;
struct TYPE_3__ {int file; } ;


 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (char const*,int *) ;
 TYPE_1__* VAR_0 ;
 struct boot_info* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 () ;

struct boot_info *FUNC_3(const char *VAR_4)
{
 VAR_1 = ((void*)0);
 VAR_2 = 0;

 VAR_0 = FUNC_1(VAR_4, ((void*)0));
 VAR_3 = VAR_0->file;

 if (FUNC_2() != 0)
  FUNC_0("Unable to parse input tree\n");

 if (VAR_2)
  FUNC_0("Syntax error parsing input tree\n");

 return VAR_1;
}
