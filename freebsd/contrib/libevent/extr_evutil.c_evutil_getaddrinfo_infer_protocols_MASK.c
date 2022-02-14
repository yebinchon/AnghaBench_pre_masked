
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evutil_addrinfo {scalar_t__ ai_protocol; scalar_t__ ai_socktype; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_0(struct evutil_addrinfo *VAR_5)
{

 if (!VAR_5->ai_protocol && VAR_5->ai_socktype) {
  if (VAR_5->ai_socktype == VAR_3)
   VAR_5->ai_protocol = VAR_2;
  else if (VAR_5->ai_socktype == VAR_4)
   VAR_5->ai_protocol = VAR_1;
 }


 if (!VAR_5->ai_socktype && VAR_5->ai_protocol) {
  if (VAR_5->ai_protocol == VAR_2)
   VAR_5->ai_socktype = VAR_3;
  else if (VAR_5->ai_protocol == VAR_1)
   VAR_5->ai_socktype = VAR_4;




 }
}
