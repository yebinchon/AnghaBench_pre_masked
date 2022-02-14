
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vr_rxdesc {struct vr_desc* desc; } ;
struct vr_desc {void* vr_status; void* vr_ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static __inline void
FUNC_1(struct vr_rxdesc *VAR_3)
{
 struct vr_desc *VAR_4;

 VAR_4 = VAR_3->desc;
 VAR_4->vr_ctl = FUNC_0(VAR_1 | (VAR_0 - sizeof(uint64_t)));
 VAR_4->vr_status = FUNC_0(VAR_2);
}
