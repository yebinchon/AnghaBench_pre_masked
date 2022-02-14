
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int end; int start; scalar_t__ binding; int name; } ;
typedef int s64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct symbol *VAR_4, struct symbol *VAR_5)
{
 s64 VAR_6;
 s64 VAR_7;


 VAR_6 = VAR_4->end - VAR_4->start;
 VAR_7 = VAR_5->end - VAR_5->start;
 if ((VAR_7 == 0) && (VAR_6 > 0))
  return VAR_2;
 else if ((VAR_6 == 0) && (VAR_7 > 0))
  return VAR_3;


 VAR_6 = VAR_4->binding == VAR_1;
 VAR_7 = VAR_5->binding == VAR_1;
 if (VAR_7 && !VAR_6)
  return VAR_2;
 if (VAR_6 && !VAR_7)
  return VAR_3;


 VAR_6 = VAR_4->binding == VAR_0;
 VAR_7 = VAR_5->binding == VAR_0;
 if (VAR_6 && !VAR_7)
  return VAR_2;
 if (VAR_7 && !VAR_6)
  return VAR_3;


 VAR_6 = FUNC_0(VAR_4->name);
 VAR_7 = FUNC_0(VAR_5->name);
 if (VAR_7 > VAR_6)
  return VAR_2;
 else if (VAR_6 > VAR_7)
  return VAR_3;


 if (FUNC_1(VAR_4->name) >= FUNC_1(VAR_5->name))
  return VAR_2;
 else
  return VAR_3;
}
