
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int * name; } ;
typedef TYPE_1__ symbol_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;
 int * FUNC_5 (char const*) ;

__attribute__((used)) static symbol_t *
FUNC_6(const char *VAR_2)
{
 symbol_t *VAR_3;

 VAR_3 = (symbol_t *)FUNC_1(sizeof(symbol_t));
 if (VAR_3 == ((void*)0)) {
  FUNC_3("Unable to create new symbol");
  FUNC_0(VAR_0);
 }
 FUNC_2(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->name = FUNC_5(VAR_2);
 if (VAR_3->name == ((void*)0))
   FUNC_4("Unable to strdup symbol name", VAR_0);
 VAR_3->type = VAR_1;
 return (VAR_3);
}
