
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int isc_uint32_t ;
struct TYPE_6__ {int state; } ;
typedef TYPE_1__ isc_lfsr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;

isc_uint32_t
FUNC_3(isc_lfsr_t *VAR_0, isc_lfsr_t *VAR_1)
{
 isc_uint32_t VAR_2, VAR_3;
 isc_uint32_t VAR_4, VAR_5;

 FUNC_0(FUNC_1(VAR_0));
 FUNC_0(FUNC_1(VAR_1));

 VAR_4 = VAR_0->state & 0x01;
 VAR_5 = VAR_1->state & 0x01;


 VAR_2 = FUNC_2(VAR_0, VAR_5);
 VAR_3 = FUNC_2(VAR_1, VAR_4);

 return (VAR_2 ^ VAR_3);
}
