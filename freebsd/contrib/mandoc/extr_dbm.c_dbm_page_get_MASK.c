
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dbm_page {char* name; char* sect; char* arch; char* desc; char* file; int addr; } ;
typedef size_t int32_t ;
struct TYPE_3__ {scalar_t__ file; scalar_t__ desc; scalar_t__ arch; scalar_t__ sect; scalar_t__ name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 char* FUNC_2 (scalar_t__) ;
 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;

struct dbm_page *
FUNC_3(int32_t VAR_2)
{
 static struct dbm_page VAR_3;

 FUNC_0(VAR_2 >= 0);
 FUNC_0(VAR_2 < VAR_0);
 VAR_3.name = FUNC_2(VAR_1[VAR_2].name);
 if (VAR_3.name == ((void*)0))
  VAR_3.name = "(NULL)\0";
 VAR_3.sect = FUNC_2(VAR_1[VAR_2].sect);
 if (VAR_3.sect == ((void*)0))
  VAR_3.sect = "(NULL)\0";
 VAR_3.arch = VAR_1[VAR_2].arch ? FUNC_2(VAR_1[VAR_2].arch) : ((void*)0);
 VAR_3.desc = FUNC_2(VAR_1[VAR_2].desc);
 if (VAR_3.desc == ((void*)0))
  VAR_3.desc = "(NULL)";
 VAR_3.file = FUNC_2(VAR_1[VAR_2].file);
 if (VAR_3.file == ((void*)0))
  VAR_3.file = " (NULL)\0";
 VAR_3.addr = FUNC_1(VAR_1 + VAR_2);
 return &VAR_3;
}
