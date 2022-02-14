
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vmdb {int vblk_offset; int vblk_size; int last_vblk_seq; } ;
struct tocblock {int bitmap1_size; } ;
struct ldmdb {struct tocblock toc; struct vmdb vm; } ;
struct block_device {int dummy; } ;
typedef int Sector ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *,struct vmdb*) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (struct block_device*,scalar_t__,int *) ;

__attribute__((used)) static bool FUNC_7 (struct block_device *VAR_1, unsigned long VAR_2,
          struct ldmdb *VAR_3)
{
 Sector VAR_4;
 u8 *VAR_5;
 bool VAR_6 = 0;
 struct vmdb *VAR_7;
 struct tocblock *VAR_8;

 FUNC_0 (!VAR_1 || !VAR_3);

 VAR_7 = &VAR_3->vm;
 VAR_8 = &VAR_3->toc;

 VAR_5 = FUNC_6 (VAR_1, VAR_2 + VAR_0, &VAR_4);
 if (!VAR_5) {
  FUNC_2 ("Disk read failed.");
  return 0;
 }

 if (!FUNC_4 (VAR_5, VAR_7))
  goto out;


 if (FUNC_1(VAR_5 + 0x10) != 0x01) {
  FUNC_2 ("Database is not in a consistent state.  Aborting.");
  goto out;
 }

 if (VAR_7->vblk_offset != 512)
  FUNC_3 ("VBLKs start at offset 0x%04x.", VAR_7->vblk_offset);





 if ((VAR_7->vblk_size * VAR_7->last_vblk_seq) > (VAR_8->bitmap1_size << 9)) {
  FUNC_2 ("VMDB exceeds allowed size specified by TOCBLOCK.  "
    "Database is corrupt.  Aborting.");
  goto out;
 }

 VAR_6 = 1;
out:
 FUNC_5 (VAR_4);
 return VAR_6;
}
