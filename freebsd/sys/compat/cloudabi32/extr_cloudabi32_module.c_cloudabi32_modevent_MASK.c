
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int module_t ;
struct TYPE_5__ {int sysvec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(module_t VAR_6, int VAR_7, void *VAR_8)
{

 switch (VAR_7) {
 case 129:
  FUNC_1(VAR_5.sysvec,
      VAR_4,
      VAR_3);
  if (FUNC_3(&VAR_5) < 0) {
   FUNC_5("Failed to add CloudABI ELF brand handler\n");
   return (VAR_1);
  }
  return (0);
 case 128:
  if (FUNC_2(&VAR_5))
   return (VAR_0);
  if (FUNC_4(&VAR_5) < 0) {
   FUNC_5("Failed to remove CloudABI ELF brand handler\n");
   return (VAR_1);
  }
  FUNC_0(VAR_5.sysvec);
  return (0);
 default:
  return (VAR_2);
 }
}
