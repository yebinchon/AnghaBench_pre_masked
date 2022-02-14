
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct g_raid_volume {int v_tr; int v_softc; } ;
typedef scalar_t__ off_t ;


 int FUNC_0 (int,int ,char*,unsigned long long,unsigned long long) ;
 int FUNC_1 (int ,void*,int ,scalar_t__,size_t) ;

__attribute__((used)) static int
FUNC_2(void *VAR_0,
    void *VAR_1, vm_offset_t VAR_2, off_t VAR_3, size_t VAR_4)
{
 struct g_raid_volume *VAR_5;
 int VAR_6;

 VAR_5 = (struct g_raid_volume *)VAR_0;
 FUNC_0(3, VAR_5->v_softc, "Dumping at off %llu len %llu.",
     (long long unsigned)VAR_3, (long long unsigned)VAR_4);

 VAR_6 = FUNC_1(VAR_5->v_tr,
     VAR_1, VAR_2, VAR_3, VAR_4);
 return (VAR_6);
}
