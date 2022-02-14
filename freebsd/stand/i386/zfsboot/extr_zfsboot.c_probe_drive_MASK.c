
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uuid_t ;
struct TYPE_3__ {scalar_t__ start; scalar_t__ size; unsigned int slice; int part; int unit; } ;
struct zfsdsk {int * gdev; TYPE_1__ dsk; } ;
struct gpt_hdr {int hdr_lba_self; int hdr_revision; int hdr_entsz; scalar_t__ hdr_lba_table; unsigned int hdr_entries; int * hdr_sig; } ;
struct gpt_ent {scalar_t__ ent_lba_start; scalar_t__ ent_lba_end; int ent_type; } ;
struct dos_partition {scalar_t__ dp_start; scalar_t__ dp_size; int dp_typ; } ;
typedef int hdr ;
typedef scalar_t__ daddr_t ;
struct TYPE_4__ {char* secbuf; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 unsigned int VAR_4 ;
 struct zfsdsk* FUNC_0 (struct zfsdsk*) ;
 TYPE_2__* VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_1__*,char*,scalar_t__,int) ;
 scalar_t__ FUNC_2 (struct zfsdsk*) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 void* FUNC_5 (int ,struct zfsdsk*,scalar_t__,char*,...) ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (int *,int *,int) ;
 int FUNC_7 (struct gpt_hdr*,char*,int) ;
 scalar_t__ FUNC_8 (int ,struct zfsdsk*,int *) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_9(struct zfsdsk *VAR_10)
{
    struct dos_partition *VAR_11;
    char *VAR_12;
    unsigned VAR_13;
    VAR_12 = VAR_5->secbuf;
    VAR_10->dsk.start = 0;
    if (FUNC_1(&VAR_10->dsk, VAR_12, VAR_1, 1))
 return;
    VAR_11 = (void *)(VAR_12 + VAR_2);

    for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
 if (!VAR_11[VAR_13].dp_typ)
     continue;
 VAR_10->dsk.start = VAR_11[VAR_13].dp_start;
 VAR_10->dsk.size = VAR_11[VAR_13].dp_size;
 VAR_10->dsk.slice = VAR_13 + 1;
 if (FUNC_8(VAR_9, VAR_10, ((void*)0)) == 0) {
     VAR_10 = FUNC_0(VAR_10);
 }
    }
}
