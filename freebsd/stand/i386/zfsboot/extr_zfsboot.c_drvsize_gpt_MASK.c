
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct gpt_hdr {int hdr_lba_self; int hdr_revision; int hdr_entsz; scalar_t__ hdr_lba_alt; int hdr_sig; } ;
struct gpt_ent {int dummy; } ;
struct dsk {int dummy; } ;
typedef int hdr ;
struct TYPE_2__ {char* secbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (struct dsk*,char*,int,int) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct gpt_hdr*,char*,int) ;

__attribute__((used)) static uint64_t
FUNC_3(struct dsk *VAR_3)
{
 return (0);

}
