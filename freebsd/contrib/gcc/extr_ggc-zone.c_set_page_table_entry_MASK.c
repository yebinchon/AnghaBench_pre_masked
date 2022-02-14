
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int *** page_table ;
typedef int page_entry ;
struct TYPE_4__ {int *** lookup; } ;
struct TYPE_3__ {size_t high_bits; int *** table; int *** next; } ;


 TYPE_2__ VAR_0 ;
 size_t FUNC_0 (void*) ;
 size_t FUNC_1 (void*) ;
 int VAR_1 ;
 void* FUNC_2 (int,int) ;

__attribute__((used)) static void
FUNC_3 (void *VAR_2, page_entry *VAR_3)
{
  page_entry ***VAR_4;
  size_t VAR_5, VAR_6;


  VAR_4 = &VAR_0.lookup[0];
  VAR_5 = FUNC_0 (VAR_2);
  VAR_6 = FUNC_1 (VAR_2);

  if (VAR_4[VAR_5] == ((void*)0))
    VAR_4[VAR_5] = FUNC_2 (VAR_1, sizeof (page_entry *));

  VAR_4[VAR_5][VAR_6] = VAR_3;
}
