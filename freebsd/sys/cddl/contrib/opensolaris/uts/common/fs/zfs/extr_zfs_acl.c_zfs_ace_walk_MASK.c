
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_acl_t ;
typedef int zfs_ace_hdr_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int * FUNC_0 (int *,int *,scalar_t__*,int *,int *,int *) ;

__attribute__((used)) static uint64_t
FUNC_1(void *VAR_0, uint64_t VAR_1, int VAR_2,
    uint16_t *VAR_3, uint16_t *VAR_4, uint32_t *VAR_5)
{
 zfs_acl_t *VAR_6 = VAR_0;
 zfs_ace_hdr_t *VAR_7 = (zfs_ace_hdr_t *)(uintptr_t)VAR_1;
 uint64_t VAR_8;

 VAR_7 = FUNC_0(VAR_6, VAR_7, &VAR_8, VAR_5,
     VAR_3, VAR_4);
 return ((uint64_t)(uintptr_t)VAR_7);
}
