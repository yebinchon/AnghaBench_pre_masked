
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hs20_osu_client {size_t server_dnsname_count; char** server_dnsname; } ;


 int VAR_0 ;
 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;
 int FUNC_2 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_3(struct hs20_osu_client *VAR_1,
           const char *VAR_2)
{
 size_t VAR_3, VAR_4, VAR_5;
 const char *VAR_6;

 VAR_3 = FUNC_0(VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_1->server_dnsname_count; VAR_5++) {
  FUNC_2(VAR_0,
      "Checking suffix match against server dNSName %s",
      VAR_1->server_dnsname[VAR_5]);
  VAR_6 = VAR_1->server_dnsname[VAR_5];
  VAR_4 = FUNC_0(VAR_6);

  if (VAR_3 > VAR_4)
   continue;

  if (FUNC_1(VAR_6 + VAR_4 - VAR_3, VAR_2, VAR_3) != 0)
   continue;

  if (VAR_3 == VAR_4)
   return 1;

  if (VAR_6[VAR_4 - VAR_3 - 1] == '.')
   return 1;


 }


 return 0;
}
