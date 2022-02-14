
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twa_softc {int dma_tag; int io_lock; int ioctl_map; int ioctl_tag; } ;
struct tw_osli_req_context {int flags; int real_length; int length; int * real_data; int * data; int dma_map; struct twa_softc* ctlr; } ;
typedef int TW_VOID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,struct twa_softc*,char*) ;

TW_VOID
FUNC_7(struct tw_osli_req_context *VAR_7)
{
 struct twa_softc *VAR_8 = VAR_7->ctlr;

 FUNC_6(10, VAR_8, "entered");


 if (VAR_7->data != ((void*)0)) {
  if (VAR_7->flags & VAR_6) {

   FUNC_4(VAR_8->io_lock);

   if (VAR_7->flags & VAR_4) {
    FUNC_1(VAR_8->ioctl_tag,
     VAR_8->ioctl_map, VAR_0);





    if (VAR_7->flags & VAR_3)
     FUNC_0(VAR_7->data, VAR_7->real_data,
      VAR_7->real_length);
   }

   if (VAR_7->flags & VAR_5)
    FUNC_1(VAR_8->ioctl_tag, VAR_8->ioctl_map,
     VAR_1);

   FUNC_2(VAR_8->ioctl_tag, VAR_8->ioctl_map);

   FUNC_5(VAR_8->io_lock);
  } else {
   if (VAR_7->flags & VAR_4) {
    FUNC_1(VAR_8->dma_tag,
     VAR_7->dma_map, VAR_0);





    if (VAR_7->flags & VAR_3)
     FUNC_0(VAR_7->data, VAR_7->real_data,
      VAR_7->real_length);
   }
   if (VAR_7->flags & VAR_5)
    FUNC_1(VAR_8->dma_tag, VAR_7->dma_map,
     VAR_1);

   FUNC_2(VAR_8->dma_tag, VAR_7->dma_map);
  }
 }


 if (VAR_7->flags & VAR_3) {
  FUNC_3(VAR_7->data, VAR_2);

  VAR_7->data = VAR_7->real_data;
  VAR_7->length = VAR_7->real_length;
 }
}
