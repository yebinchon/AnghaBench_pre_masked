
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int qdcount; int ancount; int nscount; int arcount; } ;
struct dns_response {int * additional; TYPE_1__ header; int * authority; int * answer; int * query; } ;


 int VAR_0 ;
 struct dns_response* FUNC_0 (int,int) ;
 int FUNC_1 (struct dns_response*) ;
 int FUNC_2 (TYPE_1__*,int const*,int ) ;
 void* FUNC_3 (int) ;
 int * FUNC_4 (int const*,int,int const**,int) ;
 void* FUNC_5 (int const*,int,int const**,int) ;

__attribute__((used)) static struct dns_response *
FUNC_6(const u_char *VAR_1, int VAR_2)
{
 struct dns_response *VAR_3;
 const u_char *VAR_4;


 VAR_3 = FUNC_0(1, sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  return (((void*)0));


 VAR_4 = VAR_1;


 FUNC_2(&VAR_3->header, VAR_4, VAR_0);
 VAR_4 += VAR_0;


 VAR_3->header.qdcount = FUNC_3(VAR_3->header.qdcount);
 VAR_3->header.ancount = FUNC_3(VAR_3->header.ancount);
 VAR_3->header.nscount = FUNC_3(VAR_3->header.nscount);
 VAR_3->header.arcount = FUNC_3(VAR_3->header.arcount);


 if (VAR_3->header.qdcount < 1) {
  FUNC_1(VAR_3);
  return (((void*)0));
 }


 VAR_3->query = FUNC_4(VAR_1, VAR_2, &VAR_4,
     VAR_3->header.qdcount);
 if (VAR_3->header.qdcount && VAR_3->query == ((void*)0)) {
  FUNC_1(VAR_3);
  return (((void*)0));
 }


 VAR_3->answer = FUNC_5(VAR_1, VAR_2, &VAR_4,
     VAR_3->header.ancount);
 if (VAR_3->header.ancount && VAR_3->answer == ((void*)0)) {
  FUNC_1(VAR_3);
  return (((void*)0));
 }


 VAR_3->authority = FUNC_5(VAR_1, VAR_2, &VAR_4,
     VAR_3->header.nscount);
 if (VAR_3->header.nscount && VAR_3->authority == ((void*)0)) {
  FUNC_1(VAR_3);
  return (((void*)0));
 }


 VAR_3->additional = FUNC_5(VAR_1, VAR_2, &VAR_4,
     VAR_3->header.arcount);
 if (VAR_3->header.arcount && VAR_3->additional == ((void*)0)) {
  FUNC_1(VAR_3);
  return (((void*)0));
 }

 return (VAR_3);
}
