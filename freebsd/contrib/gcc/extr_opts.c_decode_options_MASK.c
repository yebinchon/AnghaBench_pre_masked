
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int (* init_options ) (unsigned int,char const**) ;int (* initialize_diagnostics ) (int ) ;} ;
struct TYPE_3__ {scalar_t__ unwind_tables_default; int have_named_sections; int default_target_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 scalar_t__ VAR_64 ;
 int VAR_65 ;
 int FUNC_1 (unsigned int,char const**,unsigned int) ;
 int FUNC_2 (char*) ;
 TYPE_2__ VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int FUNC_3 (char const*,char const*,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char const*,char*) ;
 unsigned int FUNC_6 (unsigned int,char const**) ;
 int FUNC_7 (int ) ;
 int VAR_70 ;
 TYPE_1__ VAR_71 ;
 scalar_t__ VAR_72 ;
 int VAR_73 ;
 int FUNC_8 (int ,char*) ;

void
FUNC_9 (unsigned int VAR_74, const char **VAR_75)
{
  unsigned int VAR_76, VAR_77;


  VAR_77 = VAR_66.init_options (VAR_74, VAR_75);

  VAR_66.initialize_diagnostics (VAR_65);



  for (VAR_76 = 1; VAR_76 < VAR_74; VAR_76++)
    {
      if (!FUNC_5 (VAR_75[VAR_76], "-O"))
 {
   VAR_68 = 1;
   VAR_69 = 0;
 }
      else if (VAR_75[VAR_76][0] == '-' && VAR_75[VAR_76][1] == 'O')
 {

   const char *VAR_78 = &VAR_75[VAR_76][2];

   if ((VAR_78[0] == 's') && (VAR_78[1] == 0))
     {
       VAR_69 = 1;


       VAR_68 = 2;
     }
   else
     {
       const int VAR_79 = FUNC_3 (VAR_78, VAR_78 - 2, -1);
       if (VAR_79 != -1)
  {
    VAR_68 = VAR_79;
    VAR_69 = 0;
  }
     }
 }
    }

  if (!VAR_68)
    {
      VAR_25 = 0;
    }

  if (VAR_68 >= 1)
    {
      VAR_11 = 1;






      VAR_18 = 1;
      VAR_7 = 1;
      VAR_19 = 1;
      VAR_20 = 1;
      VAR_22 = 1;
      VAR_23 = 1;
      VAR_46 = 1;
      VAR_50 = 1;
      VAR_51 = 1;
      VAR_52 = 1;
      VAR_61 = 1;
      VAR_54 = 1;
      VAR_58 = 1;
      VAR_49 = 1;
      VAR_53 = 1;
      VAR_48 = 1;
      VAR_57 = 1;
      VAR_56 = 1;
      if (!VAR_67)
        VAR_62 = 1;

      if (!VAR_69)
 {




   VAR_47 = 1;
 }
    }

  if (VAR_68 >= 2)
    {
      VAR_45 = 1;
      VAR_8 = 1;
      VAR_28 = 1;
      VAR_9 = 1;
      VAR_10 = 1;
      VAR_16 = 1;
      VAR_15 = 1;
      VAR_24 = 1;
      VAR_37 = 1;
      VAR_6 = 1;
      VAR_29 = 1;




      VAR_33 = 1;
      VAR_43 = 1;
      VAR_44 = 1;
      VAR_13 = 1;
      VAR_34 = 1;
      VAR_36 = 1;
      VAR_59 = 1;
      VAR_60 = 1;





      if (!VAR_69)
 {

          VAR_55 = 1;
 }
    }

  if (VAR_68 >= 3)
    {
      VAR_21 = 1;
      VAR_63 = 1;
      VAR_17 = 1;
    }

  if (VAR_69)
    {
      VAR_5 = 1;
      VAR_3 = 1;
      VAR_4 = 1;
      VAR_2 = 1;
      VAR_34 = 0;
      VAR_35 = 0;
    }

  if (VAR_69)
    {

      FUNC_4 ("max-inline-insns-single", 5);
      FUNC_4 ("max-inline-insns-auto", 5);
      VAR_21 = 1;


      FUNC_4 ("min-crossjump-insns", 1);
    }


  VAR_42 = VAR_0;


  VAR_41 = 2;



  VAR_70 = VAR_71.default_target_flags;


  VAR_64 = VAR_71.unwind_tables_default;






  FUNC_1 (VAR_74, VAR_75, VAR_77);

  if (VAR_31)
    VAR_30 = VAR_31;
  if (VAR_30 && !VAR_31)
    VAR_40 = 1;

  if (VAR_26 == 2)
    VAR_26 = 0;
  else
    VAR_32 = VAR_26;






  if (VAR_68 == 0)
    {


      VAR_26 = 1;
      VAR_72 = 0;




      if (VAR_73 == 1)
 FUNC_8 (VAR_1,
   "-Wuninitialized is not supported without -O");
    }

  if (VAR_32 == 2)
    VAR_32 = VAR_26;







  if (VAR_14 && VAR_35)
    {
      FUNC_2
     ("-freorder-blocks-and-partition does not work with exceptions");
      VAR_35 = 0;
      VAR_34 = 1;
    }




  if (VAR_64 && ! VAR_71.unwind_tables_default
      && VAR_35)
    {
      FUNC_2 ("-freorder-blocks-and-partition does not support unwind info");
      VAR_35 = 0;
      VAR_34 = 1;
    }





  if (VAR_35
      && (!VAR_71.have_named_sections
   || (VAR_64 && VAR_71.unwind_tables_default)))
    {
      FUNC_2
       ("-freorder-blocks-and-partition does not work on this architecture");
      VAR_35 = 0;
      VAR_34 = 1;
    }
}
