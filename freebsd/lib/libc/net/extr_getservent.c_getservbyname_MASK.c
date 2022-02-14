
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {int dummy; } ;
struct key {char const* name; char const* proto; } ;


 struct servent* FUNC_0 (int ,struct key) ;
 int VAR_0 ;

struct servent *
FUNC_1(const char *VAR_1, const char *VAR_2)
{
 struct key VAR_3;

 VAR_3.name = VAR_1;
 VAR_3.proto = VAR_2;

 return (FUNC_0(VAR_0, VAR_3));
}
