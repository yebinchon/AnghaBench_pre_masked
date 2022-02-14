
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct es_info {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct es_info*) ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct es_info*,scalar_t__) ;
 int FUNC_2 (struct es_info*,scalar_t__,unsigned int) ;
 unsigned int FUNC_3 (struct es_info*) ;
 int FUNC_4 (struct es_info*,int ,unsigned int,int) ;

__attribute__((used)) static unsigned int
FUNC_5(struct es_info *VAR_10, unsigned int VAR_11, int VAR_12)
{
   unsigned int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

 FUNC_0(VAR_10);

   if (VAR_11 > 48000)
  VAR_11 = 48000;
   if (VAR_11 < 4000)
  VAR_11 = 4000;
   VAR_13 = ((VAR_11 << 15) + 1500) / 3000;
   VAR_15 = (VAR_13 * 3000) >> 15;

 VAR_16 = (VAR_12 == VAR_5) ? VAR_6 : VAR_7;
 VAR_17 = (VAR_12 == VAR_5) ? VAR_1 : VAR_0;
 VAR_14 = (FUNC_3(VAR_10) & (VAR_3 | VAR_0 |
     VAR_1 | VAR_2));
 FUNC_4(VAR_10, VAR_4, VAR_14, 4);
 FUNC_2(VAR_10, VAR_16 + VAR_8,
     (FUNC_1(VAR_10, VAR_16 + VAR_8) & 0x00ff) |
     ((VAR_13 >> 5) & 0xfc00));
 FUNC_2(VAR_10, VAR_16 + VAR_9, VAR_13 & 0x7fff);
 VAR_14 = (FUNC_3(VAR_10) &
     (VAR_3 | VAR_17 | VAR_2));
 FUNC_4(VAR_10, VAR_4, VAR_14, 4);
   return (VAR_15);
}
