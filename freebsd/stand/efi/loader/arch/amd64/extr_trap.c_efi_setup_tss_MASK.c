
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct system_segment_descriptor {int sd_lolimit; int sd_lobase; int sd_p; int sd_hilimit; int sd_hibase; scalar_t__ sd_xx2; scalar_t__ sd_mbz; scalar_t__ sd_xx1; scalar_t__ sd_xx0; scalar_t__ sd_gran; scalar_t__ sd_dpl; int sd_type; } ;
struct region_descriptor {scalar_t__ rd_base; } ;
struct amd64tss {int dummy; } ;
struct TYPE_2__ {int (* AllocatePages ) (int ,int ,int ,int*) ;} ;
typedef int EFI_STATUS ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct amd64tss*,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,int ,int ,int*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_6(struct region_descriptor *VAR_5, uint32_t VAR_6,
    struct amd64tss **VAR_7)
{
 EFI_STATUS VAR_8;
 struct system_segment_descriptor *VAR_9;

 VAR_9 = (struct system_segment_descriptor *)(VAR_5->rd_base +
     (VAR_6 << 3));
 VAR_8 = VAR_1->AllocatePages(VAR_0, VAR_2,
     FUNC_2(sizeof(struct amd64tss)), &VAR_4);
 if (FUNC_0(VAR_8)) {
  FUNC_4("efi_setup_tss: AllocatePages tss error %lu\n",
      FUNC_1(VAR_8));
  return (0);
 }
 *VAR_7 = (struct amd64tss *)VAR_4;
 FUNC_3(*VAR_7, sizeof(**VAR_7));
 VAR_9->sd_lolimit = sizeof(struct amd64tss);
 VAR_9->sd_lobase = VAR_4;
 VAR_9->sd_type = VAR_3;
 VAR_9->sd_dpl = 0;
 VAR_9->sd_p = 1;
 VAR_9->sd_hilimit = sizeof(struct amd64tss) >> 16;
 VAR_9->sd_gran = 0;
 VAR_9->sd_hibase = VAR_4 >> 24;
 VAR_9->sd_xx0 = 0;
 VAR_9->sd_xx1 = 0;
 VAR_9->sd_mbz = 0;
 VAR_9->sd_xx2 = 0;
 return (1);
}
