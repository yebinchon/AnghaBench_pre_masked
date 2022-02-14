
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wint_t ;
typedef int wchar_t ;
struct parse {char* next; } ;
struct cname {int code; int * name; } ;
typedef int mbstate_t ;
typedef int mbs ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char) ;
 int FUNC_3 (int ) ;
 struct cname* VAR_3 ;
 size_t FUNC_4 (int *,char const*,size_t,int *) ;
 int FUNC_5 (int *,int ,int) ;
 size_t FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,char const*,size_t) ;

__attribute__((used)) static wint_t
FUNC_8(struct parse *VAR_4,
 wint_t VAR_5)
{
 const char *VAR_6 = VAR_4->next;
 struct cname *VAR_7;
 mbstate_t VAR_8;
 wchar_t VAR_9;
 size_t VAR_10, VAR_11;

 while (FUNC_0() && !FUNC_2(VAR_5, ']'))
  FUNC_1();
 if (!FUNC_0()) {
  FUNC_3(VAR_0);
  return(0);
 }
 VAR_11 = VAR_4->next - VAR_6;
 for (VAR_7 = VAR_3; VAR_7->name != ((void*)0); VAR_7++)
  if (FUNC_7(VAR_7->name, VAR_6, VAR_11) == 0 && FUNC_6(VAR_7->name) == VAR_11)
   return(VAR_7->code);
 FUNC_5(&VAR_8, 0, sizeof(VAR_8));
 if ((VAR_10 = FUNC_4(&VAR_9, VAR_6, VAR_11, &VAR_8)) == VAR_11)
  return (VAR_9);
 else if (VAR_10 == (size_t)-1 || VAR_10 == (size_t)-2)
  FUNC_3(VAR_2);
 else
  FUNC_3(VAR_1);
 return(0);
}
