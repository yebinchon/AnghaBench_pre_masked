
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {char* h_name; char** h_aliases; int h_length; char** h_addr_list; int h_addrtype; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static struct hostent *
FUNC_5(struct hostent *VAR_1, int *VAR_2)
{
 struct hostent *VAR_3;
 char *VAR_4, **VAR_5;
 int VAR_6, VAR_7;
 int VAR_8 = 0, VAR_9 = 0;
 int VAR_10;
 int VAR_11;

 if (VAR_1 == ((void*)0))
  return VAR_1;


 VAR_6 = sizeof(struct hostent);
 if (VAR_1->h_name != ((void*)0))
  VAR_6 += FUNC_4(VAR_1->h_name) + 1;
 if ((VAR_5 = VAR_1->h_aliases) != ((void*)0)) {
  for (VAR_11 = 0; *VAR_5 != ((void*)0); VAR_11++, VAR_5++) {
   if (**VAR_5 != '\0') {
    VAR_6 += FUNC_4(*VAR_5) + 1;
    VAR_8++;
   }
  }
 }

 VAR_6 = FUNC_0(VAR_6);
 VAR_10 = VAR_6;
 VAR_6 += sizeof(char *) * (VAR_8 + 1);
 VAR_7 = FUNC_0(VAR_1->h_length);
 if ((VAR_5 = VAR_1->h_addr_list) != ((void*)0)) {
  while (*VAR_5++ != ((void*)0))
   VAR_9++;
 }
 VAR_6 += VAR_7 * VAR_9;
 VAR_6 += sizeof(char *) * (VAR_9 + 1);


 if ((VAR_3 = (struct hostent *)FUNC_1(VAR_6)) == ((void*)0)) {
  *VAR_2 = VAR_0;
  return ((void*)0);
 }
 VAR_4 = (char *)&VAR_3[1];
 if (VAR_1->h_name != ((void*)0)) {
  VAR_3->h_name = VAR_4;
  FUNC_3(VAR_4, VAR_1->h_name);
  VAR_4 += FUNC_4(VAR_4) + 1;
 } else
  VAR_3->h_name = ((void*)0);
 VAR_3->h_aliases = (char **)((char *)VAR_3 + VAR_10);
 if ((VAR_5 = VAR_1->h_aliases) != ((void*)0)) {
  for (VAR_11 = 0; *VAR_5 != ((void*)0); VAR_5++) {
   if (**VAR_5 != '\0') {
    VAR_3->h_aliases[VAR_11++] = VAR_4;
    FUNC_3(VAR_4, *VAR_5);
    VAR_4 += FUNC_4(VAR_4) + 1;
   }
  }
 }
 VAR_3->h_aliases[VAR_8] = ((void*)0);
 VAR_4 = (char *)&VAR_3->h_aliases[VAR_8 + 1];
 VAR_3->h_addrtype = VAR_1->h_addrtype;
 VAR_3->h_length = VAR_1->h_length;
 VAR_3->h_addr_list = (char **)VAR_4;
 if ((VAR_5 = VAR_1->h_addr_list) != ((void*)0)) {
  VAR_4 = (char *)&VAR_3->h_addr_list[VAR_9 + 1];
  for (VAR_11 = 0; *VAR_5 != ((void*)0); VAR_5++) {
   VAR_3->h_addr_list[VAR_11++] = VAR_4;
   FUNC_2(VAR_4, *VAR_5, VAR_1->h_length);
   VAR_4 += VAR_7;
  }
 }
 VAR_3->h_addr_list[VAR_9] = ((void*)0);
 return VAR_3;
}
