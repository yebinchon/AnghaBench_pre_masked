
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spibus_ivar {int mode; int cs; int clock; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,char const*,int) ;
 struct spibus_ivar* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char const*,int,char*,int *) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_1, const char *VAR_2, int VAR_3)
{
 device_t VAR_4;
 struct spibus_ivar *VAR_5;

 VAR_4 = FUNC_0(VAR_1, 0, VAR_2, VAR_3);
 VAR_5 = FUNC_1(VAR_4);
 VAR_5->mode = VAR_0;
 FUNC_2(VAR_2, VAR_3, "clock", &VAR_5->clock);
 FUNC_2(VAR_2, VAR_3, "cs", &VAR_5->cs);
 FUNC_2(VAR_2, VAR_3, "mode", &VAR_5->mode);
}
