
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name_cache {int dummy; } ;
struct group {int gr_name; } ;
typedef scalar_t__ id_t ;
typedef int gid_t ;


 struct group* FUNC_0 (int ) ;
 char const* FUNC_1 (int ) ;

__attribute__((used)) static const char *
FUNC_2(struct name_cache *VAR_0, id_t VAR_1)
{
 struct group *VAR_2;
 (void)VAR_0;

 VAR_2 = FUNC_0((gid_t)VAR_1);

 if (VAR_2 == ((void*)0))
  return (((void*)0));

 return FUNC_1(VAR_2->gr_name);
}
