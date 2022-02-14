
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* name; uintptr_t addr; size_t size; } ;
typedef TYPE_1__ syment_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void
FUNC_3(char *VAR_4, uintptr_t VAR_5, size_t VAR_6)
{
 syment_t *VAR_7;

 if (VAR_1 >= VAR_0) {
  VAR_0 += 10000;
  VAR_3 = FUNC_2(VAR_3, VAR_0 * sizeof (*VAR_7));
  if (VAR_3 == ((void*)0)) {
   (void) FUNC_1(VAR_2, "can't allocate symbol table\n");
   FUNC_0(3);
  }
 }
 VAR_7 = &VAR_3[VAR_1++];

 VAR_7->name = VAR_4;
 VAR_7->addr = VAR_5;
 VAR_7->size = VAR_6;
}
