
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct regcache {int dummy; } ;
struct gdbarch_tdep {int dummy; } ;
struct gdbarch {int dummy; } ;
typedef enum type_code { ____Placeholder_type_code } type_code ;
typedef int LONGEST ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct type*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct type*) ;
 scalar_t__ FUNC_2 (struct value*) ;
 struct type* FUNC_3 (struct value*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 struct type* FUNC_6 (struct type*) ;
 int VAR_14 ;
 int FUNC_7 (char*,int) ;
 scalar_t__ FUNC_8 (int,struct type*) ;
 int FUNC_9 (int ,char*,int,int ) ;
 int FUNC_10 (int ,char*,...) ;
 int VAR_15 ;
 struct gdbarch_tdep* FUNC_11 (struct gdbarch*) ;
 scalar_t__ VAR_16 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct gdbarch_tdep*) ;
 int FUNC_14 (struct gdbarch_tdep*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int,int) ;
 int FUNC_17 (struct regcache*,int ,int) ;
 int FUNC_18 (int,char*,int) ;
 int FUNC_19 (int,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_20 (struct gdbarch *VAR_17, CORE_ADDR VAR_18,
        struct regcache *VAR_19, CORE_ADDR VAR_20,
        int VAR_21, struct value **VAR_22, CORE_ADDR VAR_23,
        int VAR_24, CORE_ADDR VAR_25)
{
  int VAR_26;
  int VAR_27;
  int VAR_28;
  int VAR_29 = 0;
  int VAR_30 = 0;
  struct gdbarch_tdep *VAR_31 = FUNC_11 (VAR_17);



  FUNC_17 (VAR_19, VAR_6, VAR_18);



  FUNC_17 (VAR_19, VAR_4, VAR_20);







  VAR_23 = FUNC_4 (VAR_23, 16);
  VAR_25 = FUNC_4 (VAR_25, 16);


  for (VAR_28 = 0; VAR_28 < VAR_21; VAR_28++)
    VAR_29 += FUNC_5 (FUNC_1 (FUNC_3 (VAR_22[VAR_28])),
       FUNC_14 (VAR_31));
  VAR_23 -= FUNC_5 (VAR_29, 16);

  if (VAR_16)
    FUNC_10 (VAR_15,
   "mips_n32n64_push_dummy_call: sp=0x%s allocated %ld\n",
   FUNC_15 (VAR_23), (long) FUNC_5 (VAR_29, 16));


  VAR_26 = VAR_0;
  VAR_27 = FUNC_12 (VAR_14);


  if (VAR_24)
    {
      if (VAR_16)
 FUNC_10 (VAR_15,
       "mips_n32n64_push_dummy_call: struct_return reg=%d 0x%s\n",
       VAR_26, FUNC_15 (VAR_25));
      FUNC_19 (VAR_26++, VAR_25);
    }




  for (VAR_28 = 0; VAR_28 < VAR_21; VAR_28++)
    {
      char *VAR_32;
      struct value *VAR_33 = VAR_22[VAR_28];
      struct type *VAR_34 = FUNC_6 (FUNC_3 (VAR_33));
      int VAR_35 = FUNC_1 (VAR_34);
      enum type_code VAR_36 = FUNC_0 (VAR_34);

      if (VAR_16)
 FUNC_10 (VAR_15,
       "mips_n32n64_push_dummy_call: %d len=%d type=%d",
       VAR_28 + 1, VAR_35, (int) VAR_36);

      VAR_32 = (char *) FUNC_2 (VAR_33);

      if (FUNC_8 (VAR_36, VAR_34)
   && VAR_27 <= VAR_3)
 {




   LONGEST VAR_37 = FUNC_7 (VAR_32, VAR_35);
   if (VAR_16)
     FUNC_10 (VAR_15, " - fpreg=%d val=%s",
    VAR_27, FUNC_16 (VAR_37, VAR_35));
   FUNC_19 (VAR_27++, VAR_37);

   if (VAR_16)
     FUNC_10 (VAR_15, " - reg=%d val=%s",
    VAR_26, FUNC_16 (VAR_37, VAR_35));
   FUNC_19 (VAR_26, VAR_37);
   VAR_26 += 1;
 }
      else
 {
   int VAR_38 = ((VAR_35 > FUNC_13 (VAR_31))
      && (VAR_35 % FUNC_13 (VAR_31) != 0));


   while (VAR_35 > 0)
     {

       int VAR_39 = 0;
       int VAR_40 = (VAR_35 < FUNC_13 (VAR_31)
     ? VAR_35 : FUNC_13 (VAR_31));

       if (VAR_16)
  FUNC_10 (VAR_15, " -- partial=%d",
        VAR_40);


       if (VAR_26 > VAR_2
    || VAR_38
    || FUNC_8 (VAR_36, VAR_34))
  {


    int VAR_41 = 0;
    CORE_ADDR VAR_42;
    VAR_39 = 1;
    if (VAR_7 == VAR_1)
      {
        if (FUNC_14 (VAR_31) == 8
     && (VAR_36 == VAR_10
         || VAR_36 == VAR_11
         || VAR_36 == VAR_9) && VAR_35 <= 4)
   VAR_41 = FUNC_14 (VAR_31) - VAR_35;
      }

    if (VAR_16)
      {
        FUNC_10 (VAR_15, " - stack_offset=0x%s",
       FUNC_15 (VAR_30));
        FUNC_10 (VAR_15, " longword_offset=0x%s",
       FUNC_15 (VAR_41));
      }

    VAR_42 = VAR_23 + VAR_30 + VAR_41;

    if (VAR_16)
      {
        int VAR_43;
        FUNC_10 (VAR_15, " @0x%s ",
       FUNC_15 (VAR_42));
        for (VAR_43 = 0; VAR_43 < VAR_40; VAR_43++)
   {
     FUNC_10 (VAR_15, "%02x",
           VAR_32[VAR_43] & 0xff);
   }
      }
    FUNC_18 (VAR_42, VAR_32, VAR_40);
  }






       if (VAR_26 <= VAR_2
    && !FUNC_8 (VAR_36, VAR_34))
  {
    LONGEST VAR_44 =
      FUNC_7 (VAR_32, VAR_40);
    if (VAR_7 == VAR_1
        && VAR_40 < FUNC_13 (VAR_31)
        && (VAR_36 == VAR_12 ||
     VAR_36 == VAR_13))
      VAR_44 <<= ((FUNC_13 (VAR_31) - VAR_40) *
    VAR_8);

    if (VAR_16)
      FUNC_9 (VAR_15, " - reg=%d val=%s",
          VAR_26,
          FUNC_16 (VAR_44,
         FUNC_13 (VAR_31)));
    FUNC_19 (VAR_26, VAR_44);
    VAR_26++;
  }

       VAR_35 -= VAR_40;
       VAR_32 += VAR_40;







       if (VAR_39)
  VAR_30 += FUNC_5 (VAR_40,
       FUNC_14 (VAR_31));
     }
 }
      if (VAR_16)
 FUNC_10 (VAR_15, "\n");
    }

  FUNC_17 (VAR_19, VAR_5, VAR_23);


  return VAR_23;
}
