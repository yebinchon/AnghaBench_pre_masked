
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_ctx {int link_watchdog; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,void (*) (void*),struct ntb_transport_ctx*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_2)
{
 struct ntb_transport_ctx *VAR_3;

 VAR_3 = VAR_2;
 FUNC_1(VAR_3->dev, VAR_0, 0);
 FUNC_0(&VAR_3->link_watchdog, 1 * VAR_1, FUNC_2, VAR_3);
}
