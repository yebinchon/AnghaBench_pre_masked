
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf; } ;
struct TYPE_4__ {int vol_id; int ubi_num; } ;
struct ubifs_info {int bottom_up_buf; int sbuf; int ileb_buf; TYPE_1__ bu; int mst_node; int rcvrd_mst_node; int cbuf; scalar_t__ bgt; int infos_list; TYPE_2__ vi; } ;


 int FUNC_0 (struct ubifs_info*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct ubifs_info*) ;
 int FUNC_3 (struct ubifs_info*) ;
 int FUNC_4 (struct ubifs_info*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct ubifs_info*) ;
 int VAR_0 ;
 int FUNC_11 (struct ubifs_info*,int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(struct ubifs_info *VAR_1)
{
 FUNC_1("un-mounting UBI device %d, volume %d", VAR_1->vi.ubi_num,
  VAR_1->vi.vol_id);

 FUNC_0(VAR_1);
 FUNC_8(&VAR_0);
 FUNC_7(&VAR_1->infos_list);
 FUNC_9(&VAR_0);

 if (VAR_1->bgt)
  FUNC_6(VAR_1->bgt);

 FUNC_2(VAR_1);
 FUNC_4(VAR_1);
 FUNC_3(VAR_1);
 FUNC_11(VAR_1, 0);

 FUNC_5(VAR_1->cbuf);
 FUNC_5(VAR_1->rcvrd_mst_node);
 FUNC_5(VAR_1->mst_node);
 FUNC_5(VAR_1->bu.buf);
 FUNC_12(VAR_1->ileb_buf);
 FUNC_12(VAR_1->sbuf);
 FUNC_5(VAR_1->bottom_up_buf);
 FUNC_10(VAR_1);
}
