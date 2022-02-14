
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sc_pcminfo {struct sc_info* sc; } ;
struct sc_info {int dma_size; int period; } ;
struct sc_chinfo {int buffer; struct sc_pcminfo* parent; } ;
typedef int kobj_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static uint32_t
FUNC_2(kobj_t VAR_0, void *VAR_1, uint32_t VAR_2)
{
 struct sc_chinfo *VAR_3 = VAR_1;
 struct sc_pcminfo *VAR_4 = VAR_3->parent;
 struct sc_info *VAR_5 = VAR_4->sc;

 FUNC_1(VAR_3->buffer, VAR_5->dma_size / VAR_2, VAR_2);

 VAR_5->period = FUNC_0(VAR_3->buffer);
 return (VAR_5->period);
}
