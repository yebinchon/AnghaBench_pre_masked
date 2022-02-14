
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct zfs_probe_args {int secsz; scalar_t__ fd; } ;


 int FUNC_0 (int *,void*,int,void*,size_t) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, void *VAR_1, size_t VAR_2, uint64_t VAR_3)
{
 struct zfs_probe_args *VAR_4;

 VAR_4 = (struct zfs_probe_args *)VAR_0;
 return (FUNC_0(((void*)0), (void *)(uintptr_t)VAR_4->fd,
     VAR_3 * VAR_4->secsz, VAR_1, VAR_2 * VAR_4->secsz));
}
