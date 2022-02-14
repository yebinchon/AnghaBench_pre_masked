
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rate_info {int flags; int legacy; int mcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct rate_info*) ;
 int FUNC_2 (struct rate_info*) ;

u32 FUNC_3(struct rate_info *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 if (!(VAR_5->flags & VAR_2) &&
     !(VAR_5->flags & VAR_4))
  return VAR_5->legacy;
 if (VAR_5->flags & VAR_1)
  return FUNC_1(VAR_5);
 if (VAR_5->flags & VAR_4)
  return FUNC_2(VAR_5);


 if (FUNC_0(VAR_5->mcs >= 32))
  return 0;

 VAR_6 = VAR_5->mcs & 7;
 VAR_7 = (VAR_5->mcs >> 3) + 1;

 VAR_8 = (VAR_5->flags & VAR_0) ?
   13500000 : 6500000;

 if (VAR_6 < 4)
  VAR_8 *= (VAR_6 + 1);
 else if (VAR_6 == 4)
  VAR_8 *= (VAR_6 + 2);
 else
  VAR_8 *= (VAR_6 + 3);

 VAR_8 *= VAR_7;

 if (VAR_5->flags & VAR_3)
  VAR_8 = (VAR_8 / 9) * 10;


 return (VAR_8 + 50000) / 100000;
}
