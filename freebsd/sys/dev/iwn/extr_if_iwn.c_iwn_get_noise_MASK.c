
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwn_rx_general_stats {int * noise; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(const struct iwn_rx_general_stats *VAR_0)
{
 int VAR_1, VAR_2, VAR_3, VAR_4;

 VAR_2 = VAR_3 = 0;
 for (VAR_1 = 0; VAR_1 < 3; VAR_1++) {
  if ((VAR_4 = FUNC_0(VAR_0->noise[VAR_1]) & 0xff) == 0)
   continue;
  VAR_2 += VAR_4;
  VAR_3++;
 }

 return (VAR_3 == 0) ? -127 : (VAR_2 / VAR_3) - 107;
}
