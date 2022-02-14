
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtoc_cchhb {int hh; int cc; int b; } ;
struct hd_geometry {int heads; int sectors; } ;
typedef int sector_t ;
typedef int __u16 ;



__attribute__((used)) static sector_t
FUNC_0 (struct vtoc_cchhb *VAR_0, struct hd_geometry *VAR_1) {

 sector_t VAR_2;
 __u16 VAR_3;


 VAR_2 = VAR_0->hh & 0xFFF0;
 VAR_2 <<= 12;
 VAR_2 |= VAR_0->cc;
 VAR_3 = VAR_0->hh & 0x000F;
 return VAR_2 * VAR_1->heads * VAR_1->sectors +
  VAR_3 * VAR_1->sectors +
  VAR_0->b;
}
