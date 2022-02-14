
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vtballoon_softc {int vtballoon_page_frames; } ;
typedef void virtqueue ;
struct sglist_seg {int dummy; } ;
struct sglist {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct vtballoon_softc*) ;
 int FUNC_2 (struct vtballoon_softc*) ;
 int FUNC_3 (struct vtballoon_softc*) ;
 int FUNC_4 (struct vtballoon_softc*,int ,int ,char*,int ) ;
 int FUNC_5 (struct sglist*,int ,int) ;
 int FUNC_6 (struct sglist*,int,struct sglist_seg*) ;
 void* FUNC_7 (void*,int *) ;
 int FUNC_8 (void*,void*,struct sglist*,int,int ) ;
 int FUNC_9 (void*) ;

__attribute__((used)) static void
FUNC_10(struct vtballoon_softc *VAR_0, struct virtqueue *VAR_1,
    int VAR_2)
{
 struct sglist VAR_3;
 struct sglist_seg VAR_4[1];
 void *VAR_5;
 int VAR_6;

 FUNC_6(&VAR_3, 1, VAR_4);

 VAR_6 = FUNC_5(&VAR_3, VAR_0->vtballoon_page_frames,
     VAR_2 * sizeof(uint32_t));
 FUNC_0(VAR_6 == 0, ("error adding page frames to sglist"));

 VAR_6 = FUNC_8(VAR_1, VAR_1, &VAR_3, 1, 0);
 FUNC_0(VAR_6 == 0, ("error enqueuing page frames to virtqueue"));
 FUNC_9(VAR_1);





 FUNC_1(VAR_0);
 while ((VAR_5 = FUNC_7(VAR_1, ((void*)0))) == ((void*)0))
  FUNC_4(VAR_0, FUNC_2(VAR_0), 0, "vtbspf", 0);
 FUNC_3(VAR_0);

 FUNC_0(VAR_5 == VAR_1, ("unexpected balloon operation response"));
}
