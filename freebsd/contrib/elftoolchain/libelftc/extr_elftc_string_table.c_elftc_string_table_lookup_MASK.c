
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct _Elftc_String_Table_Entry {size_t ste_idx; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {int st_nbuckets; } ;
typedef TYPE_1__ Elftc_String_Table ;


 int FUNC_0 (int) ;
 struct _Elftc_String_Table_Entry* FUNC_1 (TYPE_1__*,char const*,int*) ;

size_t
FUNC_2(Elftc_String_Table *VAR_0, const char *VAR_1)
{
 struct _Elftc_String_Table_Entry *VAR_2;
 ssize_t VAR_3;
 int VAR_4;

 VAR_2 = FUNC_1(VAR_0, VAR_1, &VAR_4);

 FUNC_0(VAR_4 >= 0 && VAR_4 < VAR_0->st_nbuckets);

 if (VAR_2 == ((void*)0) || (VAR_3 = VAR_2->ste_idx) < 0)
  return (0);

 return (VAR_3);
}
