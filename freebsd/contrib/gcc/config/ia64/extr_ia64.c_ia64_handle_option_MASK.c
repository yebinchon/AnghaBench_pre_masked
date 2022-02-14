
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct pta TYPE_1__ ;


typedef enum processor_type { ____Placeholder_processor_type } processor_type ;
struct pta {char const* name; int processor; } ;


 int FUNC_0 (TYPE_1__ const*) ;





 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;
 int VAR_0 ;
 int FUNC_3 (char const*,char const*) ;

__attribute__((used)) static bool
FUNC_4 (size_t VAR_1, const char *VAR_2, int VAR_3)
{
  switch (VAR_1)
    {
    case 132:
      FUNC_2 (VAR_2);
      return 1;

    case 131:
      if (VAR_3 != 14 && VAR_3 != 22 && VAR_3 != 64)
 FUNC_1 ("bad value %<%s%> for -mtls-size= switch", VAR_2);
      return 1;

    case 130:
      {
 static struct pta
   {
     const char *name;
     enum processor_type processor;
   }
 const VAR_4[] =
   {
     {"itanium", 129},
     {"itanium1", 129},
     {"merced", 129},
     {"itanium2", 128},
     {"mckinley", 128},
   };
 int const VAR_5 = FUNC_0 (VAR_4);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
   if (!FUNC_3 (VAR_2, VAR_4[VAR_6].name))
     {
       VAR_0 = VAR_4[VAR_6].processor;
       break;
     }
 if (VAR_6 == VAR_5)
   FUNC_1 ("bad value %<%s%> for -mtune= switch", VAR_2);
 return 1;
      }

    default:
      return 1;
    }
}
