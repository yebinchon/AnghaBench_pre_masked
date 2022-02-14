
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int hashvec; } ;
struct TYPE_4__ {TYPE_1__ hash; } ;
struct fw_vi_mac_cmd {TYPE_2__ u; void* freemacs_to_len16; void* op_to_viid; } ;
struct adapter {int dummy; } ;
typedef int c ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct fw_vi_mac_cmd*,int ,int) ;
 int FUNC_8 (struct adapter*,unsigned int,struct fw_vi_mac_cmd*,int,int *,int) ;

int FUNC_9(struct adapter *VAR_4, unsigned int VAR_5, unsigned int VAR_6,
       bool VAR_7, u64 VAR_8, bool VAR_9)
{
 struct fw_vi_mac_cmd VAR_10;
 u32 VAR_11;

 FUNC_7(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.op_to_viid = FUNC_5(FUNC_1(VAR_0) |
       VAR_2 | VAR_3 |
       FUNC_2(VAR_6));
 VAR_11 = FUNC_3(VAR_1) |
       FUNC_4(VAR_7) | FUNC_0(1);
 VAR_10.freemacs_to_len16 = FUNC_5(VAR_11);
 VAR_10.u.hash.hashvec = FUNC_6(VAR_8);
 return FUNC_8(VAR_4, VAR_5, &VAR_10, sizeof(VAR_10), ((void*)0), VAR_9);
}
