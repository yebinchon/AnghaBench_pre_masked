
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct _Elftc_String_Table_Entry {size_t ste_idx; } ;
typedef size_t ssize_t ;
struct TYPE_5__ {int st_nbuckets; int * st_buckets; } ;
typedef TYPE_1__ Elftc_String_Table ;


 int FUNC_0 (int *,struct _Elftc_String_Table_Entry*,int ) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (TYPE_1__*,char const*) ;
 struct _Elftc_String_Table_Entry* FUNC_3 (TYPE_1__*,char const*,int*) ;
 int FUNC_4 (struct _Elftc_String_Table_Entry*) ;
 struct _Elftc_String_Table_Entry* FUNC_5 (int) ;
 int VAR_0 ;

size_t
FUNC_6(Elftc_String_Table *VAR_1, const char *VAR_2)
{
 struct _Elftc_String_Table_Entry *VAR_3;
 ssize_t VAR_4;
 int VAR_5;

 VAR_5 = 0;

 VAR_3 = FUNC_3(VAR_1, VAR_2, &VAR_5);

 FUNC_1(VAR_5 >= 0 && VAR_5 < VAR_1->st_nbuckets);

 if (VAR_3 == ((void*)0)) {
  if ((VAR_3 = FUNC_5(sizeof(*VAR_3))) == ((void*)0))
   return (0);
  if ((VAR_3->ste_idx = FUNC_2(VAR_1,
      VAR_2)) == 0) {
   FUNC_4(VAR_3);
   return (0);
  }

  FUNC_0(&VAR_1->st_buckets[VAR_5], VAR_3, VAR_0);
 }

 VAR_4 = VAR_3->ste_idx;
 if (VAR_4 < 0)
  VAR_3->ste_idx = VAR_4 = -VAR_4;

 return (VAR_4);
}
