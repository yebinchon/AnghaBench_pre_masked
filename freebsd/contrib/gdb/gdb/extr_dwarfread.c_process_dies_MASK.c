
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int dummy; } ;
struct dieinfo {scalar_t__ die_length; int die_tag; scalar_t__ at_sibling; int has_at_low_pc; void* at_high_pc; void* at_low_pc; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (void*) ;






 int VAR_1 ;






 int FUNC_1 (struct dieinfo*,char*,struct objfile*) ;
 int FUNC_2 (struct dieinfo*,struct objfile*) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct dieinfo*) ;
 int FUNC_4 (struct dieinfo*,struct objfile*) ;
 int FUNC_5 (struct dieinfo*,char*,char*,struct objfile*) ;
 int FUNC_6 (struct dieinfo*,char*,char*,struct objfile*) ;
 int FUNC_7 (struct dieinfo*,char*,char*,struct objfile*) ;
 int FUNC_8 (struct dieinfo*,char*,char*,struct objfile*) ;
 int FUNC_9 (struct dieinfo*,char*,char*,struct objfile*) ;
 int FUNC_10 (struct dieinfo*,char*,char*) ;
 int FUNC_11 (struct dieinfo*) ;
 int FUNC_12 (struct dieinfo*) ;

__attribute__((used)) static void
FUNC_13 (char *VAR_5, char *VAR_6, struct objfile *VAR_7)
{
  char *VAR_8;
  struct dieinfo VAR_9;

  while (VAR_5 < VAR_6)
    {
      FUNC_1 (&VAR_9, VAR_5, VAR_7);
      if (VAR_9.die_length < VAR_0)
 {
   break;
 }
      else if (VAR_9.die_tag == VAR_1)
 {
   VAR_8 = VAR_5 + VAR_9.die_length;
 }
      else
 {
   FUNC_2 (&VAR_9, VAR_7);
   if (VAR_9.at_sibling != 0)
     {
       VAR_8 = VAR_3 + VAR_9.at_sibling - VAR_4;
     }
   else
     {
       VAR_8 = VAR_5 + VAR_9.die_length;
     }

   VAR_9.at_low_pc = FUNC_0 (VAR_9.at_low_pc);
   VAR_9.at_high_pc = FUNC_0 (VAR_9.at_high_pc);
   switch (VAR_9.die_tag)
     {
     case 137:



       if (VAR_2 == ((void*)0))
  FUNC_6 (&VAR_9, VAR_5, VAR_8, VAR_7);
       else
  VAR_8 = VAR_5 + VAR_9.die_length;
       break;
     case 135:
     case 130:
       if (VAR_9.has_at_low_pc)
  {
    FUNC_7 (&VAR_9, VAR_5, VAR_8, VAR_7);
  }
       break;
     case 134:
       FUNC_8 (&VAR_9, VAR_5, VAR_8, VAR_7);
       break;
     case 138:
     case 131:
     case 128:
       FUNC_9 (&VAR_9, VAR_5, VAR_8, VAR_7);
       break;
     case 136:
       FUNC_5 (&VAR_9, VAR_5, VAR_8, VAR_7);
       break;
     case 129:
       FUNC_10 (&VAR_9, VAR_5, VAR_8);
       break;
     case 139:
       FUNC_3 (&VAR_9);
       break;
     case 133:
       FUNC_11 (&VAR_9);
       break;
     case 132:
       FUNC_12 (&VAR_9);
       break;
     default:
       FUNC_4 (&VAR_9, VAR_7);
       break;
     }
 }
      VAR_5 = VAR_8;
    }
}
