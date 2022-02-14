
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int trimmed ;
struct in_addr {int dummy; } ;
struct hostent {int ** h_addr_list; int h_name; } ;
typedef int lookup ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct hostent* FUNC_0 (char const*,int,int ) ;
 struct hostent* FUNC_1 (char*) ;
 char* FUNC_2 (struct in_addr const) ;
 int FUNC_3 (int *,struct in_addr const*,int) ;
 int FUNC_4 (char*,int ,int) ;
 size_t FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,size_t) ;
 int FUNC_7 (char*,size_t) ;

int
FUNC_8(char *VAR_6, size_t VAR_7, const struct in_addr *VAR_8)
{
 char VAR_9[VAR_5];
 int VAR_10;
 struct hostent *VAR_11;

 VAR_10 = VAR_3;
 VAR_11 = FUNC_0((const char *)VAR_8, sizeof(*VAR_8), VAR_0);

 if (VAR_11 != ((void*)0)) {
  FUNC_4(VAR_9, VAR_11->h_name, sizeof(VAR_9));
  FUNC_7(VAR_9, FUNC_5(VAR_9));
  if (FUNC_5(VAR_9) <= VAR_7) {
   char VAR_12[VAR_5];

   FUNC_4(VAR_12, VAR_11->h_name, sizeof(VAR_12));
   VAR_11 = FUNC_1(VAR_12);
   if (VAR_11 == ((void*)0))
    VAR_10 = VAR_4;
   else for (; ; VAR_11->h_addr_list++) {
    if (*VAR_11->h_addr_list == ((void*)0)) {
     VAR_10 = VAR_2;
     break;
    }
    if (!FUNC_3(*VAR_11->h_addr_list, VAR_8, sizeof(*VAR_8))) {
     FUNC_6(VAR_6, VAR_9, VAR_7);
     return VAR_1;
    }
   }
  }
 }

 FUNC_6(VAR_6, FUNC_2(*VAR_8), VAR_7);

 return VAR_10;
}
