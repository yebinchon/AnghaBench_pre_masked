
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in_addr {int s_addr; } ;
struct evdns_server_request {int nquestions; TYPE_1__** questions; } ;
struct TYPE_2__ {int type; int dns_question_class; char* name; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct evdns_server_request*,char const*,int,int *,int) ;
 int FUNC_1 (struct evdns_server_request*,char const*,int,char*,int) ;
 int FUNC_2 (struct evdns_server_request*,int *,char const*,char*,int) ;
 scalar_t__ FUNC_3 (struct evdns_server_request*) ;
 int FUNC_4 (struct evdns_server_request*,int ) ;
 int FUNC_5 (char const*,char const*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static void
FUNC_8(struct evdns_server_request *VAR_5, void *VAR_6)
{
 int VAR_7, VAR_8;
 const char VAR_9[] = "11.11.168.192.in-addr.arpa";
 const char VAR_10[] =
     "f.e.f.e." "0.0.0.0." "0.0.0.0." "1.1.1.1."
     "a.a.a.a." "0.0.0.0." "0.0.0.0." "0.f.f.f.ip6.arpa";

 for (VAR_7 = 0; VAR_7 < VAR_5->nquestions; ++VAR_7) {
  const int VAR_11 = VAR_5->questions[VAR_7]->type;
  const int VAR_12 = VAR_5->questions[VAR_7]->dns_question_class;
  const char *VAR_13 = VAR_5->questions[VAR_7]->name;

  struct in_addr VAR_14;
  VAR_14.s_addr = FUNC_6(0xc0a80b0bUL);
  if (VAR_11 == VAR_1 &&
      VAR_12 == VAR_0 &&
      !FUNC_5(VAR_13, "zz.example.com")) {
   VAR_8 = FUNC_0(VAR_5, VAR_13,
       1, &VAR_14.s_addr, 12345);
   if (VAR_8<0)
    VAR_4 = 0;
  } else if (VAR_11 == VAR_2 &&
      VAR_12 == VAR_0 &&
      !FUNC_5(VAR_13, "zz.example.com")) {
   char VAR_15[17] = "abcdefghijklmnop";
   VAR_8 = FUNC_1(VAR_5,
       VAR_13, 1, VAR_15, 123);
   if (VAR_8<0)
    VAR_4 = 0;
  } else if (VAR_11 == VAR_3 &&
      VAR_12 == VAR_0 &&
      !FUNC_5(VAR_13, VAR_9)) {
   VAR_8 = FUNC_2(VAR_5, ((void*)0),
       VAR_13, "ZZ.EXAMPLE.COM", 54321);
   if (VAR_8<0)
    VAR_4 = 0;
  } else if (VAR_11 == VAR_3 &&
      VAR_12 == VAR_0 &&
      !FUNC_5(VAR_13, VAR_10)){
   VAR_8 = FUNC_2(VAR_5, ((void*)0),
       VAR_13,
       "ZZ-INET6.EXAMPLE.COM", 54322);
   if (VAR_8<0)
    VAR_4 = 0;
  } else if (VAR_11 == VAR_1 &&
      VAR_12 == VAR_0 &&
      !FUNC_5(VAR_13, "drop.example.com")) {
   if (FUNC_3(VAR_5)<0)
    VAR_4 = 0;
   return;
  } else {
   FUNC_7("Unexpected question %d %d \"%s\" ",
       VAR_11, VAR_12, VAR_13);
   VAR_4 = 0;
  }
 }
 VAR_8 = FUNC_4(VAR_5, 0);
 if (VAR_8<0) {
  FUNC_7("Couldn't send reply. ");
  VAR_4 = 0;
 }
}
