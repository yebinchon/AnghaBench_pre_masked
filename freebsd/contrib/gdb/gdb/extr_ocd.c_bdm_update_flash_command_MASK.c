
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cleanup {int dummy; } ;
struct TYPE_2__ {void (* to_store_registers ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 void FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (int ,int*,int*) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_4 (char *VAR_8, int VAR_9)
{
  int VAR_10, VAR_11;
  struct cleanup *VAR_12;
  void (*VAR_13) (int);

  if (!VAR_6)
    FUNC_0 ("Not connected to OCD device.");

  if (!VAR_8)
    FUNC_0 ("Must specify file containing new OCD code.");



  FUNC_3 (VAR_0, &VAR_10, &VAR_11);

  FUNC_3 (VAR_1, &VAR_10, &VAR_11);

  VAR_7 = VAR_3;
  VAR_13 = VAR_5.to_store_registers;
  VAR_5.to_store_registers = FUNC_2;

  FUNC_1 (VAR_8, VAR_9);

  VAR_5.to_store_registers = VAR_13;
  VAR_7 = VAR_4;

  FUNC_3 (VAR_2, &VAR_10, &VAR_11);


}
