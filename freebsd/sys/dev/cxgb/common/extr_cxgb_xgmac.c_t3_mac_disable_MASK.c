
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmac {scalar_t__ offset; int * adapter; scalar_t__ txen; int ext_port; scalar_t__ multiport; } ;
typedef int adapter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,scalar_t__,int ,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,scalar_t__,int) ;
 int FUNC_4 (struct cmac*) ;

int FUNC_5(struct cmac *VAR_6, int VAR_7)
{
 adapter_t *VAR_8 = VAR_6->adapter;

 if (VAR_6->multiport)
  return FUNC_2(VAR_8, VAR_6->ext_port, VAR_7);

 if (VAR_7 & VAR_5) {
  FUNC_3(VAR_8, VAR_2 + VAR_6->offset, 0);
  VAR_6->txen = 0;
 }
 if (VAR_7 & VAR_4) {
  int VAR_9 = FUNC_4(VAR_6);

  FUNC_1(VAR_6->adapter, VAR_0 + VAR_6->offset,
     VAR_3, 0);
  FUNC_0(100);
  FUNC_3(VAR_8, VAR_1 + VAR_6->offset, 0);
  FUNC_3(VAR_6->adapter, VAR_0 + VAR_6->offset, VAR_9);
 }
 return 0;
}
