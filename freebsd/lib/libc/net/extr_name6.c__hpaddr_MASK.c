
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {char* h_name; int h_addrtype; char** h_addr_list; int h_length; int * h_aliases; } ;


 int FUNC_0 (int) ;
 struct hostent* FUNC_1 (struct hostent*,int*) ;

__attribute__((used)) static struct hostent *
FUNC_2(int VAR_0, const char *VAR_1, void *VAR_2, int *VAR_3)
{
 struct hostent *VAR_4, VAR_5;
 char *VAR_6[2];

 VAR_4 = &VAR_5;
 VAR_4->h_name = (char *)VAR_1;
 VAR_4->h_aliases = ((void*)0);
 VAR_4->h_addrtype = VAR_0;
 VAR_4->h_length = FUNC_0(VAR_0);
 VAR_4->h_addr_list = VAR_6;
 VAR_6[0] = (char *)VAR_2;
 VAR_6[1] = ((void*)0);
 return (FUNC_1(VAR_4, VAR_3));
}
