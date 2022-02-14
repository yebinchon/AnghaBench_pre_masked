
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mode_class { ____Placeholder_mode_class } mode_class ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int * VAR_3 ;

__attribute__((used)) static enum mode_class
FUNC_1 (enum mode_class VAR_4)
{
  switch (VAR_4)
    {
    case 128: return VAR_1;
    case 129: return VAR_0;
    default:
      FUNC_0 ("no complex class for class %s", VAR_3[VAR_4]);
      return VAR_2;
    }
}
