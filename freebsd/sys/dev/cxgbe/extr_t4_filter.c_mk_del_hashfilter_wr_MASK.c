
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_request_hdr {int dummy; } ;
struct ulp_txpkt {int dummy; } ;


 int FUNC_0 (struct work_request_hdr*,int,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 struct ulp_txpkt* FUNC_2 (struct ulp_txpkt*,int) ;
 struct ulp_txpkt* FUNC_3 (struct ulp_txpkt*,int) ;
 struct ulp_txpkt* FUNC_4 (struct ulp_txpkt*,int ,int ,int ,int,int ) ;

__attribute__((used)) static void
FUNC_5(int VAR_2, struct work_request_hdr *VAR_3, int VAR_4, int VAR_5)
{
 struct ulp_txpkt *VAR_6;

 FUNC_0(VAR_3, VAR_4, 0, 0);
 VAR_6 = (struct ulp_txpkt *)(VAR_3 + 1);
 VAR_6 = FUNC_4(VAR_6, VAR_1,
     FUNC_1(VAR_0), FUNC_1(VAR_5), VAR_2, 0);
 VAR_6 = FUNC_2(VAR_6, VAR_2);
 VAR_6 = FUNC_3(VAR_6, VAR_2);
}
