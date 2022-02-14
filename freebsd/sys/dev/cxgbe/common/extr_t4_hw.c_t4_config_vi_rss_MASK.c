
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* secretkeyxor; void* secretkeyidx_pkd; void* defaultq_to_udpen; } ;
struct TYPE_4__ {TYPE_1__ basicvirtual; } ;
struct fw_rss_vi_config_cmd {TYPE_2__ u; void* retval_len16; void* op_to_viid; } ;
struct adapter {int dummy; } ;
typedef int c ;


 unsigned int FUNC_0 (struct fw_rss_vi_config_cmd) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;
 void* FUNC_5 (unsigned int) ;
 int FUNC_6 (struct fw_rss_vi_config_cmd*,int ,int) ;
 int FUNC_7 (struct adapter*,int,struct fw_rss_vi_config_cmd*,int,int *) ;

int FUNC_8(struct adapter *VAR_3, int VAR_4, unsigned int VAR_5,
       unsigned int VAR_6, unsigned int VAR_7, unsigned int VAR_8,
       unsigned int VAR_9)
{
 struct fw_rss_vi_config_cmd VAR_10;

 FUNC_6(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.op_to_viid = FUNC_5(FUNC_1(VAR_0) |
       VAR_1 | VAR_2 |
       FUNC_4(VAR_5));
 VAR_10.retval_len16 = FUNC_5(FUNC_0(VAR_10));
 VAR_10.u.basicvirtual.defaultq_to_udpen = FUNC_5(VAR_6 |
     FUNC_2(VAR_7));
 VAR_10.u.basicvirtual.secretkeyidx_pkd = FUNC_5(
     FUNC_3(VAR_8));
 VAR_10.u.basicvirtual.secretkeyxor = FUNC_5(VAR_9);

 return FUNC_7(VAR_3, VAR_4, &VAR_10, sizeof(VAR_10), ((void*)0));
}
