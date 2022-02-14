
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct nvlist_header {size_t nvlh_size; int nvlh_descriptors; int nvlh_flags; int nvlh_version; int nvlh_magic; } ;
struct TYPE_5__ {int nvl_flags; } ;
typedef TYPE_1__ nvlist_t ;
typedef int nvlhdr ;


 int FUNC_0 (TYPE_1__ const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char*,struct nvlist_header*,int) ;
 int FUNC_3 (TYPE_1__ const*) ;

__attribute__((used)) static unsigned char *
FUNC_4(const nvlist_t *VAR_3, unsigned char *VAR_4, size_t *VAR_5)
{
 struct nvlist_header VAR_6;

 FUNC_0(VAR_3);

 VAR_6.nvlh_magic = VAR_0;
 VAR_6.nvlh_version = VAR_1;
 VAR_6.nvlh_flags = VAR_3->nvl_flags;

 VAR_6.nvlh_flags |= VAR_2;

 VAR_6.nvlh_descriptors = FUNC_3(VAR_3);
 VAR_6.nvlh_size = *VAR_5 - sizeof(VAR_6);
 FUNC_1(*VAR_5 >= sizeof(VAR_6));
 FUNC_2(VAR_4, &VAR_6, sizeof(VAR_6));
 VAR_4 += sizeof(VAR_6);
 *VAR_5 -= sizeof(VAR_6);

 return (VAR_4);
}
