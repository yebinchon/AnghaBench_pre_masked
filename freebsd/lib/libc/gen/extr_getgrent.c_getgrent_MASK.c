
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union key {scalar_t__ gid; } ;
struct group {int dummy; } ;


 struct group* FUNC_0 (int ,union key) ;
 int VAR_0 ;

struct group *
FUNC_1(void)
{
 union key VAR_1;

 VAR_1.gid = 0;
 return (FUNC_0(VAR_0, VAR_1));
}
