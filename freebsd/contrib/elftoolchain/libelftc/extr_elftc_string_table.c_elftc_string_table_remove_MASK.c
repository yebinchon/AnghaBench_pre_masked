
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _Elftc_String_Table_Entry {scalar_t__ ste_idx; } ;
typedef scalar_t__ ssize_t ;
typedef int Elftc_String_Table ;


 int VAR_0 ;
 size_t FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 struct _Elftc_String_Table_Entry* FUNC_3 (int *,char const*,int *) ;

int
FUNC_4(Elftc_String_Table *VAR_2, const char *VAR_3)
{
 struct _Elftc_String_Table_Entry *VAR_4;
 ssize_t VAR_5;

 VAR_4 = FUNC_3(VAR_2, VAR_3, ((void*)0));

 if (VAR_4 == ((void*)0) || (VAR_5 = VAR_4->ste_idx) < 0)
  return (VAR_0);

 FUNC_2(VAR_5 > 0 && (size_t)VAR_5 < FUNC_0(VAR_2));

 VAR_4->ste_idx = -VAR_5;

 FUNC_1(VAR_2);

 return (VAR_1);
}
