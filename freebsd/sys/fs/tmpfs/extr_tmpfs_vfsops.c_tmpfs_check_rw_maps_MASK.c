
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmpfs_check_rw_maps_arg {int found; } ;
struct mount {int dummy; } ;


 int FUNC_0 (struct mount*,int ,struct tmpfs_check_rw_maps_arg*) ;
 int VAR_0 ;

__attribute__((used)) static bool
FUNC_1(struct mount *VAR_1)
{
 struct tmpfs_check_rw_maps_arg VAR_2;

 VAR_2.found = 0;
 FUNC_0(VAR_1, VAR_0, &VAR_2);
 return (VAR_2.found);
}
