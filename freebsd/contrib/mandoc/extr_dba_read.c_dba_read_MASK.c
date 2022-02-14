
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dbm_page {char* arch; char* file; char* name; char* sect; int desc; } ;
struct dbm_macro {int pp; int value; } ;
struct dba_array {int dummy; } ;
struct dba {int pages; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dba*,int,int ,int ) ;
 struct dba* FUNC_1 (int) ;
 int FUNC_2 (struct dba_array*,int ,char const*) ;
 struct dba_array* FUNC_3 (int ,char*,int ,char*,char) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 struct dbm_macro* FUNC_6 (int,int) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 () ;
 struct dbm_page* FUNC_9 (int) ;
 char* FUNC_10 (char const*,char) ;

struct dba *
FUNC_11(const char *VAR_5)
{
 struct dba *VAR_6;
 struct dba_array *VAR_7;
 struct dbm_page *VAR_8;
 struct dbm_macro *VAR_9;
 const char *VAR_10;
 int32_t VAR_11, VAR_12, VAR_13, VAR_14;

 if (FUNC_7(VAR_5) == -1)
  return ((void*)0);
 VAR_14 = FUNC_8();
 VAR_6 = FUNC_1(VAR_14 < 128 ? 128 : VAR_14);
 for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {
  VAR_8 = FUNC_9(VAR_12);
  VAR_7 = FUNC_3(VAR_6->pages, VAR_8->arch,
      VAR_8->desc, VAR_8->file + 1, *VAR_8->file);
  for (VAR_10 = VAR_8->name; *VAR_10 != '\0'; VAR_10 = FUNC_10(VAR_10, '\0') + 1)
   FUNC_2(VAR_7, VAR_2, VAR_10);
  for (VAR_10 = VAR_8->sect; *VAR_10 != '\0'; VAR_10 = FUNC_10(VAR_10, '\0') + 1)
   FUNC_2(VAR_7, VAR_3, VAR_10);
  if ((VAR_10 = VAR_8->arch) != ((void*)0))
   while (*(VAR_10 = FUNC_10(VAR_10, '\0') + 1) != '\0')
    FUNC_2(VAR_7, VAR_0, VAR_10);
  VAR_10 = VAR_8->file;
  while (*(VAR_10 = FUNC_10(VAR_10, '\0') + 1) != '\0')
   FUNC_2(VAR_7, VAR_1, VAR_10);
 }
 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  for (VAR_13 = 0; VAR_13 < FUNC_5(VAR_11); VAR_13++) {
   VAR_9 = FUNC_6(VAR_11, VAR_13);
   FUNC_0(VAR_6, VAR_11, VAR_9->value, VAR_9->pp);
  }
 }
 FUNC_4();
 return VAR_6;
}
