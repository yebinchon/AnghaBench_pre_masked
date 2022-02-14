
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spibus_ivar {int cs; } ;
typedef int device_t ;


 int VAR_0 ;
 struct spibus_ivar* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,size_t,char*,int,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, device_t VAR_2, char *VAR_3,
    size_t VAR_4)
{
 struct spibus_ivar *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;

 VAR_6 = VAR_5->cs & ~VAR_0;
 FUNC_2(VAR_3, VAR_4, "bus=%d cs=%d", FUNC_1(VAR_1), VAR_6);
 return (0);
}
