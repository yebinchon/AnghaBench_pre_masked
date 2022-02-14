
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ioprio; int sector; int type; } ;
struct vtblk_request {int vbr_ack; struct bio* vbr_bp; TYPE_1__ vbr_hdr; } ;
struct vtblk_softc {struct vtblk_request vtblk_dump_request; } ;
struct bio {size_t bio_bcount; void* bio_data; int bio_cmd; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct vtblk_softc*,struct vtblk_request*) ;

__attribute__((used)) static int
FUNC_2(struct vtblk_softc *VAR_2, void *VAR_3, off_t VAR_4,
    size_t VAR_5)
{
 struct bio VAR_6;
 struct vtblk_request *VAR_7;

 VAR_7 = &VAR_2->vtblk_dump_request;
 VAR_7->vbr_ack = -1;
 VAR_7->vbr_hdr.type = VAR_1;
 VAR_7->vbr_hdr.ioprio = 1;
 VAR_7->vbr_hdr.sector = VAR_4 / 512;

 VAR_7->vbr_bp = &VAR_6;
 FUNC_0(&VAR_6);

 VAR_6.bio_cmd = VAR_0;
 VAR_6.bio_data = VAR_3;
 VAR_6.bio_bcount = VAR_5;

 return (FUNC_1(VAR_2, VAR_7));
}
