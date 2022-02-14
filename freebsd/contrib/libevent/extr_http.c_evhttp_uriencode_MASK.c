
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
typedef scalar_t__ ev_ssize_t ;


 scalar_t__ FUNC_0 (char const) ;
 size_t VAR_0 ;
 int FUNC_1 (struct evbuffer*,char const*,int) ;
 int FUNC_2 (struct evbuffer*,char*,unsigned char) ;
 int FUNC_3 (struct evbuffer*) ;
 int FUNC_4 (struct evbuffer*) ;
 struct evbuffer* FUNC_5 () ;
 int FUNC_6 (struct evbuffer*,char*,int ) ;
 char* FUNC_7 (int ) ;
 size_t FUNC_8 (char const*) ;

char *
FUNC_9(const char *VAR_1, ev_ssize_t VAR_2, int VAR_3)
{
 struct evbuffer *VAR_4 = FUNC_5();
 const char *VAR_5, *VAR_6;
 char *VAR_7;

 if (VAR_4 == ((void*)0)) {
  return (((void*)0));
 }


 if (VAR_2 >= 0) {
  if (VAR_1 + VAR_2 < VAR_1) {
   return (((void*)0));
  }

  VAR_6 = VAR_1 + VAR_2;
 } else {
  size_t VAR_8 = FUNC_8(VAR_1);

  if (VAR_8 >= VAR_0) {

   return (((void*)0));
  }

  if (VAR_1 + VAR_8 < VAR_1) {
   return (((void*)0));
  }

  VAR_6 = VAR_1 + VAR_8;
 }

 for (VAR_5 = VAR_1; VAR_5 < VAR_6; VAR_5++) {
  if (FUNC_0(*VAR_5)) {
   FUNC_1(VAR_4, VAR_5, 1);
  } else if (*VAR_5 == ' ' && VAR_3) {
   FUNC_1(VAR_4, "+", 1);
  } else {
   FUNC_2(VAR_4, "%%%02X", (unsigned char)(*VAR_5));
  }
 }

 FUNC_1(VAR_4, "", 1);
 VAR_7 = FUNC_7(FUNC_4(VAR_4));

 if (VAR_7)
  FUNC_6(VAR_4, VAR_7, FUNC_4(VAR_4));

 FUNC_3(VAR_4);

 return (VAR_7);
}
