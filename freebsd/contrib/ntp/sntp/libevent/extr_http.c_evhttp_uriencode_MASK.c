
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
typedef scalar_t__ ev_ssize_t ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (struct evbuffer*,char const*,int) ;
 int FUNC_2 (struct evbuffer*,char*,unsigned char) ;
 int FUNC_3 (struct evbuffer*) ;
 int FUNC_4 (struct evbuffer*) ;
 struct evbuffer* FUNC_5 () ;
 int FUNC_6 (struct evbuffer*,char*,int ) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (char const*) ;

char *
FUNC_9(const char *VAR_0, ev_ssize_t VAR_1, int VAR_2)
{
 struct evbuffer *VAR_3 = FUNC_5();
 const char *VAR_4, *VAR_5;
 char *VAR_6;

 if (VAR_3 == ((void*)0))
  return (((void*)0));

 if (VAR_1 >= 0)
  VAR_5 = VAR_0+VAR_1;
 else
  VAR_5 = VAR_0+FUNC_8(VAR_0);

 for (VAR_4 = VAR_0; VAR_4 < VAR_5; VAR_4++) {
  if (FUNC_0(*VAR_4)) {
   FUNC_1(VAR_3, VAR_4, 1);
  } else if (*VAR_4 == ' ' && VAR_2) {
   FUNC_1(VAR_3, "+", 1);
  } else {
   FUNC_2(VAR_3, "%%%02X", (unsigned char)(*VAR_4));
  }
 }
 FUNC_1(VAR_3, "", 1);
 VAR_6 = FUNC_7(FUNC_4(VAR_3));
 if (VAR_6)
  FUNC_6(VAR_3, VAR_6, FUNC_4(VAR_3));
 FUNC_3(VAR_3);

 return (VAR_6);
}
