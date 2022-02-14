
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vmsegdesc ;
typedef int uint64_t ;
typedef void* uint32_t ;
struct vmctx {int fd; } ;
struct TYPE_2__ {void* access; void* limit; int base; } ;
struct vm_seg_desc {int cpuid; int regnum; TYPE_1__ desc; } ;


 int VAR_0 ;
 int FUNC_0 (struct vm_seg_desc*,int) ;
 int FUNC_1 (int ,int ,struct vm_seg_desc*) ;

int
FUNC_2(struct vmctx *VAR_1, int VAR_2, int VAR_3,
     uint64_t VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
 int VAR_7;
 struct vm_seg_desc VAR_8;

 FUNC_0(&VAR_8, sizeof(VAR_8));
 VAR_8.cpuid = VAR_2;
 VAR_8.regnum = VAR_3;
 VAR_8.desc.base = VAR_4;
 VAR_8.desc.limit = VAR_5;
 VAR_8.desc.access = VAR_6;

 VAR_7 = FUNC_1(VAR_1->fd, VAR_0, &VAR_8);
 return (VAR_7);
}
