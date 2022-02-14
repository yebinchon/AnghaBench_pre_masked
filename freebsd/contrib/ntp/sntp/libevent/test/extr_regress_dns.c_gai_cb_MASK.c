
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gai_outcome {int err; struct evutil_addrinfo* ai; } ;
struct evutil_addrinfo {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_2(int VAR_2, struct evutil_addrinfo *VAR_3, void *VAR_4)
{
 struct gai_outcome *VAR_5 = VAR_4;
 VAR_5->err = VAR_2;
 VAR_5->ai = VAR_3;
 if (--VAR_1 <= 0 && VAR_0)
  FUNC_1(VAR_0, ((void*)0));
 if (VAR_1 < 900)
  FUNC_0(("Got an answer; expecting %d more.",
   VAR_1));
}
