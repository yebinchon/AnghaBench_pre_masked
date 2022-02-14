
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ioprio; scalar_t__ sector; int type; } ;
struct vtblk_request {int vbr_ack; struct bio* vbr_bp; TYPE_1__ vbr_hdr; } ;
struct vtblk_softc {struct vtblk_request vtblk_dump_request; } ;
struct bio {int bio_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct vtblk_softc*,struct vtblk_request*) ;

__attribute__((used)) static int
FUNC_2(struct vtblk_softc *VAR_2)
{
 struct bio VAR_3;
 struct vtblk_request *VAR_4;

 VAR_4 = &VAR_2->vtblk_dump_request;
 VAR_4->vbr_ack = -1;
 VAR_4->vbr_hdr.type = VAR_1;
 VAR_4->vbr_hdr.ioprio = 1;
 VAR_4->vbr_hdr.sector = 0;

 VAR_4->vbr_bp = &VAR_3;
 FUNC_0(&VAR_3);

 VAR_3.bio_cmd = VAR_0;

 return (FUNC_1(VAR_2, VAR_4));
}
