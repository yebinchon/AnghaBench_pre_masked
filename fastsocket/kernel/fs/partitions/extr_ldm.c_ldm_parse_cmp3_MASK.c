
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vblk_comp {int type; void* chunksize; void* parent_id; void* children; int state; } ;
struct TYPE_2__ {struct vblk_comp comp; } ;
struct vblk {TYPE_1__ vblk; } ;


 int FUNC_0 (int) ;
 int const VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int const*) ;
 void* FUNC_2 (int const*) ;
 int FUNC_3 (int const*,int ,int) ;
 int FUNC_4 (int const*,int,int,int) ;

__attribute__((used)) static bool FUNC_5 (const u8 *VAR_2, int VAR_3, struct vblk *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 struct vblk_comp *VAR_13;

 FUNC_0 (!VAR_2 || !VAR_4);

 VAR_5 = FUNC_4 (VAR_2, VAR_3, 0x18, 0);
 VAR_6 = FUNC_4 (VAR_2, VAR_3, 0x18, VAR_5);
 VAR_7 = FUNC_4 (VAR_2, VAR_3, 0x18, VAR_6);
 VAR_8 = FUNC_4 (VAR_2, VAR_3, 0x1D, VAR_7);
 VAR_9 = FUNC_4 (VAR_2, VAR_3, 0x2D, VAR_8);

 if (VAR_2[0x12] & VAR_0) {
  VAR_10 = FUNC_4 (VAR_2, VAR_3, 0x2E, VAR_9);
  VAR_11 = FUNC_4 (VAR_2, VAR_3, 0x2E, VAR_10);
  VAR_12 = VAR_11;
 } else {
  VAR_10 = 0;
  VAR_11 = 0;
  VAR_12 = VAR_9;
 }
 if (VAR_12 < 0)
  return 0;

 VAR_12 += VAR_1;
 if (VAR_12 != FUNC_1(VAR_2 + 0x14))
  return 0;

 VAR_13 = &VAR_4->vblk.comp;
 FUNC_3 (VAR_2 + 0x18 + VAR_6, VAR_13->state,
  sizeof (VAR_13->state));
 VAR_13->type = VAR_2[0x18 + VAR_7];
 VAR_13->children = FUNC_2 (VAR_2 + 0x1D + VAR_7);
 VAR_13->parent_id = FUNC_2 (VAR_2 + 0x2D + VAR_8);
 VAR_13->chunksize = VAR_10 ? FUNC_2 (VAR_2+VAR_9+0x2E) : 0;

 return 1;
}
