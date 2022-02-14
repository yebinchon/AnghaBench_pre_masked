
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ print_on_err; scalar_t__ error; } ;
typedef TYPE_1__ libbe_handle_t ;
typedef scalar_t__ be_error_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 char* FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;

int
FUNC_2(libbe_handle_t *VAR_2, be_error_t VAR_3)
{

 VAR_2->error = VAR_3;
 if (VAR_2->print_on_err && (VAR_3 != VAR_0))
  FUNC_0(VAR_1, "%s\n", FUNC_1(VAR_2));

 return (VAR_3);
}
