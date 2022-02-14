
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct evdns_base {int dummy; } ;


 int FUNC_0 (struct evdns_base*) ;
 int FUNC_1 (struct evdns_base*,char*) ;
 int FUNC_2 (char const*,char**,size_t*,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_6(struct evdns_base *VAR_0, const char *VAR_1)
{
 char *VAR_2=((void*)0), *VAR_3, *VAR_4;
 size_t VAR_5;
 int VAR_6=0;

 FUNC_0(VAR_0);

 if (VAR_1 == ((void*)0) ||
     (VAR_6 = FUNC_2(VAR_1, &VAR_2, &VAR_5, 0)) < 0) {
  char VAR_7[64];
  FUNC_5(VAR_7, "127.0.0.1   localhost", sizeof(VAR_7));
  FUNC_1(VAR_0, VAR_7);
  FUNC_5(VAR_7, "::1   localhost", sizeof(VAR_7));
  FUNC_1(VAR_0, VAR_7);
  return VAR_6 ? -1 : 0;
 }



 VAR_3 = VAR_2;
 for (;;) {
  VAR_4 = FUNC_4(VAR_3, '\n');

  if (VAR_4) {
   *VAR_4 = '\0';
   FUNC_1(VAR_0, VAR_3);
   VAR_3 = VAR_4+1;
  } else {
   FUNC_1(VAR_0, VAR_3);
   break;
  }
 }

 FUNC_3(VAR_2);
 return 0;
}
