
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ad1843 {int (* read ) (int ,int ) ;int chip; } ;
struct ad1843_bitfield {int lo_bit; int nbits; int reg; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_ad1843 *VAR_0,
       const struct ad1843_bitfield *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_0->read(VAR_0->chip, VAR_1->reg);
 return VAR_2 >> VAR_1->lo_bit & ((1 << VAR_1->nbits) - 1);
}
