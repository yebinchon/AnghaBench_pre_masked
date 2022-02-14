
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attribute {scalar_t__ form; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct attribute*) ;
 int FUNC_1 (struct attribute*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_4 (struct attribute *VAR_7, int VAR_8)
{
  if (VAR_7->form == VAR_4)
    return FUNC_0 (VAR_7);
  else if (VAR_7->form == VAR_5
           || VAR_7->form == VAR_0
           || VAR_7->form == VAR_1
           || VAR_7->form == VAR_2
           || VAR_7->form == VAR_3)
    return FUNC_1 (VAR_7);
  else
    {
      FUNC_2 (&VAR_6, "Attribute value is not a constant (%s)",
                 FUNC_3 (VAR_7->form));
      return VAR_8;
    }
}
