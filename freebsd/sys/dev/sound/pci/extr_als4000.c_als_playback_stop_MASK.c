
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int dummy; } ;
struct sc_chinfo {int dma_active; int format; struct sc_info* parent; } ;
struct playback_command {int dma_stop; } ;


 int FUNC_0 (struct sc_info*,int ) ;
 struct playback_command* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct sc_chinfo *VAR_0)
{
 const struct playback_command *VAR_1;
 struct sc_info *VAR_2 = VAR_0->parent;
 u_int32_t VAR_3;

 VAR_3 = VAR_0->dma_active;
 if (VAR_3) {
  VAR_1 = FUNC_1(VAR_0->format);
  FUNC_0(VAR_2, VAR_1->dma_stop);
 }
 VAR_0->dma_active = 0;
 return VAR_3;
}
