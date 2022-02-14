
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct dpp_configuration {int ssid_len; scalar_t__ ssid; } ;
struct dpp_authentication {char* discovery_override; } ;
typedef int ssid ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char const*,int ) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,char*) ;
 struct wpabuf* FUNC_3 (int) ;
 int FUNC_4 (struct wpabuf*,char*) ;
 int FUNC_5 (struct wpabuf*,char) ;

__attribute__((used)) static struct wpabuf *
FUNC_6(struct dpp_authentication *VAR_1,
       struct dpp_configuration *VAR_2, size_t VAR_3)
{
 struct wpabuf *VAR_4;
 char VAR_5[6 * sizeof(VAR_2->ssid) + 1];






 VAR_4 = FUNC_3(200 + VAR_3);
 if (!VAR_4)
  return ((void*)0);
 FUNC_4(VAR_4, "{\"wi-fi_tech\":\"infra\",\"discovery\":");
 FUNC_4(VAR_4, "{\"ssid\":\"");
 FUNC_0(VAR_5, sizeof(VAR_5),
      (const char *) VAR_2->ssid, VAR_2->ssid_len);
 FUNC_4(VAR_4, VAR_5);
 FUNC_4(VAR_4, "\"},");

 return VAR_4;
}
