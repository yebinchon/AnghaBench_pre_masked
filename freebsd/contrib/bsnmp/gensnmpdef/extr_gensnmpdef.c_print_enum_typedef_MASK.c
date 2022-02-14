
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int integer32; } ;
struct TYPE_8__ {TYPE_1__ value; } ;
struct TYPE_9__ {int name; TYPE_2__ value; } ;
typedef int SmiType ;
typedef TYPE_3__ SmiNamedNumber ;


 int FUNC_0 (char*,int ,int ) ;
 TYPE_3__* FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_3(SmiType *VAR_0)
{
 SmiNamedNumber *VAR_1;

 for (VAR_1 = FUNC_1(VAR_0); VAR_1 != ((void*)0);
     VAR_1 = FUNC_2(VAR_1)) {
  FUNC_0("\t%ld %s\n" , VAR_1->value.value.integer32, VAR_1->name);
 }
}
