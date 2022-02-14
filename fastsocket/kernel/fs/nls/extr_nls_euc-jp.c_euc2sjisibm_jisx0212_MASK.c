
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned short euc; unsigned char* sjis; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline int FUNC_1(unsigned char *VAR_1, const unsigned char VAR_2,
           const unsigned char VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 unsigned short VAR_7;

 VAR_5 = 0;
 VAR_6 = FUNC_0(VAR_0) - 1;
 VAR_7 = (VAR_2 << 8) | VAR_3;

 while (VAR_5 <= VAR_6) {
  VAR_4 = (VAR_5 + VAR_6) / 2;
  if (VAR_7 < VAR_0[VAR_4].euc)
   VAR_6 = VAR_4 - 1;
  else
   VAR_5 = VAR_4 + 1;
  if (VAR_7 == VAR_0[VAR_4].euc) {
   VAR_1[0] = VAR_0[VAR_4].sjis[0];
   VAR_1[1] = VAR_0[VAR_4].sjis[1];
   return 3;
  }
 }
 return 0;
}
