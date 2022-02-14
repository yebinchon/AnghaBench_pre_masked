
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_flags; int * ai_canonname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char const*) ;

__attribute__((used)) static int
FUNC_1(const struct addrinfo *VAR_2, struct addrinfo *VAR_3, const char *VAR_4)
{
 if ((VAR_2->ai_flags & VAR_0) != 0) {
  VAR_3->ai_canonname = FUNC_0(VAR_4);
  if (VAR_3->ai_canonname == ((void*)0))
   return VAR_1;
 }
 return 0;
}
