
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int windres_bfd ;
typedef void* unichar ;
typedef int rc_uint_type ;
struct TYPE_8__ {TYPE_1__* strings; } ;
typedef TYPE_3__ rc_stringtable ;
struct TYPE_7__ {TYPE_3__* stringtable; } ;
struct TYPE_9__ {TYPE_2__ u; int type; } ;
typedef TYPE_4__ rc_res_resource ;
typedef int bfd_byte ;
struct TYPE_6__ {unsigned int length; void** string; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int *,int const*,int) ;

__attribute__((used)) static rc_res_resource *
FUNC_4 (windres_bfd *VAR_1, const bfd_byte *VAR_2, rc_uint_type VAR_3)
{
  rc_stringtable *VAR_4;
  int VAR_5;
  rc_res_resource *VAR_6;

  VAR_4 = (rc_stringtable *) FUNC_1 (sizeof (rc_stringtable));

  for (VAR_5 = 0; VAR_5 < 16; VAR_5++)
    {
      unsigned int VAR_7;

      if (VAR_3 < 2)
 FUNC_2 (FUNC_0("stringtable string length"));
      VAR_7 = FUNC_3 (VAR_1, VAR_2, 2);
      VAR_4->strings[VAR_5].length = VAR_7;

      if (VAR_7 > 0)
 {
   unichar *VAR_8;
   unsigned int VAR_9;

   if (VAR_3 < 2 + 2 * VAR_7)
     FUNC_2 (FUNC_0("stringtable string"));

   VAR_8 = (unichar *) FUNC_1 (VAR_7 * sizeof (unichar));
   VAR_4->strings[VAR_5].string = VAR_8;

   for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
     VAR_8[VAR_9] = FUNC_3 (VAR_1, VAR_2 + 2 + VAR_9 * 2, 2);
 }

      VAR_2 += 2 + 2 * VAR_7;
      VAR_3 -= 2 + 2 * VAR_7;
    }

  VAR_6 = (rc_res_resource *) FUNC_1 (sizeof *VAR_6);
  VAR_6->type = VAR_0;
  VAR_6->u.stringtable = VAR_4;

  return VAR_6;
}
