
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int FUNC_0 (int ,int ,char*,int *,int *) ;
 int FUNC_1 (int ,int ,char**,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0)
{
 device_t VAR_1;
 static char *VAR_2[] = { "PNP0700", "PNP0701", ((void*)0) };
 int VAR_3;

 VAR_1 = FUNC_3(VAR_0);
 VAR_3 = FUNC_1(VAR_1, VAR_0, VAR_2, ((void*)0));
 if (VAR_3 > 0)
  return (VAR_3);

 if (FUNC_2(FUNC_0(VAR_1, VAR_0, "_FDE", ((void*)0), ((void*)0))))
  FUNC_4(VAR_0, "floppy drive controller (FDE)");
 else
  FUNC_4(VAR_0, "floppy drive controller");
 return (VAR_3);
}
