
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* fill; } ;
typedef TYPE_2__ lang_fill_statement_type ;
struct TYPE_7__ {int map_file; } ;
struct TYPE_5__ {unsigned char* data; size_t size; } ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (int ,char*,unsigned char) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void
FUNC_2 (lang_fill_statement_type *VAR_1)
{
  size_t VAR_2;
  unsigned char *VAR_3;
  FUNC_1 (" FILL mask 0x", VAR_0.map_file);
  for (VAR_3 = VAR_1->fill->data, VAR_2 = VAR_1->fill->size; VAR_2 != 0; VAR_3++, VAR_2--)
    FUNC_0 (VAR_0.map_file, "%02hhx", *VAR_3);
  FUNC_1 ("\n", VAR_0.map_file);
}
