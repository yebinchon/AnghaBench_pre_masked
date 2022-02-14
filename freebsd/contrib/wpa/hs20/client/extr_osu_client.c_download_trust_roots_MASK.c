
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hs20_osu_client {int dummy; } ;
typedef int fname ;


 int FUNC_0 (struct hs20_osu_client*,char const*,char*) ;
 int FUNC_1 (struct hs20_osu_client*,char const*,char*) ;
 int FUNC_2 (struct hs20_osu_client*,char const*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_7(struct hs20_osu_client *VAR_0,
    const char *VAR_1)
{
 char *VAR_2, *VAR_3;
 char VAR_4[300];
 int VAR_5, VAR_6;

 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2 == ((void*)0))
  return -1;
 VAR_3 = FUNC_5(VAR_2, '/');
 if (VAR_3 == ((void*)0)) {
  FUNC_3(VAR_2);
  return -1;
 }
 *VAR_3 = '\0';

 FUNC_6(VAR_4, sizeof(VAR_4), "%s/ca.pem", VAR_2);
 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_4);
 FUNC_6(VAR_4, sizeof(VAR_4), "%s/polupd-ca.pem", VAR_2);
 VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_4);
 if (VAR_5 == 0 && VAR_6 == -1)
  VAR_5 = -1;
 FUNC_6(VAR_4, sizeof(VAR_4), "%s/aaa-ca.pem", VAR_2);
 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_4);
 if (VAR_5 == 0 && VAR_6 == -1)
  VAR_5 = -1;

 FUNC_3(VAR_2);

 return VAR_5;
}
