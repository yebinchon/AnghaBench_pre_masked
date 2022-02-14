
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int FUNC_0 (int ,int ,char**,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_4(device_t VAR_5)
{
 char *VAR_6[] = { "VMBUS", ((void*)0) };
 int VAR_7;

 if (FUNC_2(VAR_5) != 0 || VAR_4 != VAR_2 ||
     (VAR_3 & VAR_0) == 0)
  return (VAR_1);
 VAR_7 = FUNC_0(FUNC_1(VAR_5), VAR_5, VAR_6, ((void*)0));
 if (VAR_7 <= 0)
  FUNC_3(VAR_5, "Hyper-V Vmbus Resource");
 return (VAR_7);
}
