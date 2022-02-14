
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union key {int gid; } ;
struct group {int dummy; } ;
typedef int gid_t ;


 struct group* FUNC_0 (int ,union key) ;
 int VAR_0 ;

struct group *
FUNC_1(gid_t VAR_1)
{
 union key VAR_2;

 VAR_2.gid = VAR_1;
 return (FUNC_0(VAR_0, VAR_2));
}
