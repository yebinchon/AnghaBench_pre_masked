
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_write_ctxt {int w_target_page; } ;
struct TYPE_3__ {int id_data; int id_count; } ;
struct TYPE_4__ {TYPE_1__ i_data; } ;
struct ocfs2_dinode {int i_dyn_features; TYPE_2__ id2; } ;
struct inode {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,void*,unsigned int) ;
 int FUNC_5 (int ,char*,unsigned long long,unsigned int,int ,int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct inode *VAR_1, loff_t VAR_2,
       unsigned VAR_3, unsigned *VAR_4,
       struct ocfs2_dinode *VAR_5,
       struct ocfs2_write_ctxt *VAR_6)
{
 void *VAR_7;

 if (FUNC_6(*VAR_4 < VAR_3)) {
  if (!FUNC_0(VAR_6->w_target_page)) {
   *VAR_4 = 0;
   return;
  }
 }

 VAR_7 = FUNC_1(VAR_6->w_target_page, VAR_0);
 FUNC_4(VAR_5->id2.i_data.id_data + VAR_2, VAR_7 + VAR_2, *VAR_4);
 FUNC_2(VAR_7, VAR_0);

 FUNC_5(0, "Data written to inode at offset %llu. "
      "id_count = %u, copied = %u, i_dyn_features = 0x%x\n",
      (unsigned long long)VAR_2, *VAR_4,
      FUNC_3(VAR_5->id2.i_data.id_count),
      FUNC_3(VAR_5->i_dyn_features));
}
