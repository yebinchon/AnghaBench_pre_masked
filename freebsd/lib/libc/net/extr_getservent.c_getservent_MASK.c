
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {int dummy; } ;
struct key {scalar_t__ port; int * proto; } ;


 struct servent* FUNC_0 (int ,struct key) ;
 int VAR_0 ;

struct servent *
FUNC_1(void)
{
 struct key VAR_1;

 VAR_1.proto = ((void*)0);
 VAR_1.port = 0;

 return (FUNC_0(VAR_0, VAR_1));
}
