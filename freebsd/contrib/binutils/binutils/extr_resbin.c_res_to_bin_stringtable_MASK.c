
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int windres_bfd ;
typedef int unichar ;
typedef int rc_uint_type ;
struct TYPE_5__ {TYPE_1__* strings; } ;
typedef TYPE_2__ rc_stringtable ;
typedef int bfd_byte ;
struct TYPE_4__ {int* string; scalar_t__ length; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int,int) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static rc_uint_type
FUNC_3 (windres_bfd *VAR_0, rc_uint_type VAR_1,
   const rc_stringtable *VAR_2)
{
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < 16; VAR_3++)
    {
      rc_uint_type VAR_4, VAR_5;
      unichar *VAR_6;

      VAR_4 = (rc_uint_type) VAR_2->strings[VAR_3].length;
      VAR_6 = VAR_2->strings[VAR_3].string;

      VAR_5 = 2 + VAR_4 * 2;
      if (VAR_0)
 {
   bfd_byte *VAR_7;
   rc_uint_type VAR_8;

   VAR_7 = (bfd_byte *) FUNC_0 (VAR_5);
   FUNC_2 (VAR_0, VAR_7, VAR_4);

      for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
     FUNC_2 (VAR_0, VAR_7 + 2 + VAR_8 * 2, VAR_6[VAR_8]);
   FUNC_1 (VAR_0, VAR_7, VAR_1, VAR_5);
    }
      VAR_1 += VAR_5;
    }
  return VAR_1;
}
