
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahd_softc {void* saved_dst_mode; void* saved_src_mode; void* dst_mode; void* src_mode; } ;
typedef void* ahd_mode ;



__attribute__((used)) static __inline void
FUNC_0(struct ahd_softc *VAR_0, ahd_mode VAR_1, ahd_mode VAR_2)
{
 VAR_0->src_mode = VAR_1;
 VAR_0->dst_mode = VAR_2;
 VAR_0->saved_src_mode = VAR_1;
 VAR_0->saved_dst_mode = VAR_2;
}
