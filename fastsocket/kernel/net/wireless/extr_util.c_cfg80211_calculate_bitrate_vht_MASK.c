
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rate_info {int mcs; int flags; int nss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static u32 FUNC_1(struct rate_info *VAR_5)
{
 static const u32 VAR_6[4][10] = {
  { 6500000,
     13000000,
     19500000,
     26000000,
     39000000,
     52000000,
     58500000,
     65000000,
     78000000,
     0,
  },
  { 13500000,
     27000000,
     40500000,
     54000000,
     81000000,
    108000000,
    121500000,
    135000000,
    162000000,
    180000000,
  },
  { 29300000,
     58500000,
     87800000,
    117000000,
    175500000,
    234000000,
    263300000,
    292500000,
    351000000,
    390000000,
  },
  { 58500000,
    117000000,
    175500000,
    234000000,
    351000000,
    468000000,
    526500000,
    585000000,
    702000000,
    780000000,
  },
 };
 u32 VAR_7;
 int VAR_8;

 if (FUNC_0(VAR_5->mcs > 9))
  return 0;

 VAR_8 = VAR_5->flags & (VAR_0 |
        VAR_2) ? 3 :
    VAR_5->flags & VAR_3 ? 2 :
    VAR_5->flags & VAR_1 ? 1 : 0;

 VAR_7 = VAR_6[VAR_8][VAR_5->mcs];
 VAR_7 *= VAR_5->nss;

 if (VAR_5->flags & VAR_4)
  VAR_7 = (VAR_7 / 9) * 10;


 return (VAR_7 + 50000) / 100000;
}
