
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {scalar_t__ h_length; char* h_name; int h_addrtype; scalar_t__* h_addr_list; scalar_t__* h_aliases; } ;
typedef int socklen_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int const,scalar_t__,char*,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(const struct hostent *VAR_3)
{
 size_t VAR_4;
 char VAR_5[1024];
 const int VAR_6 = VAR_3->h_length == VAR_2 ? VAR_0 : VAR_1;

 FUNC_1("name=%s, length=%d, addrtype=%d, aliases=[",
     VAR_3->h_name, VAR_3->h_length, VAR_3->h_addrtype);

 for (VAR_4 = 0; VAR_3->h_aliases[VAR_4]; VAR_4++)
  FUNC_1("%s%s", VAR_4 == 0 ? "" : " ", VAR_3->h_aliases[VAR_4]);

 FUNC_1("] addr_list=[");

 for (VAR_4 = 0; VAR_3->h_addr_list[VAR_4]; VAR_4++)
  FUNC_1("%s%s", VAR_4 == 0 ? "" : " ", FUNC_0(VAR_6,
      VAR_3->h_addr_list[VAR_4], VAR_5, (socklen_t)sizeof(VAR_5)));

 FUNC_1("]\n");
}
