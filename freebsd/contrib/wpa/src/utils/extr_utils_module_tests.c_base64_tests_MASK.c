
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char* FUNC_0 (unsigned char const*,int,size_t*) ;
 unsigned char* FUNC_1 (unsigned char const*,int,size_t*) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_2 = 0;
 unsigned char *VAR_3;
 size_t VAR_4;

 FUNC_3(VAR_1, "base64 tests");

 VAR_3 = FUNC_1((const unsigned char *) "", ~0, &VAR_4);
 if (VAR_3) {
  VAR_2++;
  FUNC_2(VAR_3);
 }

 VAR_3 = FUNC_1((const unsigned char *) "=", 1, &VAR_4);
 if (!VAR_3 || VAR_4 != 5 || VAR_3[0] != 'P' || VAR_3[1] != 'Q' ||
     VAR_3[2] != '=' || VAR_3[3] != '=' || VAR_3[4] != '\n')
  VAR_2++;
 FUNC_2(VAR_3);

 VAR_3 = FUNC_1((const unsigned char *) "=", 1, ((void*)0));
 if (!VAR_3 || VAR_3[0] != 'P' || VAR_3[1] != 'Q' ||
     VAR_3[2] != '=' || VAR_3[3] != '=' || VAR_3[4] != '\n')
  VAR_2++;
 FUNC_2(VAR_3);

 VAR_3 = FUNC_0((const unsigned char *) "", 0, &VAR_4);
 if (VAR_3) {
  VAR_2++;
  FUNC_2(VAR_3);
 }

 VAR_3 = FUNC_0((const unsigned char *) "a", 1, &VAR_4);
 if (VAR_3) {
  VAR_2++;
  FUNC_2(VAR_3);
 }

 VAR_3 = FUNC_0((const unsigned char *) "====", 4, &VAR_4);
 if (VAR_3) {
  VAR_2++;
  FUNC_2(VAR_3);
 }

 VAR_3 = FUNC_0((const unsigned char *) "PQ==", 4, &VAR_4);
 if (!VAR_3 || VAR_4 != 1 || VAR_3[0] != '=')
  VAR_2++;
 FUNC_2(VAR_3);

 VAR_3 = FUNC_0((const unsigned char *) "P.Q-=!=*", 8, &VAR_4);
 if (!VAR_3 || VAR_4 != 1 || VAR_3[0] != '=')
  VAR_2++;
 FUNC_2(VAR_3);

 if (VAR_2) {
  FUNC_3(VAR_0, "%d base64 test(s) failed", VAR_2);
  return -1;
 }

 return 0;
}
