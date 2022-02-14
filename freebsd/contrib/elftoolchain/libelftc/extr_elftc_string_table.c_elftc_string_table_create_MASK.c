
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _Elftc_String_Table_Bucket {int dummy; } ;
struct _Elftc_String_Table {char* st_string_pool; int st_nbuckets; size_t st_string_pool_size; scalar_t__ st_len; int * st_buckets; } ;
typedef struct _Elftc_String_Table Elftc_String_Table ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct _Elftc_String_Table*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct _Elftc_String_Table*) ;
 void* FUNC_3 (size_t) ;

Elftc_String_Table *
FUNC_4(size_t VAR_3)
{
 struct _Elftc_String_Table *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 if (VAR_3 < VAR_0)
  VAR_3 = VAR_0;

 VAR_6 = VAR_3 / (VAR_1 *
     VAR_2);

 VAR_7 = sizeof(struct _Elftc_String_Table) +
     VAR_6 * sizeof(struct _Elftc_String_Table_Bucket);

 if ((VAR_4 = FUNC_3(VAR_7)) == ((void*)0))
  return (((void*)0));
 if ((VAR_4->st_string_pool = FUNC_3(VAR_3)) == ((void*)0)) {
  FUNC_2(VAR_4);
  return (((void*)0));
 }

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  FUNC_1(&VAR_4->st_buckets[VAR_5]);

 VAR_4->st_len = 0;
 VAR_4->st_nbuckets = VAR_6;
 VAR_4->st_string_pool_size = VAR_3;
 *VAR_4->st_string_pool = '\0';
 FUNC_0(VAR_4, 1);

 return (VAR_4);
}
