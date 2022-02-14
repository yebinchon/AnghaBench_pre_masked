
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vtballoon_softc {int vtballoon_deflate_vq; int vtballoon_inflate_vq; int vtballoon_td; int * vtballoon_page_frames; int vtballoon_pages; int vtballoon_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vtballoon_softc*,int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 struct vtballoon_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,struct vtballoon_softc*,int *,int *,int ,int ,char*) ;
 int * FUNC_6 (int,int ,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct vtballoon_softc*) ;
 int FUNC_11 (struct vtballoon_softc*) ;
 int FUNC_12 (int ) ;
 int VAR_6 ;
 int FUNC_13 (struct vtballoon_softc*) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_14(device_t VAR_8)
{
 struct vtballoon_softc *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(VAR_8);
 VAR_9->vtballoon_dev = VAR_8;

 FUNC_1(VAR_9, FUNC_2(VAR_8));
 FUNC_0(&VAR_9->vtballoon_pages);

 FUNC_10(VAR_9);

 FUNC_7(VAR_8, VAR_6);
 FUNC_13(VAR_9);

 VAR_9->vtballoon_page_frames = FUNC_6(VAR_5 *
     sizeof(uint32_t), VAR_2, VAR_3 | VAR_4);
 if (VAR_9->vtballoon_page_frames == ((void*)0)) {
  VAR_10 = VAR_0;
  FUNC_4(VAR_8,
      "cannot allocate page frame request array\n");
  goto fail;
 }

 VAR_10 = FUNC_11(VAR_9);
 if (VAR_10) {
  FUNC_4(VAR_8, "cannot allocate virtqueues\n");
  goto fail;
 }

 VAR_10 = FUNC_8(VAR_8, VAR_1);
 if (VAR_10) {
  FUNC_4(VAR_8, "cannot setup virtqueue interrupts\n");
  goto fail;
 }

 VAR_10 = FUNC_5(VAR_7, VAR_9, ((void*)0), &VAR_9->vtballoon_td,
     0, 0, "virtio_balloon");
 if (VAR_10) {
  FUNC_4(VAR_8, "cannot create balloon kthread\n");
  goto fail;
 }

 FUNC_9(VAR_9->vtballoon_inflate_vq);
 FUNC_9(VAR_9->vtballoon_deflate_vq);

fail:
 if (VAR_10)
  FUNC_12(VAR_8);

 return (VAR_10);
}
