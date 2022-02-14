
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* target; int uprobes; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1)
{
 int VAR_2 = 0;
 const char *VAR_3;
 if (!VAR_0.target && VAR_1 && *VAR_1 == '/') {
  VAR_0.target = VAR_1;
  VAR_2 = 1;
  VAR_3 = VAR_1 + (FUNC_1(VAR_1) - 3);

  if (FUNC_0(VAR_3, ".ko"))
   VAR_0.uprobes = 1;

 }

 return VAR_2;
}
