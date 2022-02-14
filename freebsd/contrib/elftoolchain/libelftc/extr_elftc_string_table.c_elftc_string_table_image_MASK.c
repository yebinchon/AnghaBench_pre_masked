
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct _Elftc_String_Table_Entry {size_t ste_idx; } ;
struct _Elftc_String_Table_Bucket {int dummy; } ;
struct TYPE_7__ {int st_len; char const* st_string_pool; struct _Elftc_String_Table_Bucket* st_buckets; } ;
typedef TYPE_1__ Elftc_String_Table ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 size_t FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,size_t) ;
 int FUNC_3 (struct _Elftc_String_Table_Bucket*,struct _Elftc_String_Table_Entry*,int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 struct _Elftc_String_Table_Entry* FUNC_5 (TYPE_1__*,char*,int*) ;
 int FUNC_6 (struct _Elftc_String_Table_Entry*) ;
 int FUNC_7 (char*,char*,size_t) ;
 int VAR_2 ;
 int FUNC_8 (char*) ;

const char *
FUNC_9(Elftc_String_Table *VAR_3, size_t *VAR_4)
{
 char *VAR_5, *VAR_6, *VAR_7;
 struct _Elftc_String_Table_Entry *VAR_8;
 struct _Elftc_String_Table_Bucket *VAR_9;
 size_t VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14;






 if ((VAR_3->st_len & VAR_0) == 0) {
  if (VAR_4)
   *VAR_4 = FUNC_1(VAR_3);
  return (VAR_3->st_string_pool);
 }




 FUNC_4(*VAR_3->st_string_pool == '\0');

 VAR_13 = 1;
 VAR_7 = VAR_3->st_string_pool + FUNC_1(VAR_3);

 for (VAR_5 = VAR_6 = VAR_3->st_string_pool + 1;
      VAR_6 < VAR_7;
      VAR_6 += VAR_12, VAR_5 += VAR_10) {

  VAR_10 = 0;
  VAR_12 = FUNC_8(VAR_6) + 1;

  VAR_8 = FUNC_5(VAR_3, VAR_6,
      &VAR_14);
  VAR_9 = &VAR_3->st_buckets[VAR_14];

  FUNC_4(VAR_8 != ((void*)0));


  if (VAR_8->ste_idx < 0) {
   FUNC_3(VAR_9, VAR_8, VAR_1,
       VAR_2);
   FUNC_6(VAR_8);
   continue;
  }


  VAR_11 = VAR_13;
  VAR_13 += VAR_12;
  VAR_10 = VAR_12;

  if (VAR_5 == VAR_6)
   continue;

  FUNC_7(VAR_5, VAR_6, VAR_10);


  VAR_8->ste_idx = VAR_11;
 }

 FUNC_0(VAR_3);
 FUNC_2(VAR_3, VAR_13);

 if (VAR_4)
  *VAR_4 = VAR_13;

 return (VAR_3->st_string_pool);
}
