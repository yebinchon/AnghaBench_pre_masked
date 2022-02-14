
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vmci_id ;
struct vmci_handle {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 struct vmci_handle FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct vmci_handle) ;
 int FUNC_5 (int *) ;

vmci_id
FUNC_6(vmci_id VAR_5)
{
 vmci_id VAR_6;
 vmci_id VAR_7;
 bool VAR_8;

 VAR_7 = VAR_2;
 VAR_8 = 0;





 FUNC_0(VAR_7 > VAR_1);

 do {
  struct vmci_handle VAR_9;

  FUNC_3(&VAR_3);
  VAR_6 = VAR_2;
  VAR_9 = FUNC_2(VAR_5, VAR_6);
  VAR_2++;
  if (FUNC_1(VAR_2 == VAR_0)) {

   VAR_2 = VAR_1 + 1;
  }
  FUNC_5(&VAR_3);
  VAR_8 = !FUNC_4(VAR_4,
      VAR_9);
 } while (!VAR_8 && VAR_2 != VAR_7);

 if (FUNC_1(!VAR_8))
  return (VAR_0);
 else
  return (VAR_6);
}
