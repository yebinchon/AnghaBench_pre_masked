
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int used; } ;
typedef TYPE_1__ recvbuf_t ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;

recvbuf_t *
FUNC_4(void)
{
 recvbuf_t *VAR_4;

 FUNC_0();
 FUNC_1(VAR_4, VAR_1, VAR_3);
 if (VAR_4 != ((void*)0)) {
  VAR_2--;
  FUNC_3(VAR_4);
  VAR_4->used++;
 } else {
  VAR_0++;
 }
 FUNC_2();

 return VAR_4;
}
