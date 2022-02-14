
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int expand_function; } ;
struct TYPE_15__ {TYPE_1__ callgraph; int (* post_options ) (scalar_t__*) ;} ;
struct TYPE_14__ {int (* default_short_enums ) () ;int have_named_sections; } ;
struct TYPE_13__ {scalar_t__ var_location; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 char* VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 void* VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 void* VAR_27 ;
 int VAR_28 ;
 char* VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 TYPE_2__ VAR_32 ;
 TYPE_2__* VAR_33 ;
 scalar_t__ VAR_34 ;
 int * VAR_35 ;
 TYPE_2__* VAR_36 ;
 TYPE_2__ VAR_37 ;
 TYPE_2__ VAR_38 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 int VAR_46 ;
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 scalar_t__ VAR_54 ;
 scalar_t__ VAR_55 ;
 scalar_t__ VAR_56 ;
 int VAR_57 ;
 scalar_t__ VAR_58 ;
 scalar_t__ VAR_59 ;
 scalar_t__ VAR_60 ;
 int VAR_61 ;
 scalar_t__ VAR_62 ;
 scalar_t__ VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 scalar_t__ VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 scalar_t__ VAR_69 ;
 TYPE_6__ VAR_70 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 scalar_t__ VAR_74 ;
 int FUNC_5 (int ,int ,int ,char*,char*,char*) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ VAR_75 ;
 int VAR_76 ;
 TYPE_2__ VAR_77 ;
 int VAR_78 ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (scalar_t__*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 TYPE_4__ VAR_79 ;
 char* VAR_80 ;
 scalar_t__ VAR_81 ;
 TYPE_2__ VAR_82 ;
 scalar_t__ VAR_83 ;
 int FUNC_12 (int ,char*,...) ;
 scalar_t__ VAR_84 ;
 TYPE_2__ VAR_85 ;
 char* FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14 (void)
{


  VAR_33 = &VAR_37;





  VAR_72 = VAR_70.post_options (&VAR_71);

  VAR_69 = VAR_71;







  if (VAR_56 && !FUNC_11 ())
    {
      FUNC_12 (VAR_10,
        "this target does not support %qs", "-fsection-anchors");
      VAR_56 = 0;
    }

  if (VAR_57 == 2)
    VAR_57 = VAR_79.default_short_enums ();


  if (VAR_29)
    ;
  else if (VAR_71)
    {
      char *VAR_86 = FUNC_13 (FUNC_4 (VAR_71));

      FUNC_7 (VAR_86, FUNC_8 (VAR_86));
      VAR_29 = VAR_86;
    }
  else
    VAR_29 = "gccaux";



  if (VAR_26 <= 0) VAR_26 = 1;
  if (VAR_28 > VAR_26 || !VAR_26)
    VAR_28 = VAR_26 - 1;
  VAR_27 = FUNC_2 (VAR_26 * 2 - 1);
  if (VAR_20 <= 0) VAR_20 = 1;
  if (VAR_22 > VAR_20 || !VAR_20)
    VAR_22 = VAR_20 - 1;
  VAR_21 = FUNC_2 (VAR_20 * 2 - 1);
  if (VAR_23 <= 0) VAR_23 = 1;
  VAR_24 = FUNC_2 (VAR_23 * 2 - 1);
  if (VAR_25 > VAR_23 || !VAR_23)
    VAR_25 = VAR_23 - 1;
  if (VAR_18 <= 0) VAR_18 = 1;
  VAR_19 = FUNC_2 (VAR_18 * 2 - 1);



  if (VAR_63)
    VAR_64 = 1;




  if (VAR_53 == VAR_1)
    VAR_53 = VAR_64 || VAR_49;
  if (VAR_68 == VAR_1)
    VAR_68 = VAR_64 || VAR_49;
  if (VAR_52 == VAR_1)
    VAR_52 = VAR_64 || VAR_49;

  if (VAR_47)
    VAR_39 = 1;
  if (VAR_39)
    VAR_65 = 1;



  if (VAR_62 && ! VAR_70.callgraph.expand_function)
    VAR_62 = 0;

  if (!VAR_62)
    VAR_56 = 0;

  if (VAR_66)
    VAR_51 = 1;



  if (VAR_54 || VAR_55)
    FUNC_12 (0, "instruction scheduling not supported on this target machine");


  if (VAR_43)
    FUNC_12 (0, "this target machine does not have delayed branches");


  VAR_80 = VAR_14;
  if (VAR_46 != -1)
    {


      if (VAR_80[0] == 0 ||
   (VAR_80[0] == '_' && VAR_80[1] == 0))
 {
   VAR_80 = VAR_46 ? "_" : "";
 }
      else
 FUNC_12 (0, "-f%sleading-underscore not supported on this target machine",
   VAR_46 ? "" : "no-");
    }



  if (VAR_81)
    {
      FUNC_6 (VAR_78, "");
      if (! VAR_76)
 FUNC_5 (VAR_78, 0, VAR_8, "", " ", "\n");
    }

  if (VAR_60)
    {
      VAR_84 = VAR_9;
      VAR_75 = 0;
    }



  if (VAR_34 == VAR_3)
    VAR_84 = VAR_9;



  if (VAR_12 == VAR_9)
    VAR_36 = &VAR_37;
  if (VAR_84 == VAR_9)
    ;
  else
    FUNC_0 ("target system does not support the \"%s\" debug format",
    VAR_35[VAR_84]);




  if (VAR_34 < VAR_4
      || VAR_33->var_location == VAR_37.var_location)
    {
      if (VAR_67 == 1)
        {
   if (VAR_34 < VAR_4)
     FUNC_12 (0, "variable tracking requested, but useless unless "
       "producing debug info");
   else
     FUNC_12 (0, "variable tracking requested, but not supported "
       "by this debug format");
 }
      VAR_67 = 0;
    }

  if (VAR_52 == VAR_1)
    VAR_52 = VAR_36->var_location
           != VAR_37.var_location;

  if (VAR_67 == VAR_1)
    VAR_67 = VAR_73 >= 1;




  if (VAR_45)
    {
      VAR_30 = FUNC_3 (VAR_31, "w");
      if (VAR_30 == 0)
 FUNC_1 ("can%'t open %s: %m", VAR_31);
    }

  if (! VAR_79.have_named_sections)
    {
      if (VAR_44)
 {
   FUNC_12 (0, "-ffunction-sections not supported for this target");
   VAR_44 = 0;
 }
      if (VAR_42)
 {
   FUNC_12 (0, "-fdata-sections not supported for this target");
   VAR_42 = 0;
 }
    }

  if (VAR_44 && VAR_75)
    {
      FUNC_12 (0, "-ffunction-sections disabled; it makes profiling impossible");
      VAR_44 = 0;
    }


  if (VAR_50)
    {
      FUNC_12 (0, "-fprefetch-loop-arrays not supported for this target");
      VAR_50 = 0;
    }
  if (VAR_50 && VAR_74)
    {
      FUNC_12 (0, "-fprefetch-loop-arrays is not supported with -Os");
      VAR_50 = 0;
    }



  if (VAR_44 && VAR_84 != VAR_9)
    FUNC_12 (0, "-ffunction-sections may affect debugging on some targets");




  if (VAR_58)
    VAR_61 = 1;


  if (VAR_41)
    VAR_40 = 0;



  if (!VAR_6 && VAR_59)
    {
      FUNC_12 (0, "-fstack-protector not supported for this target");
      VAR_59 = 0;
    }
  if (!VAR_59)
    VAR_83 = 0;





  if (VAR_65 && !VAR_0
      && VAR_48)
    {
      FUNC_12 (0, "unwind tables currently requires a frame pointer "
        "for correctness");
      VAR_48 = 0;
    }
}
