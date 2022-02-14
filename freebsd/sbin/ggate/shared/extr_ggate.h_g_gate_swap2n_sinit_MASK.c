
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_gate_sinit {int gs_error; int gs_sectorsize; int gs_mediasize; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static __inline void
FUNC_3(struct g_gate_sinit *VAR_0)
{


 VAR_0->gs_mediasize = FUNC_2(VAR_0->gs_mediasize);
 VAR_0->gs_sectorsize = FUNC_1(VAR_0->gs_sectorsize);
 VAR_0->gs_error = FUNC_0(VAR_0->gs_error);
}
