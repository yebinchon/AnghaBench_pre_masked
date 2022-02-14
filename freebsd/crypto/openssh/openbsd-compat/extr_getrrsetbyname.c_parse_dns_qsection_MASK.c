
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct dns_query {void* class; void* type; int * name; struct dns_query* next; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int const*) ;
 struct dns_query* FUNC_1 (int,int) ;
 int FUNC_2 (int const*,int const*,int const*,char*,int) ;
 int FUNC_3 (struct dns_query*) ;
 int * FUNC_4 (char*) ;

__attribute__((used)) static struct dns_query *
FUNC_5(const u_char *VAR_2, int VAR_3, const u_char **VAR_4, int VAR_5)
{
 struct dns_query *VAR_6, *VAR_7, *VAR_8;
 int VAR_9, VAR_10;
 char VAR_11[VAR_1];

 for (VAR_9 = 1, VAR_6 = ((void*)0), VAR_8 = ((void*)0); VAR_9 <= VAR_5; VAR_9++, VAR_8 = VAR_7) {


  VAR_7 = FUNC_1(1, sizeof(struct dns_query));
  if (VAR_7 == ((void*)0)) {
   FUNC_3(VAR_6);
   return (((void*)0));
  }
  if (VAR_6 == ((void*)0))
   VAR_6 = VAR_7;
  if (VAR_8 != ((void*)0))
   VAR_8->next = VAR_7;


  VAR_10 = FUNC_2(VAR_2, VAR_2 + VAR_3, *VAR_4, VAR_11,
      sizeof(VAR_11));
  if (VAR_10 < 0) {
   FUNC_3(VAR_6);
   return (((void*)0));
  }
  VAR_7->name = FUNC_4(VAR_11);
  if (VAR_7->name == ((void*)0)) {
   FUNC_3(VAR_6);
   return (((void*)0));
  }
  *VAR_4 += VAR_10;


  VAR_7->type = FUNC_0(*VAR_4);
  *VAR_4 += VAR_0;


  VAR_7->class = FUNC_0(*VAR_4);
  *VAR_4 += VAR_0;
 }

 return (VAR_6);
}
