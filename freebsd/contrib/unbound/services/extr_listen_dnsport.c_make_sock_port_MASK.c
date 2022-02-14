
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int dummy; } ;
typedef int p ;
typedef int newif ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int,char const*,char const*,struct addrinfo*,int,int*,size_t,size_t,int*,int,int,int,int) ;
 char* FUNC_2 (char const*,char) ;
 int FUNC_3 (char*,char const*,int) ;
 size_t FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(int VAR_0, const char* VAR_1, const char* VAR_2,
 struct addrinfo *VAR_3, int VAR_4, int* VAR_5, size_t VAR_6, size_t VAR_7,
 int* VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
 char* VAR_13 = FUNC_2(VAR_1, '@');
 if(VAR_13) {

  char VAR_14[16];
  char VAR_15[128];
  if((size_t)(VAR_13-VAR_1) >= sizeof(VAR_15)) {
   FUNC_0("ifname too long: %s", VAR_1);
   *VAR_5 = 0;
   return -1;
  }
  if(FUNC_4(VAR_13+1) >= sizeof(VAR_14)) {
   FUNC_0("portnumber too long: %s", VAR_1);
   *VAR_5 = 0;
   return -1;
  }
  (void)FUNC_3(VAR_15, VAR_1, sizeof(VAR_15));
  VAR_15[VAR_13-VAR_1] = 0;
  (void)FUNC_3(VAR_14, VAR_13+1, sizeof(VAR_14));
  VAR_14[FUNC_4(VAR_13+1)]=0;
  return FUNC_1(VAR_0, VAR_15, VAR_14, VAR_3, VAR_4, VAR_5,
   VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
 }
 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
  VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
}
