
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct search_state {struct search_domain* head; } ;
struct search_domain {int len; struct search_domain* next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char* const,char const* const,int const) ;
 scalar_t__ FUNC_2 (size_t const) ;
 size_t FUNC_3 (char const* const) ;

__attribute__((used)) static char *
FUNC_4(const struct search_state *const VAR_0, int VAR_1, const char *const VAR_2) {
 const size_t VAR_3 = FUNC_3(VAR_2);
 char VAR_4;
 struct search_domain *VAR_5;

 if (!VAR_3) return ((void*)0);
 VAR_4 = VAR_2[VAR_3 - 1] == '.' ? 0 : 1;

 for (VAR_5 = VAR_0->head; VAR_5; VAR_5 = VAR_5->next) {
  if (!VAR_1--) {


   const u8 *const VAR_6 = ((u8 *) VAR_5) + sizeof(struct search_domain);
   const int VAR_7 = VAR_5->len;
   char *const VAR_8 = (char *) FUNC_2(VAR_3 + VAR_4 + VAR_7 + 1);
   if (!VAR_8) return ((void*)0);
   FUNC_1(VAR_8, VAR_2, VAR_3);
   if (VAR_4) VAR_8[VAR_3] = '.';
   FUNC_1(VAR_8 + VAR_3 + VAR_4, VAR_6, VAR_7);
   VAR_8[VAR_3 + VAR_4 + VAR_7] = 0;
   return VAR_8;
  }
 }


 FUNC_0(0);
 return ((void*)0);
}
