
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct __mf_cache {uintptr_t low; uintptr_t high; } ;
struct TYPE_3__ {uintptr_t low; uintptr_t high; scalar_t__ write_count; scalar_t__ read_count; } ;
typedef TYPE_1__ __mf_object_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 uintptr_t VAR_0 ;
 uintptr_t VAR_1 ;
 unsigned int VAR_2 ;
 struct __mf_cache* VAR_3 ;

__attribute__((used)) static void
FUNC_1 (__mf_object_t *VAR_4)
{



  if (FUNC_0 (VAR_4->read_count + VAR_4->write_count))
    {


      uintptr_t VAR_5 = VAR_4->low;
      uintptr_t VAR_6 = VAR_4->high;
      struct __mf_cache *VAR_7 = & VAR_3 [0];
      unsigned VAR_8;
      for (VAR_8 = 0; VAR_8 <= VAR_2; VAR_8++, VAR_7++)
        {




          if (VAR_7->low == VAR_5 || VAR_7->high == VAR_6)
            {
              VAR_7->low = VAR_0;
              VAR_7->high = VAR_1;
            }
        }
    }
}
