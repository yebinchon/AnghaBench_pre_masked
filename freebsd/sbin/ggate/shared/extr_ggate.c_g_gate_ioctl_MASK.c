
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,unsigned long,void*) ;
 int FUNC_3 (int ) ;

void
FUNC_4(unsigned long VAR_3, void *VAR_4)
{

 if (FUNC_2(VAR_2, VAR_3, VAR_4) == -1) {
  FUNC_0("%s: ioctl(/dev/%s): %s.", FUNC_1(),
      VAR_0, FUNC_3(VAR_1));
 }
}
