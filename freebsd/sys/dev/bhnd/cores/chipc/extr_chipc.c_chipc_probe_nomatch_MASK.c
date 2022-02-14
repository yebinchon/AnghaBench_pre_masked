
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
typedef int device_t ;


 struct resource_list* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct resource_list*,char*,int ,char*) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_2, device_t VAR_3)
{
 struct resource_list *VAR_4;
 const char *VAR_5;

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 == ((void*)0))
  VAR_5 = "unknown device";

 FUNC_2(VAR_2, "<%s> at", VAR_5);

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4 != ((void*)0)) {
  FUNC_4(VAR_4, "mem", VAR_1, "%#jx");
  FUNC_4(VAR_4, "irq", VAR_0, "%jd");
 }

 FUNC_3(" (no driver attached)\n");
}
