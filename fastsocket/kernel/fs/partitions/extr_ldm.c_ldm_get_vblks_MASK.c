
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int vblk_size; int vblk_offset; int last_vblk_seq; } ;
struct ldmdb {TYPE_1__ vm; } ;
struct block_device {int dummy; } ;
typedef int Sector ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int,int *) ;
 int FUNC_7 (int *,struct ldmdb*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int,struct ldmdb*) ;
 int FUNC_10 (int ) ;
 int * FUNC_11 (struct block_device*,scalar_t__,int *) ;

__attribute__((used)) static bool FUNC_12 (struct block_device *VAR_3, unsigned long VAR_4,
      struct ldmdb *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 u8 *VAR_13 = ((void*)0);
 Sector VAR_14;
 bool VAR_15 = 0;
 FUNC_1 (VAR_2);

 FUNC_0 (!VAR_3 || !VAR_5);

 VAR_6 = VAR_5->vm.vblk_size;
 VAR_7 = 512 / VAR_6;
 VAR_8 = VAR_5->vm.vblk_offset >> 9;
 VAR_9 = (VAR_6 * VAR_5->vm.last_vblk_seq) >> 9;

 for (VAR_10 = VAR_8; VAR_10 < VAR_9; VAR_10++) {
  VAR_13 = FUNC_11 (VAR_3, VAR_4 + VAR_1 + VAR_10, &VAR_14);
  if (!VAR_13) {
   FUNC_4 ("Disk read failed.");
   goto out;
  }

  for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++, VAR_13+=VAR_6) {
   if (VAR_0 != FUNC_3(VAR_13)) {
    FUNC_5 ("Expected to find a VBLK.");
    goto out;
   }

   VAR_12 = FUNC_2(VAR_13 + 0x0E);
   if (VAR_12 == 1) {
    if (!FUNC_9 (VAR_13, VAR_6, VAR_5))
     goto out;
   } else if (VAR_12 > 1) {
    if (!FUNC_6 (VAR_13, VAR_6, &VAR_2))
     goto out;
   }

  }
  FUNC_10 (VAR_14);
  VAR_13 = ((void*)0);
 }

 VAR_15 = FUNC_7 (&VAR_2, VAR_5);
out:
 if (VAR_13)
  FUNC_10 (VAR_14);
 FUNC_8 (&VAR_2);

 return VAR_15;
}
