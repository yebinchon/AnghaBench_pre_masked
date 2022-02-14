
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lithium_t ;
struct TYPE_3__ {int nbits; int lo_bit; int reg; } ;
typedef TYPE_1__ ad1843_bitfield_t ;


 int FUNC_0 (char*,int *,int ,int,int,int,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int FUNC_3(lithium_t *VAR_0,
        const ad1843_bitfield_t *VAR_1,
        int VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0, VAR_1->reg);
 int VAR_4 = ((1 << VAR_1->nbits) - 1) << VAR_1->lo_bit;
 int VAR_5 = (VAR_3 & VAR_4) >> VAR_1->lo_bit;
 int VAR_6 = (VAR_2 << VAR_1->lo_bit) & VAR_4;
 VAR_3 = (VAR_3 & ~VAR_4) | VAR_6;
 (void) FUNC_2(VAR_0, VAR_1->reg, VAR_3);

 FUNC_0("ad1843_write_bits(lith=0x%p, field->{%d %d %d}, val=0x%x) "
       "returns 0x%x\n",
       VAR_0, VAR_1->reg, VAR_1->lo_bit, VAR_1->nbits, VAR_2,
       VAR_5);

 return VAR_5;
}
