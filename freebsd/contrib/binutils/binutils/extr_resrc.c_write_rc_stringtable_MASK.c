
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int rc_uint_type ;
struct TYPE_9__ {TYPE_2__* strings; } ;
typedef TYPE_3__ rc_stringtable ;
struct TYPE_7__ {int id; } ;
struct TYPE_10__ {TYPE_1__ u; int named; } ;
typedef TYPE_4__ rc_res_id ;
struct TYPE_8__ {scalar_t__ length; int string; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2 (FILE *VAR_0, const rc_res_id *VAR_1,
        const rc_stringtable *VAR_2)
{
  rc_uint_type VAR_3;
  int VAR_4;

  if (VAR_1 != ((void*)0) && ! VAR_1->named)
    VAR_3 = (VAR_1->u.id - 1) << 4;
  else
    {
      FUNC_0 (VAR_0, "/* %s string table name.  */\n",
        VAR_1 == ((void*)0) ? "Missing" : "Invalid");
      VAR_3 = 0;
    }

  FUNC_0 (VAR_0, "BEGIN\n");

  for (VAR_4 = 0; VAR_4 < 16; VAR_4++)
    {
      if (VAR_2->strings[VAR_4].length != 0)
 {
   FUNC_0 (VAR_0, "  %lu, ", (long) VAR_3 + VAR_4);
   FUNC_1 (VAR_0, VAR_2->strings[VAR_4].string,
    VAR_2->strings[VAR_4].length);
   FUNC_0 (VAR_0, "\n");
 }
    }

  FUNC_0 (VAR_0, "END\n");
}
