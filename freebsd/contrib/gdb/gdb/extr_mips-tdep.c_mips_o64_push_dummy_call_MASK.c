
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
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct type*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct type*) ;
 scalar_t__ FUNC_2 (struct value*) ;
 struct type* FUNC_3 (struct value*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 struct type* FUNC_6 (struct type*) ;
 int VAR_15 ;
 int FUNC_7 (char*,int) ;
 void* FUNC_8 (char*,int) ;
 scalar_t__ FUNC_9 (int,struct type*) ;
 int FUNC_10 (int ,char*,int,int ) ;
 int FUNC_11 (int ,char*,...) ;
 int VAR_16 ;
 struct gdbarch_tdep* FUNC_12 (struct gdbarch*) ;
 scalar_t__ VAR_17 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct gdbarch_tdep*) ;
 int FUNC_15 (struct gdbarch_tdep*) ;
 scalar_t__ FUNC_16 (struct type*) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int,int) ;
 int FUNC_19 (struct regcache*,int ,int) ;
 int FUNC_20 (int,char*,int) ;
 int FUNC_21 (int,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_22 (struct gdbarch *VAR_18, CORE_ADDR VAR_19,
     struct regcache *VAR_20, CORE_ADDR VAR_21,
     int VAR_22,
     struct value **VAR_23, CORE_ADDR VAR_24,
     int VAR_25, CORE_ADDR VAR_26)
{
  int VAR_27;
  int VAR_28;
  int VAR_29;
  int VAR_30 = 0;
  int VAR_31 = 0;
  struct gdbarch_tdep *VAR_32 = FUNC_12 (VAR_18);



  FUNC_19 (VAR_20, VAR_7, VAR_19);



  FUNC_19 (VAR_20, VAR_5, VAR_21);







  VAR_24 = FUNC_4 (VAR_24, 16);
  VAR_26 = FUNC_4 (VAR_26, 16);


  for (VAR_29 = 0; VAR_29 < VAR_22; VAR_29++)
    VAR_30 += FUNC_5 (FUNC_1 (FUNC_3 (VAR_23[VAR_29])),
       FUNC_15 (VAR_32));
  VAR_24 -= FUNC_5 (VAR_30, 16);

  if (VAR_17)
    FUNC_11 (VAR_16,
   "mips_o64_push_dummy_call: sp=0x%s allocated %ld\n",
   FUNC_17 (VAR_24), (long) FUNC_5 (VAR_30, 16));


  VAR_27 = VAR_0;
  VAR_28 = FUNC_13 (VAR_15);


  if (VAR_25)
    {
      if (VAR_17)
 FUNC_11 (VAR_16,
       "mips_o64_push_dummy_call: struct_return reg=%d 0x%s\n",
       VAR_27, FUNC_17 (VAR_26));
      FUNC_21 (VAR_27++, VAR_26);
      VAR_31 += FUNC_15 (VAR_32);
    }




  for (VAR_29 = 0; VAR_29 < VAR_22; VAR_29++)
    {
      char *VAR_33;
      struct value *VAR_34 = VAR_23[VAR_29];
      struct type *VAR_35 = FUNC_6 (FUNC_3 (VAR_34));
      int VAR_36 = FUNC_1 (VAR_35);
      enum type_code VAR_37 = FUNC_0 (VAR_35);

      if (VAR_17)
 FUNC_11 (VAR_16,
       "mips_o64_push_dummy_call: %d len=%d type=%d",
       VAR_29 + 1, VAR_36, (int) VAR_37);

      VAR_33 = (char *) FUNC_2 (VAR_34);






      if (!VAR_2 && FUNC_9 (VAR_37, VAR_35))
 {
   if ((VAR_28 & 1))
     VAR_28++;
 }
      if (FUNC_9 (VAR_37, VAR_35)
   && VAR_28 <= VAR_4)
 {
   if (!VAR_2 && VAR_36 == 8)
     {
       int VAR_38 = VAR_8 == VAR_1 ? 4 : 0;
       unsigned long VAR_39;


       VAR_39 = FUNC_8 (VAR_33 + VAR_38, 4);
       if (VAR_17)
  FUNC_11 (VAR_16, " - fpreg=%d val=%s",
        VAR_28, FUNC_18 (VAR_39, 4));
       FUNC_21 (VAR_28++, VAR_39);
       if (VAR_17)
  FUNC_11 (VAR_16, " - reg=%d val=%s",
        VAR_27, FUNC_18 (VAR_39, 4));
       FUNC_21 (VAR_27++, VAR_39);


       VAR_39 = FUNC_8 (VAR_33 + 4 - VAR_38, 4);
       if (VAR_17)
  FUNC_11 (VAR_16, " - fpreg=%d val=%s",
        VAR_28, FUNC_18 (VAR_39, 4));
       FUNC_21 (VAR_28++, VAR_39);

       if (VAR_17)
  FUNC_11 (VAR_16, " - reg=%d val=%s",
        VAR_27, FUNC_18 (VAR_39, 4));
       FUNC_21 (VAR_27++, VAR_39);
     }
   else
     {




       LONGEST VAR_40 = FUNC_8 (VAR_33, VAR_36);
       if (VAR_17)
  FUNC_11 (VAR_16, " - fpreg=%d val=%s",
        VAR_28, FUNC_18 (VAR_40, VAR_36));
       FUNC_21 (VAR_28++, VAR_40);




       if (VAR_17)
  FUNC_11 (VAR_16, " - reg=%d val=%s",
        VAR_27, FUNC_18 (VAR_40, VAR_36));
       FUNC_21 (VAR_27, VAR_40);
       VAR_27 += VAR_2 ? 1 : 2;
     }

   VAR_31 += FUNC_5 (VAR_36, FUNC_15 (VAR_32));
 }
      else
 {
   int VAR_41 = ((VAR_36 > FUNC_14 (VAR_32))
      && (VAR_36 % FUNC_14 (VAR_32) != 0));


   if (FUNC_14 (VAR_32) < 8
       && FUNC_16 (VAR_35))
     {
       if ((VAR_27 & 1))
  VAR_27++;
     }


   while (VAR_36 > 0)
     {

       int VAR_42 = 0;
       int VAR_43 = (VAR_36 < FUNC_14 (VAR_32)
     ? VAR_36 : FUNC_14 (VAR_32));

       if (VAR_17)
  FUNC_11 (VAR_16, " -- partial=%d",
        VAR_43);


       if (VAR_27 > VAR_3
    || VAR_41
    || FUNC_9 (VAR_37, VAR_35))
  {


    int VAR_44 = 0;
    CORE_ADDR VAR_45;
    VAR_42 = 1;
    if (VAR_8 == VAR_1)
      {
        if (FUNC_15 (VAR_32) == 8
     && (VAR_37 == VAR_11
         || VAR_37 == VAR_12
         || VAR_37 == VAR_10) && VAR_36 <= 4)
   VAR_44 = FUNC_15 (VAR_32) - VAR_36;
      }

    if (VAR_17)
      {
        FUNC_11 (VAR_16, " - stack_offset=0x%s",
       FUNC_17 (VAR_31));
        FUNC_11 (VAR_16, " longword_offset=0x%s",
       FUNC_17 (VAR_44));
      }

    VAR_45 = VAR_24 + VAR_31 + VAR_44;

    if (VAR_17)
      {
        int VAR_46;
        FUNC_11 (VAR_16, " @0x%s ",
       FUNC_17 (VAR_45));
        for (VAR_46 = 0; VAR_46 < VAR_43; VAR_46++)
   {
     FUNC_11 (VAR_16, "%02x",
           VAR_33[VAR_46] & 0xff);
   }
      }
    FUNC_20 (VAR_45, VAR_33, VAR_43);
  }






       if (VAR_27 <= VAR_3
    && !FUNC_9 (VAR_37, VAR_35))
  {
    LONGEST VAR_47 = FUNC_7 (VAR_33, VAR_43);
    if (FUNC_14 (VAR_32) < 8
        && VAR_8 == VAR_1
        && VAR_43 < FUNC_14 (VAR_32)
        && (VAR_37 == VAR_13 ||
     VAR_37 == VAR_14))
      VAR_47 <<= ((FUNC_14 (VAR_32) - VAR_43) *
    VAR_9);

    if (VAR_17)
      FUNC_10 (VAR_16, " - reg=%d val=%s",
          VAR_27,
          FUNC_18 (VAR_47,
         FUNC_14 (VAR_32)));
    FUNC_21 (VAR_27, VAR_47);
    VAR_27++;



    VAR_28 = VAR_4 + 1;
  }

       VAR_36 -= VAR_43;
       VAR_33 += VAR_43;
       VAR_31 += FUNC_5 (VAR_43,
     FUNC_15 (VAR_32));
     }
 }
      if (VAR_17)
 FUNC_11 (VAR_16, "\n");
    }

  FUNC_19 (VAR_20, VAR_6, VAR_24);


  return VAR_24;
}
