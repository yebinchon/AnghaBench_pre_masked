
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ (* ReadKeyStroke ) (TYPE_1__*,int *) ;} ;
typedef scalar_t__ EFI_STATUS ;
typedef int EFI_INPUT_KEY ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static bool
FUNC_2(void)
{
 EFI_STATUS VAR_2;
 EFI_INPUT_KEY VAR_3;

 VAR_2 = VAR_1->ReadKeyStroke(VAR_1, &VAR_3);
 if (VAR_2 == VAR_0) {
  FUNC_0(&VAR_3);
  return (1);
 }
 return (0);
}
