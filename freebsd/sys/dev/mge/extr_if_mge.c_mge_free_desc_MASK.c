
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct mge_softc {int mge_desc_dtag; } ;
struct mge_desc_wrapper {scalar_t__ desc_dmap; int mge_desc; int buffer; scalar_t__ buffer_dmap; } ;
typedef int bus_dma_tag_t ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct mge_softc *VAR_1, struct mge_desc_wrapper* VAR_2,
    uint32_t VAR_3, bus_dma_tag_t VAR_4, uint8_t VAR_5)
{
 struct mge_desc_wrapper *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {

  VAR_6 = &(VAR_2[VAR_7]);

  if (VAR_6->buffer_dmap) {
   if (VAR_5) {
    FUNC_1(VAR_4, VAR_6->buffer_dmap,
        VAR_0);
    FUNC_2(VAR_4, VAR_6->buffer_dmap);
   }
   FUNC_0(VAR_4, VAR_6->buffer_dmap);
   if (VAR_5)
    FUNC_4(VAR_6->buffer);
  }

  if (VAR_6->desc_dmap) {
   FUNC_1(VAR_1->mge_desc_dtag, VAR_6->desc_dmap,
       VAR_0);
   FUNC_2(VAR_1->mge_desc_dtag, VAR_6->desc_dmap);
   FUNC_3(VAR_1->mge_desc_dtag, VAR_6->mge_desc,
       VAR_6->desc_dmap);
  }
 }
}
