
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* key; scalar_t__* alt; } ;
struct TYPE_8__ {int el_outfile; TYPE_1__ el_map; } ;
typedef TYPE_2__ EditLine ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__*,int,int) ;
 int FUNC_3 (TYPE_2__*,char*) ;

__attribute__((used)) static void
FUNC_4(EditLine *VAR_1)
{
 int VAR_2, VAR_3;

 (void) FUNC_0(VAR_1->el_outfile, "Standard key bindings\n");
 VAR_2 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->el_map.key[VAR_2] == VAR_1->el_map.key[VAR_3])
   continue;
  FUNC_2(VAR_1, VAR_1->el_map.key, VAR_2, VAR_3 - 1);
  VAR_2 = VAR_3;
 }
 FUNC_2(VAR_1, VAR_1->el_map.key, VAR_2, VAR_3 - 1);

 (void) FUNC_0(VAR_1->el_outfile, "Alternative key bindings\n");
 VAR_2 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->el_map.alt[VAR_2] == VAR_1->el_map.alt[VAR_3])
   continue;
  FUNC_2(VAR_1, VAR_1->el_map.alt, VAR_2, VAR_3 - 1);
  VAR_2 = VAR_3;
 }
 FUNC_2(VAR_1, VAR_1->el_map.alt, VAR_2, VAR_3 - 1);

 (void) FUNC_0(VAR_1->el_outfile, "Multi-character bindings\n");
 FUNC_1(VAR_1, L"");
 (void) FUNC_0(VAR_1->el_outfile, "Arrow key bindings\n");
 FUNC_3(VAR_1, L"");
}
