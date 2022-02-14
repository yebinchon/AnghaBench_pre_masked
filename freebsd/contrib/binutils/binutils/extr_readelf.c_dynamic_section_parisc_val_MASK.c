
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int flags ;
typedef int bfd_vma ;
struct TYPE_4__ {int d_val; int d_ptr; } ;
struct TYPE_5__ {int d_tag; TYPE_1__ d_un; } ;
typedef TYPE_2__ Elf_Internal_Dyn ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3 (Elf_Internal_Dyn *VAR_3)
{
  switch (VAR_3->d_tag)
    {
    case 136:
      {
 static struct
 {
   long int bit;
   const char *str;
 }
 VAR_4[] =
 {
   { 137, "HP_DEBUG_PRIVATE" },
   { 139, "HP_DEBUG_CALLBACK" },
   { 138, "HP_DEBUG_CALLBACK_BOR" },
   { 131, "HP_NO_ENVVAR" },
   { 143, "HP_BIND_NOW" },
   { 144, "HP_BIND_NONFATAL" },
   { 140, "HP_BIND_VERBOSE" },
   { 142, "HP_BIND_RESTRICTED" },
   { 141, "HP_BIND_SYMBOLIC" },
   { 129, "HP_RPATH_FIRST" },
   { 145, "HP_BIND_DEPTH_FIRST" },
   { 134, "HP_GST" },
   { 128, "HP_SHLIB_FIXED" },
   { 133, "HP_MERGE_SHLIB_SEG" },
   { 132, "HP_NODELETE" },
   { 135, "HP_GROUP" },
   { 130, "HP_PROTECT_LINKAGE_TABLE" }
 };
 int VAR_5 = 1;
 size_t VAR_6;
 bfd_vma VAR_7 = VAR_3->d_un.d_val;

 for (VAR_6 = 0; VAR_6 < sizeof (VAR_4) / sizeof (VAR_4[0]); ++VAR_6)
   if (VAR_7 & VAR_4[VAR_6].bit)
     {
       if (! VAR_5)
  FUNC_2 (' ');
       FUNC_0 (VAR_4[VAR_6].str, VAR_2);
       VAR_5 = 0;
       VAR_7 ^= VAR_4[VAR_6].bit;
     }

 if (VAR_7 != 0 || VAR_5)
   {
     if (! VAR_5)
       FUNC_2 (' ');
     FUNC_1 (VAR_7, VAR_0);
   }
      }
      break;

    default:
      FUNC_1 (VAR_3->d_un.d_ptr, VAR_1);
      break;
    }
  FUNC_2 ('\n');
}
