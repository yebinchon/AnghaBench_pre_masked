
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int symbol_t ;
typedef int stored_ptr ;
typedef int new_symbol ;
struct TYPE_10__ {int (* get ) (TYPE_2__*,TYPE_1__*,TYPE_1__*,int ) ;scalar_t__ (* put ) (TYPE_2__*,TYPE_1__*,TYPE_1__*,int ) ;} ;
struct TYPE_9__ {int size; int ** data; } ;
typedef TYPE_1__ DBT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **,int **,int) ;
 int FUNC_3 (char*) ;
 int ** FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,TYPE_1__*,TYPE_1__*,int ) ;
 int * FUNC_8 (char const*) ;
 TYPE_2__* VAR_1 ;

symbol_t *
FUNC_9(const char *VAR_2)
{
 symbol_t *VAR_3;
 DBT VAR_4;
 DBT VAR_5;
 int VAR_6;

 VAR_4.data = FUNC_4(VAR_2);
 VAR_4.size = FUNC_5(VAR_2);

 if ((VAR_6 = VAR_1->get(VAR_1, &VAR_4, &VAR_5, 0)) != 0) {
  if (VAR_6 == -1) {
   FUNC_3("Symbol table get operation failed");
   FUNC_0(VAR_0);

  } else if (VAR_6 == 1) {

   symbol_t *VAR_7;

   VAR_7 = FUNC_8(VAR_2);
   VAR_5.data = &VAR_7;
   VAR_5.size = sizeof(VAR_7);
   if (VAR_1->put(VAR_1, &VAR_4, &VAR_5,
                0) !=0) {
    FUNC_3("Symtable put failed");
    FUNC_0(VAR_0);
   }
   FUNC_1(VAR_4.data);
   return (VAR_7);
  } else {
   FUNC_3("Unexpected return value from db get routine");
   FUNC_0(VAR_0);

  }
 }
 FUNC_2(&VAR_3, VAR_5.data, sizeof(VAR_3));
 FUNC_1(VAR_4.data);
 return (VAR_3);
}
