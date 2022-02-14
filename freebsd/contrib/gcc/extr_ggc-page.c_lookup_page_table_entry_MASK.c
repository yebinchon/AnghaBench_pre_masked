
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
 size_t FUNC_0 (void const*) ;
 size_t FUNC_1 (void const*) ;

__attribute__((used)) static inline page_entry *
FUNC_2 (const void *VAR_1)
{
  page_entry ***VAR_2;
  size_t VAR_3, VAR_4;


  VAR_2 = &VAR_0.lookup[0];
  VAR_3 = FUNC_0 (VAR_1);
  VAR_4 = FUNC_1 (VAR_1);

  return VAR_2[VAR_3][VAR_4];
}
