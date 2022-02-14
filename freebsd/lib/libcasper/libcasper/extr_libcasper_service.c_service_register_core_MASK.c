
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service_connection {int dummy; } ;
struct casper_service {int cs_service; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 struct service_connection* FUNC_2 (int ,int,int *) ;
 struct casper_service* FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(int VAR_3)
{
 struct casper_service *VAR_4;
 struct service_connection *VAR_5;

 VAR_4 = FUNC_3(VAR_0, VAR_2,
     VAR_1, 0);
 VAR_5 = FUNC_2(VAR_4->cs_service, VAR_3, ((void*)0));
 if (VAR_5 == ((void*)0)) {
  FUNC_1(VAR_3);
  FUNC_0();
 }
}
