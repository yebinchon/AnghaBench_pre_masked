
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct mpt_softc {int reply_phys; int reply; int reply_dmap; int reply_dmat; int parent_dmat; int dev; int * request_pool; } ;
struct mpt_map_info {int phys; scalar_t__ error; struct mpt_softc* mpt; } ;
typedef int request_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mpt_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int ,int,int ,struct mpt_map_info*,int ) ;
 scalar_t__ FUNC_2 (int ,void**,int ,int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (size_t,int ,int) ;
 scalar_t__ FUNC_5 (struct mpt_softc*,int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *) ;
 int VAR_9 ;
 int FUNC_6 (struct mpt_softc*,char*,...) ;

__attribute__((used)) static int
FUNC_7(struct mpt_softc *VAR_10)
{
 size_t VAR_11;
 struct mpt_map_info VAR_12;


 if (VAR_10->reply_phys != 0) {
  return 0;
 }

 VAR_11 = sizeof (request_t) * FUNC_0(VAR_10);
 VAR_10->request_pool = (request_t *)FUNC_4(VAR_11, VAR_5, VAR_6|VAR_7);







 if (FUNC_5(VAR_10, FUNC_3(VAR_10->dev),
                  1, 0, VAR_1,
                 VAR_1, ((void*)0), ((void*)0),
                VAR_3,
                  VAR_4,
                 VAR_3, 0,
     &VAR_10->parent_dmat) != 0) {
  FUNC_6(VAR_10, "cannot create parent dma tag\n");
  return (1);
 }


 if (FUNC_5(VAR_10, VAR_10->parent_dmat, VAR_8, 0,
     VAR_2, VAR_1,
     ((void*)0), ((void*)0), 2 * VAR_8, 1, VAR_3, 0,
     &VAR_10->reply_dmat) != 0) {
  FUNC_6(VAR_10, "cannot create a dma tag for replies\n");
  return (1);
 }


 if (FUNC_2(VAR_10->reply_dmat, (void **)&VAR_10->reply,
     VAR_0, &VAR_10->reply_dmap) != 0) {
  FUNC_6(VAR_10, "cannot allocate %lu bytes of reply memory\n",
      (u_long) (2 * VAR_8));
  return (1);
 }

 VAR_12.mpt = VAR_10;
 VAR_12.error = 0;


 FUNC_1(VAR_10->reply_dmat, VAR_10->reply_dmap, VAR_10->reply,
     2 * VAR_8, VAR_9, &VAR_12, 0);

 if (VAR_12.error) {
  FUNC_6(VAR_10, "error %d loading dma map for DMA reply queue\n",
      VAR_12.error);
  return (1);
 }
 VAR_10->reply_phys = VAR_12.phys;

 return (0);
}
