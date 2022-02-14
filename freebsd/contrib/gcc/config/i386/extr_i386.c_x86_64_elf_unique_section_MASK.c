
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct TYPE_2__ {char* (* strip_name_encoding ) (char const*) ;} ;
typedef int DECL_SECTION_NAME ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (size_t,char*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (char*,char const*,size_t) ;
 size_t FUNC_10 (char const*) ;
 char* FUNC_11 (char const*) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void
FUNC_12 (tree VAR_5, int VAR_6)
{
  if ((VAR_3 == VAR_0 || VAR_3 == VAR_1)
      && FUNC_8 (VAR_5))
    {
      const char *VAR_7 = ((void*)0);

      bool VAR_8 = FUNC_1 (VAR_5) && !VAR_2;

      switch (FUNC_5 (VAR_5, VAR_6))
 {
 case 142:
 case 141:
 case 140:
 case 139:
 case 138:
          VAR_7 = VAR_8 ? ".gnu.linkonce.ld." : ".ldata.";
   break;
 case 143:
          VAR_7 = VAR_8 ? ".gnu.linkonce.lb." : ".lbss.";
   break;
 case 137:
 case 135:
 case 134:
 case 136:
          VAR_7 = VAR_8 ? ".gnu.linkonce.lr." : ".lrodata.";
   break;
 case 131:
 case 132:
 case 133:
   FUNC_7 ();
 case 128:
 case 129:
 case 130:


   break;
 }
      if (VAR_7)
 {
   const char *VAR_9;
   size_t VAR_10, VAR_11;
   char *VAR_12;
   VAR_11 = FUNC_10 (VAR_7);

   VAR_9 = FUNC_2 (FUNC_0 (VAR_5));
   VAR_9 = VAR_4.strip_name_encoding (VAR_9);
   VAR_10 = FUNC_10 (VAR_9);

   VAR_12 = FUNC_3 (VAR_10 + VAR_11 + 1);
   FUNC_9 (VAR_12, VAR_7, VAR_11);
   FUNC_9 (VAR_12 + VAR_11, VAR_9, VAR_10 + 1);

   DECL_SECTION_NAME (VAR_13) = FUNC_4 (VAR_10 + VAR_11, VAR_12);
   return;
 }
    }
  FUNC_6 (VAR_5, VAR_6);
}
