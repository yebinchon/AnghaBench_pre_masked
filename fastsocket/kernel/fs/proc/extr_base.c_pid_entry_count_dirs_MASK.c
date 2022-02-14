
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid_entry {int mode; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static unsigned int FUNC_1(const struct pid_entry *VAR_0,
 unsigned int VAR_1)
{
 unsigned int VAR_2;
 unsigned int VAR_3;

 VAR_3 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2) {
  if (FUNC_0(VAR_0[VAR_2].mode))
   ++VAR_3;
 }

 return VAR_3;
}
