
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ swbuf; } ;
typedef TYPE_1__ vwsnd_port_t ;
typedef int vwsnd_dev_t ;


 int FUNC_0 (char*,int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_4(vwsnd_dev_t *VAR_2,
    vwsnd_port_t *VAR_3,
    vwsnd_port_t *VAR_4)
{
 FUNC_0("(devc=0x%p, rport=0x%p, wport=0x%p)\n", VAR_2, VAR_3, VAR_4);

 if (VAR_3 && VAR_3->swbuf) {
  FUNC_1("shutting down rport\n");
  FUNC_3(VAR_2, VAR_3, VAR_0);
 }
 if (VAR_4 && VAR_4->swbuf) {
  FUNC_1("shutting down wport\n");
  FUNC_3(VAR_2, VAR_4, VAR_1);
 }
 FUNC_2();
}
