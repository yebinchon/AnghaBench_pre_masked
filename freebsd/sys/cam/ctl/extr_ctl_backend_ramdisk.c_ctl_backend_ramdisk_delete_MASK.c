
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int u_int ;
struct ctl_be_ramdisk_lun {scalar_t__ pblockmul; } ;
struct ctl_be_lun {int pblockexp; int blocksize; struct ctl_be_ramdisk_lun* be_lun; } ;
typedef int off_t ;
typedef int getpage_op_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ctl_be_ramdisk_lun*,int) ;
 int * FUNC_1 (struct ctl_be_ramdisk_lun*,int,int ) ;
 int FUNC_2 (struct ctl_be_ramdisk_lun*,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct ctl_be_lun *VAR_5, off_t VAR_6, off_t VAR_7,
    int VAR_8)
{
 struct ctl_be_ramdisk_lun *VAR_9 = VAR_5->be_lun;
 uint8_t *VAR_10;
 uint64_t VAR_11, VAR_12;
 u_int VAR_13;
 getpage_op_t VAR_14 = VAR_8 ? VAR_0 : VAR_1;


 VAR_11 = VAR_6 >> VAR_5->pblockexp;
 VAR_13 = VAR_6 & ~(VAR_4 << VAR_5->pblockexp);
 if (VAR_13 != 0) {
  VAR_10 = FUNC_1(VAR_9, VAR_11, VAR_14);
  if (VAR_10 != VAR_3 && VAR_10 != VAR_2) {
   FUNC_3(VAR_10 + VAR_13 * VAR_5->blocksize, 0,
       FUNC_4(VAR_7, VAR_9->pblockmul - VAR_13) *
       VAR_5->blocksize);
  }
  VAR_11++;
 }


 VAR_12 = (VAR_6 + VAR_7) >> VAR_5->pblockexp;
 VAR_13 = (VAR_6 + VAR_7) & ~(VAR_4 << VAR_5->pblockexp);
 if (VAR_11 <= VAR_12 && VAR_13 != 0) {
  VAR_10 = FUNC_1(VAR_9, VAR_12, VAR_14);
  if (VAR_10 != VAR_3 && VAR_10 != VAR_2)
   FUNC_3(VAR_10, 0, VAR_13 * VAR_5->blocksize);
 }


 if (VAR_8) {
  for (; VAR_11 < VAR_12; VAR_11++)
   FUNC_0(VAR_9, VAR_11);
 } else {
  for (; VAR_11 < VAR_12; VAR_11++)
   FUNC_2(VAR_9, VAR_11);
 }
}
