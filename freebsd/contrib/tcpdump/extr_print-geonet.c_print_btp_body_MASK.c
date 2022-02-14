
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 char* FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_2(netdissect_options *VAR_1,
               const u_char *VAR_2)
{
 int VAR_3;
 int VAR_4;
 const char *VAR_5;


 VAR_3 = VAR_2[0];
 VAR_4 = VAR_2[1];
 VAR_5 = FUNC_1(VAR_0, "unknown (%u)", VAR_4);

 FUNC_0((VAR_1, "; ItsPduHeader v:%d t:%d-%s", VAR_3, VAR_4, VAR_5));
}
