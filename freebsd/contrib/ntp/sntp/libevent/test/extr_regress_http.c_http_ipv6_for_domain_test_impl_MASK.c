
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdns_base {int dummy; } ;
struct basic_test_data {int base; } ;
typedef int ev_uint16_t ;
typedef int address ;


 int FUNC_0 (struct evdns_base*,int ) ;
 int FUNC_1 (struct evdns_base*,char*) ;
 struct evdns_base* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int,char*,int ) ;
 int FUNC_4 (void*,int ,char*,struct evdns_base*,int,int) ;
 int VAR_0 ;
 int FUNC_5 () ;
 struct evdns_base* FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (struct evdns_base*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_1, int VAR_2)
{
 struct basic_test_data *VAR_3 = VAR_1;
 struct evdns_base *VAR_4 = ((void*)0);
 ev_uint16_t VAR_5 = 0;
 char VAR_6[64];

 FUNC_7(FUNC_6(VAR_3->base, &VAR_5, VAR_0));

 VAR_4 = FUNC_2(VAR_3->base, 0 );
 FUNC_7(VAR_4);



 FUNC_3(VAR_6, sizeof(VAR_6), "127.0.0.1:%d", VAR_5);
 FUNC_1(VAR_4, VAR_6);

 FUNC_4(VAR_1, 0 , "localhost", VAR_4,
  1 , VAR_2);

 end:
 if (VAR_4)
  FUNC_0(VAR_4, 0);
 FUNC_5();
}
