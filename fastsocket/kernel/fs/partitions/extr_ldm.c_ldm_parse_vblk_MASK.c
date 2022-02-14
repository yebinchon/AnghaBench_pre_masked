
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vblk {int flags; int type; scalar_t__ obj_id; int name; } ;


 int FUNC_0 (int) ;







 int FUNC_1 (char*,unsigned long long,int) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int const*) ;
 int FUNC_4 (int const*,int ,int) ;
 int FUNC_5 (int const*,int,struct vblk*) ;
 int FUNC_6 (int const*,int,struct vblk*) ;
 int FUNC_7 (int const*,int,struct vblk*) ;
 int FUNC_8 (int const*,int,struct vblk*) ;
 int FUNC_9 (int const*,int,struct vblk*) ;
 int FUNC_10 (int const*,int,struct vblk*) ;
 int FUNC_11 (int const*,int,struct vblk*) ;
 int FUNC_12 (int const*,int,int,int ) ;

__attribute__((used)) static bool FUNC_13 (const u8 *VAR_0, int VAR_1, struct vblk *VAR_2)
{
 bool VAR_3 = 0;
 int VAR_4;

 FUNC_0 (!VAR_0 || !VAR_2);

 VAR_4 = FUNC_12 (VAR_0, VAR_1, 0x18, 0);
 if (VAR_4 < 0) {
  FUNC_2 ("VBLK header is corrupt.");
  return 0;
 }

 VAR_2->flags = VAR_0[0x12];
 VAR_2->type = VAR_0[0x13];
 VAR_2->obj_id = FUNC_3 (VAR_0 + 0x18);
 FUNC_4 (VAR_0+0x18+VAR_4, VAR_2->name, sizeof (VAR_2->name));

 switch (VAR_2->type) {
  case 134: VAR_3 = FUNC_5 (VAR_0, VAR_1, VAR_2); break;
  case 131: VAR_3 = FUNC_8 (VAR_0, VAR_1, VAR_2); break;
  case 130: VAR_3 = FUNC_9 (VAR_0, VAR_1, VAR_2); break;
  case 133: VAR_3 = FUNC_6 (VAR_0, VAR_1, VAR_2); break;
  case 132: VAR_3 = FUNC_7 (VAR_0, VAR_1, VAR_2); break;
  case 129: VAR_3 = FUNC_10 (VAR_0, VAR_1, VAR_2); break;
  case 128: VAR_3 = FUNC_11 (VAR_0, VAR_1, VAR_2); break;
 }

 if (VAR_3)
  FUNC_1 ("Parsed VBLK 0x%llx (type: 0x%02x) ok.",
    (unsigned long long) VAR_2->obj_id, VAR_2->type);
 else
  FUNC_2 ("Failed to parse VBLK 0x%llx (type: 0x%02x).",
   (unsigned long long) VAR_2->obj_id, VAR_2->type);

 return VAR_3;
}
