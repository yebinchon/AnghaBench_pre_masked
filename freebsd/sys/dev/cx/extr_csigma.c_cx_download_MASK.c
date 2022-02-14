
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int port_t ;
struct TYPE_3__ {long end; long start; } ;
typedef TYPE_1__ cr_dat_tst_t ;


 int FUNC_0 (int ) ;
 unsigned char VAR_0 ;
 int FUNC_1 (int ) ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned char VAR_3 ;
 unsigned char FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned char) ;

int FUNC_6 (port_t VAR_4, const unsigned char *VAR_5, long VAR_6,
 const cr_dat_tst_t *VAR_7)
{
 unsigned char VAR_8, VAR_9;
 long VAR_10, VAR_11, VAR_12 = (VAR_6 + 7) / 8;
 int VAR_13, VAR_14;

 FUNC_4 (FUNC_2(VAR_4));
 for (VAR_10=VAR_11=0; VAR_11<VAR_12; ++VAR_11) {
  VAR_13 = ((VAR_5[VAR_11] ^ ' ') << 1) | (VAR_5[VAR_11] >> 7 & 1);
  for (VAR_14=0; VAR_14<7; VAR_14+=2, VAR_10+=2) {
   if (VAR_10 >= VAR_6)
    break;
   VAR_8 = 0;
   if (VAR_13 >> VAR_14 & 1) VAR_8 |= VAR_2;
   if (VAR_13 >> VAR_14 & 2) VAR_8 |= VAR_1;
   FUNC_5 (FUNC_1(VAR_4), VAR_8);
   VAR_9 = FUNC_4 (FUNC_3(VAR_4));
   FUNC_5 (FUNC_0(VAR_4), VAR_0);
   FUNC_5 (FUNC_0(VAR_4), 0);
   if (VAR_10 >= VAR_7->end)
    ++VAR_7;
   if (VAR_10 >= VAR_7->start && (VAR_9 & VAR_3))
    return (0);
  }
 }
 return (1);
}
