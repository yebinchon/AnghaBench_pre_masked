
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_vf_acquire_sw_info {int driver_version; int os_type; } ;
struct ecore_hwfn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_0(struct ecore_hwfn *VAR_4,
 struct ecore_vf_acquire_sw_info *VAR_5)
{
 VAR_5->driver_version = (VAR_1 << 24) |
     (VAR_2 << 16) |
      VAR_0;
 VAR_5->os_type = VAR_3;

 return;
}
