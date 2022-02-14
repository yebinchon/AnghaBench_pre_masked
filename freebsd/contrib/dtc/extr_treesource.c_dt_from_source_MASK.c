
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dt_info {int dummy; } ;
struct TYPE_4__ {int f; } ;
struct TYPE_3__ {TYPE_2__* file; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (char*) ;
 struct dt_info* VAR_1 ;
 int FUNC_1 (char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ FUNC_2 () ;

struct dt_info *FUNC_3(const char *VAR_5)
{
 VAR_1 = ((void*)0);
 VAR_2 = 0;

 FUNC_1(VAR_5);
 VAR_3 = VAR_0->f;
 VAR_4.file = VAR_0;

 if (FUNC_2() != 0)
  FUNC_0("Unable to parse input tree\n");

 if (VAR_2)
  FUNC_0("Syntax error parsing input tree\n");

 return VAR_1;
}
