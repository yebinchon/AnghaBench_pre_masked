
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int isc_uint32_t ;
struct TYPE_4__ {int state; } ;
typedef TYPE_1__ isc_lfsr_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline isc_uint32_t
FUNC_1(isc_lfsr_t *VAR_0, unsigned int VAR_1)
{
 while (VAR_1--)
  (void)FUNC_0(VAR_0);

 (void)FUNC_0(VAR_0);

 return (VAR_0->state);
}
