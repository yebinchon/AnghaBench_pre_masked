
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_tnt_cache {int index; int tnt; } ;
struct pt_packet_tnt {unsigned long long bit_size; unsigned long long payload; } ;


 int FUNC_0 (struct pt_tnt_cache*) ;
 int FUNC_1 (struct pt_tnt_cache*,struct pt_packet_tnt*,int *) ;
 int FUNC_2 (int,int ) ;
 struct ptunit_result FUNC_3 () ;
 int FUNC_4 (int ,unsigned long long) ;

__attribute__((used)) static struct ptunit_result FUNC_5(void)
{
 struct pt_tnt_cache VAR_0;
 struct pt_packet_tnt VAR_1;
 int VAR_2;

 FUNC_0(&VAR_0);

 VAR_1.bit_size = 4ull;
 VAR_1.payload = 8ull;

 VAR_2 = FUNC_1(&VAR_0, &VAR_1, ((void*)0));
 FUNC_2(VAR_2, 0);
 FUNC_4(VAR_0.tnt, 8ull);
 FUNC_4(VAR_0.index, 1ull << 3);

 return FUNC_3();
}
