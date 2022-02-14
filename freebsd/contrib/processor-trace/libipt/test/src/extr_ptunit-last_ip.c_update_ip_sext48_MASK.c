
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ptunit_result {int dummy; } ;
struct pt_packet_ip {int ip; int ipc; } ;
struct pt_last_ip {int ip; int have_ip; int suppressed; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_last_ip*,struct pt_packet_ip*,int *) ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static struct ptunit_result FUNC_4(uint32_t VAR_1)
{
 struct pt_last_ip VAR_2;
 struct pt_packet_ip VAR_3;
 int VAR_4;

 VAR_2.ip = 0x7fffffffffffffffull;
 VAR_2.have_ip = VAR_1;
 VAR_2.suppressed = 0;

 VAR_3.ipc = VAR_0;
 VAR_3.ip = 0xff00000000ffull;

 VAR_4 = FUNC_0(&VAR_2, &VAR_3, ((void*)0));
 FUNC_1(VAR_4, 0);
 FUNC_3(VAR_2.ip, 0xffffff00000000ffull);
 FUNC_3(VAR_2.have_ip, 1);
 FUNC_3(VAR_2.suppressed, 0);

 return FUNC_2();
}
