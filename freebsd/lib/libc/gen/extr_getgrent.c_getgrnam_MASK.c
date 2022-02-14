
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union key {char const* name; } ;
struct group {int dummy; } ;


 struct group* FUNC_0 (int ,union key) ;
 int VAR_0 ;

struct group *
FUNC_1(const char *VAR_1)
{
 union key VAR_2;

 VAR_2.name = VAR_1;
 return (FUNC_0(VAR_0, VAR_2));
}
