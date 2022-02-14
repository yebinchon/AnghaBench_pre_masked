
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {char** h_addr_list; int h_length; char** h_aliases; char* h_name; int h_addrtype; } ;


 scalar_t__ FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

int
FUNC_4(struct hostent *VAR_2, struct hostent *VAR_3, char *VAR_4,
    size_t VAR_5)
{
 char *VAR_6;
 char **VAR_7;
 int VAR_8, VAR_9;
 int VAR_10, VAR_11;


 VAR_10 = 2;
 VAR_11 = (char *)FUNC_0(VAR_4) - VAR_4;
 for (VAR_8 = 0; VAR_2->h_addr_list[VAR_8]; VAR_8++, VAR_10++) {
  VAR_11 += VAR_2->h_length;
 }
 for (VAR_8 = 0; VAR_2->h_aliases[VAR_8]; VAR_8++, VAR_10++) {
  VAR_11 += FUNC_3(VAR_2->h_aliases[VAR_8]) + 1;
 }
 VAR_11 += FUNC_3(VAR_2->h_name) + 1;
 VAR_11 += VAR_10 * sizeof(char*);

 if (VAR_11 > VAR_5) {
  VAR_1 = VAR_0;
  return (-1);
 }


 VAR_3->h_addrtype = VAR_2->h_addrtype;
 VAR_9 = VAR_3->h_length = VAR_2->h_length;

 VAR_7 = (char **)FUNC_0(VAR_4);
 VAR_6 = (char *)FUNC_0(VAR_4) + VAR_10 * sizeof(char *);


 VAR_3->h_addr_list = VAR_7;
 for (VAR_8 = 0; VAR_2->h_addr_list[VAR_8]; VAR_8++ , VAR_7++) {
  FUNC_1(VAR_6, VAR_2->h_addr_list[VAR_8], VAR_9);
  VAR_3->h_addr_list[VAR_8] = VAR_6;
  VAR_6 += VAR_9;
 }
 VAR_3->h_addr_list[VAR_8] = ((void*)0);
 VAR_7++;


 VAR_9 = FUNC_3(VAR_2->h_name) + 1;
 FUNC_2(VAR_6, VAR_2->h_name);
 VAR_3->h_name = VAR_6;
 VAR_6 += VAR_9;


 VAR_3->h_aliases = VAR_7;
 for (VAR_8 = 0 ; VAR_2->h_aliases[VAR_8]; VAR_8++) {
  VAR_9 = FUNC_3(VAR_2->h_aliases[VAR_8]) + 1;
  FUNC_2(VAR_6, VAR_2->h_aliases[VAR_8]);
  VAR_3->h_aliases[VAR_8] = VAR_6;
  VAR_6 += VAR_9;
 }
 VAR_3->h_aliases[VAR_8] = ((void*)0);

 return (0);
}
