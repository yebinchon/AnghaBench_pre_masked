
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; } ;
typedef TYPE_1__ thisARG ;
typedef int FIELD ;


 int FUNC_0 (int,unsigned char*,int,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ) ;

__attribute__((used)) static bool
FUNC_2(FIELD *VAR_1, const void *VAR_2)
{
  int VAR_3 = ((const thisARG *)VAR_2)->width;
  unsigned char *VAR_4 = (unsigned char *)FUNC_1(VAR_1, 0);
  bool VAR_5 = (VAR_3 < 0);

  FUNC_0(VAR_5, VAR_4, VAR_3, VAR_0);
  return (VAR_5);
}
