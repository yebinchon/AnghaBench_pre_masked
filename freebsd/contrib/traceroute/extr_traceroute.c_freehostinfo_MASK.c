
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostinfo {char* name; scalar_t__ addrs; } ;


 int FUNC_0 (char*) ;

void
FUNC_1(register struct hostinfo *VAR_0)
{
 if (VAR_0->name != ((void*)0)) {
  FUNC_0(VAR_0->name);
  VAR_0->name = ((void*)0);
 }
 FUNC_0((char *)VAR_0->addrs);
 FUNC_0((char *)VAR_0);
}
