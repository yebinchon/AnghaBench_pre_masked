
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union savefpu {int dummy; } savefpu ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (union savefpu*) ;
 int FUNC_1 (union savefpu*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(union savefpu *VAR_3)
{

 if (VAR_1)
  FUNC_2((char *)VAR_3, VAR_2);
 else if (VAR_0)
  FUNC_1(VAR_3);
 else
  FUNC_0(VAR_3);
}
