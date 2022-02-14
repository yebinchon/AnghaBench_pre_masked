
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int filename; } ;
struct TYPE_3__ {TYPE_2__* next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(void)
{
 while (VAR_0->next != ((void*)0)) {
  FUNC_0((VAR_1, "generate on %s\n", VAR_0->next->filename));
  FUNC_1(VAR_0->next);
 }
}
