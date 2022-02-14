
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
typedef TYPE_1__** mixer_tab ;
struct TYPE_3__ {int regno; int polarity; int nbits; int bitoffs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_2(mixer_tab *VAR_0, u_char *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
     u_char VAR_5;
     int VAR_6;

     FUNC_0(FUNC_1("ch_bits dev %d ch %d val %d old 0x%02x "
  "r %d p %d bit %d off %d\n",
  VAR_2, VAR_3, VAR_4, *VAR_1,
  (*VAR_0)[VAR_2][VAR_3].regno, (*VAR_0)[VAR_2][VAR_3].polarity,
  (*VAR_0)[VAR_2][VAR_3].nbits, (*VAR_0)[VAR_2][VAR_3].bitoffs ) );

     if ( (*VAR_0)[VAR_2][VAR_3].polarity == 1)
  VAR_4 = 100 - VAR_4 ;

     VAR_5 = (1 << (*VAR_0)[VAR_2][VAR_3].nbits) - 1;
     VAR_4 = (int) ((VAR_4 * VAR_5) + 50) / 100;
     VAR_6 = (*VAR_0)[VAR_2][VAR_3].bitoffs ;

     *VAR_1 &= ~(VAR_5 << VAR_6);
     *VAR_1 |= (VAR_4 & VAR_5) << VAR_6;
}
