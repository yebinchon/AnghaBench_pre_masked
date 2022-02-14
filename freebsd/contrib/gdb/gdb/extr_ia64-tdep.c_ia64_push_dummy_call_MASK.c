
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct regcache {int dummy; } ;
struct gdbarch {int dummy; } ;
typedef int ULONGEST ;
typedef int CORE_ADDR ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (struct type*) ;
 struct type* FUNC_3 (struct type*) ;
 scalar_t__ FUNC_4 (struct value*) ;
 int FUNC_5 (struct value*) ;
 int VAR_11 ;
 struct type* FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,struct type*,char*,int ) ;
 int FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (int ,int*) ;
 struct type* FUNC_10 (struct type*) ;
 int FUNC_11 (char*,scalar_t__,int) ;
 int FUNC_12 (char*,int ,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct regcache*,int,void*) ;
 int FUNC_15 (struct regcache*,int ,int ) ;
 int FUNC_16 (int,int) ;
 scalar_t__ FUNC_17 (struct type*) ;
 int VAR_12 ;
 int FUNC_18 (char*,int,int ) ;
 int FUNC_19 (int,char*,int) ;
 int FUNC_20 (int ,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_21 (struct gdbarch *VAR_13, CORE_ADDR VAR_14,
        struct regcache *VAR_15, CORE_ADDR VAR_16,
        int VAR_17, struct value **VAR_18, CORE_ADDR VAR_19,
        int VAR_20, CORE_ADDR VAR_21)
{
  int VAR_22;
  struct value *VAR_23;
  struct type *VAR_24;
  int VAR_25, VAR_26;
  int VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
  int VAR_32;
  CORE_ADDR VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;

  VAR_27 = 0;
  VAR_31 = 0;

  for (VAR_22 = 0; VAR_22 < VAR_17; VAR_22++)
    {
      VAR_23 = VAR_18[VAR_22];
      VAR_24 = FUNC_6 (FUNC_5 (VAR_23));
      VAR_25 = FUNC_2 (VAR_24);

      if ((VAR_27 & 1) && FUNC_17 (VAR_24))
 VAR_27++;

      if (FUNC_1 (VAR_24) == VAR_9)
 VAR_31++;

      VAR_27 += (VAR_25 + 7) / 8;
    }


  VAR_28 = (VAR_27 > 8) ? 8 : VAR_27;
  VAR_29 = VAR_27 - VAR_28;


  VAR_34 = FUNC_13 (VAR_2);

  VAR_33 = FUNC_13 (VAR_1);
  VAR_36 = FUNC_16 (VAR_33, VAR_28);
  FUNC_20 (VAR_1, VAR_36);

  VAR_35 = FUNC_13 (VAR_7);
  VAR_35 &= 0xc000000000000000LL;
  VAR_35 |= (VAR_34 & 0xffffffffffffLL);
  FUNC_20 (VAR_7, VAR_35);

  VAR_34 &= 0xc000000000000000LL;
  VAR_34 |= VAR_28;
  FUNC_20 (VAR_2, VAR_34);




  VAR_37 = VAR_19 - VAR_31 * 16;
  VAR_37 &= ~0xfLL;




  VAR_19 = VAR_19 - 16 - (VAR_29 + VAR_31) * 8;
  VAR_19 &= ~0xfLL;





  VAR_30 = 0;
  VAR_32 = VAR_4;
  for (VAR_22 = 0; VAR_22 < VAR_17; VAR_22++)
    {
      struct type *VAR_40;

      VAR_23 = VAR_18[VAR_22];
      VAR_24 = FUNC_6 (FUNC_5 (VAR_23));
      VAR_25 = FUNC_2 (VAR_24);


      if (VAR_25 == 8
          && FUNC_1 (VAR_24) == VAR_10
   && FUNC_1 (FUNC_3 (VAR_24)) == VAR_9)
 {
   char VAR_41[8];

   FUNC_18 (VAR_41, 8,
      FUNC_9 (FUNC_8 (FUNC_4 (VAR_23), 8),
         &VAR_37));
   if (VAR_30 < VAR_28)
     FUNC_19 (FUNC_16 (VAR_33, VAR_30), VAR_41, 8);
   else
     FUNC_19 (VAR_19 + 16 + 8 * (VAR_30 - VAR_28), VAR_41, 8);
   VAR_30++;
   continue;
 }




      if ((VAR_30 & 1) && FUNC_17 (VAR_24))
 VAR_30++;

      VAR_26 = 0;
      while (VAR_25 > 0)
 {
   char VAR_42[8];

   FUNC_12 (VAR_42, 0, 8);
   FUNC_11 (VAR_42, FUNC_4 (VAR_23) + VAR_26, (VAR_25 > 8) ? 8 : VAR_25);

   if (VAR_30 < VAR_28)
     FUNC_19 (FUNC_16 (VAR_33, VAR_30), VAR_42, 8);
   else
     FUNC_19 (VAR_19 + 16 + 8 * (VAR_30 - VAR_28), VAR_42, 8);

   VAR_26 += 8;
   VAR_25 -= 8;
   VAR_30++;
 }


      VAR_40 = FUNC_10 (VAR_24);
      if (VAR_40 != ((void*)0))
 {
   VAR_26 = 0;
   VAR_25 = FUNC_2 (VAR_24);
   while (VAR_25 > 0 && VAR_32 < VAR_3)
     {
       char VAR_43[VAR_8];
       FUNC_7 (FUNC_4 (VAR_23) + VAR_26, VAR_40,
          VAR_43, VAR_11);
       FUNC_14 (VAR_15, VAR_32, (void *)VAR_43);
       VAR_32++;
       VAR_26 += FUNC_2 (VAR_40);
       VAR_25 -= FUNC_2 (VAR_40);
     }
 }
    }


  if (VAR_20)
    {
      FUNC_15 (VAR_15, VAR_6, (ULONGEST)VAR_21);
    }

  VAR_39 = FUNC_0 (VAR_14);

  if (VAR_39 != 0)
    FUNC_20 (VAR_5, VAR_39);

  FUNC_20 (VAR_0, VAR_16);

  FUNC_20 (VAR_12, VAR_19);

  return VAR_19;
}
