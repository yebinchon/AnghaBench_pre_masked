
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int formals_style ;



 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;




 char const* FUNC_2 (scalar_t__) ;
 int VAR_0 ;




 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;


 int VAR_1 ;
 char* FUNC_16 (char const*,char const*,char*,...) ;
 char const* VAR_2 ;
 int FUNC_17 () ;
 char const* FUNC_18 (scalar_t__,int ,int ) ;
 char const* FUNC_19 (scalar_t__,int ) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (char*,char*,int) ;

__attribute__((used)) static const char *
FUNC_22 (const char *VAR_3, tree VAR_4, formals_style VAR_5)
{
  tree VAR_6;


  if (FUNC_8 (VAR_4) && FUNC_4 (FUNC_8 (VAR_4)) == 130)
    VAR_2 = FUNC_2 (FUNC_1 (FUNC_8 (VAR_4)));
  else
    {
      switch (FUNC_4 (VAR_4))
 {
 case 133:
   if (FUNC_10 (VAR_4))
     VAR_3 = FUNC_16 ("const ", VAR_3, ((void*)0));
   if (FUNC_15 (VAR_4))
     VAR_3 = FUNC_16 ("volatile ", VAR_3, ((void*)0));

   VAR_3 = FUNC_16 ("*", VAR_3, ((void*)0));

   if (FUNC_4 (FUNC_6 (VAR_4)) == 139 || FUNC_4 (FUNC_6 (VAR_4)) == 136)
     VAR_3 = FUNC_16 ("(", VAR_3, ")", ((void*)0));

   VAR_3 = FUNC_22 (VAR_3, FUNC_6 (VAR_4), VAR_5);

   return VAR_3;

 case 139:
   if (!FUNC_0 (VAR_4) || FUNC_4 (FUNC_12 (VAR_4)) != VAR_0)
     VAR_3 = FUNC_22 (FUNC_16 (VAR_3, "[]", ((void*)0)),
    FUNC_6 (VAR_4), VAR_5);
   else if (FUNC_20 (VAR_4) == 0)
     VAR_3 = FUNC_22 (FUNC_16 (VAR_3, "[0]", ((void*)0)),
    FUNC_6 (VAR_4), VAR_5);
   else
     {
       int VAR_7 = (FUNC_20 (VAR_4) / FUNC_20 (FUNC_6 (VAR_4)));
       char VAR_8[10];
       FUNC_21 (VAR_8, "[%d]", VAR_7);
       VAR_3 = FUNC_22 (FUNC_16 (VAR_3, VAR_8, ((void*)0)),
      FUNC_6 (VAR_4), VAR_5);
     }
   break;

 case 136:
   VAR_3 = FUNC_22 (FUNC_16 (VAR_3,
          FUNC_19 (VAR_4, VAR_5),
          ((void*)0)),
         FUNC_6 (VAR_4), VAR_5);
   break;

 case 135:
   VAR_2 = FUNC_2 (VAR_4);
   break;
 case 131:
   if (FUNC_8 (VAR_4))
     VAR_2 = FUNC_2 (FUNC_8 (VAR_4));
   else
     {
       VAR_2 = "";
       VAR_6 = FUNC_7 (VAR_4);
       while (VAR_6)
  {
    VAR_2 = FUNC_16 (VAR_2, FUNC_18 (VAR_6, 0, VAR_1),
          ((void*)0));
    VAR_6 = FUNC_3 (VAR_6);
    VAR_2 = FUNC_16 (VAR_2, "; ", ((void*)0));
  }
       VAR_2 = FUNC_16 ("{ ", VAR_2, "}", ((void*)0));
     }
   VAR_2 = FUNC_16 ("struct ", VAR_2, ((void*)0));
   break;

 case 129:
   if (FUNC_8 (VAR_4))
     VAR_2 = FUNC_2 (FUNC_8 (VAR_4));
   else
     {
       VAR_2 = "";
       VAR_6 = FUNC_7 (VAR_4);
       while (VAR_6)
  {
    VAR_2 = FUNC_16 (VAR_2, FUNC_18 (VAR_6, 0, VAR_1),
          ((void*)0));
    VAR_6 = FUNC_3 (VAR_6);
    VAR_2 = FUNC_16 (VAR_2, "; ", ((void*)0));
  }
       VAR_2 = FUNC_16 ("{ ", VAR_2, "}", ((void*)0));
     }
   VAR_2 = FUNC_16 ("union ", VAR_2, ((void*)0));
   break;

 case 138:
   if (FUNC_8 (VAR_4))
     VAR_2 = FUNC_2 (FUNC_8 (VAR_4));
   else
     {
       VAR_2 = "";
       VAR_6 = FUNC_14 (VAR_4);
       while (VAR_6)
  {
    VAR_2 = FUNC_16 (VAR_2,
   FUNC_2 (FUNC_5 (VAR_6)), ((void*)0));
    VAR_6 = FUNC_3 (VAR_6);
    if (VAR_6)
      VAR_2 = FUNC_16 (VAR_2, ", ", ((void*)0));
  }
       VAR_2 = FUNC_16 ("{ ", VAR_2, " }", ((void*)0));
     }
   VAR_2 = FUNC_16 ("enum ", VAR_2, ((void*)0));
   break;

 case 130:
   VAR_2 = FUNC_2 (FUNC_1 (VAR_4));
   break;

 case 134:
   VAR_2 = FUNC_2 (FUNC_1 (FUNC_8 (VAR_4)));


   if (FUNC_13 (VAR_4) && FUNC_9 (VAR_4))
     VAR_2 = FUNC_16 ("unsigned ", VAR_2, ((void*)0));
   break;

 case 132:
   VAR_2 = FUNC_2 (FUNC_1 (FUNC_8 (VAR_4)));
   break;

 case 128:
   VAR_2 = "void";
   break;

 case 137:
   VAR_2 = "[ERROR]";
   break;

 default:
   FUNC_17 ();
 }
    }
  if (FUNC_10 (VAR_4))
    VAR_3 = FUNC_16 ("const ", VAR_3, ((void*)0));
  if (FUNC_15 (VAR_4))
    VAR_3 = FUNC_16 ("volatile ", VAR_3, ((void*)0));
  if (FUNC_11 (VAR_4))
    VAR_3 = FUNC_16 ("restrict ", VAR_3, ((void*)0));
  return VAR_3;
}
