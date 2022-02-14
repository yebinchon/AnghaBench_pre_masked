
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
typedef int device_t ;


 struct resource_list* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct resource_list*,char*,int ,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2, device_t VAR_3)
{
 struct resource_list *VAR_4;
 int VAR_5 = 0;

 VAR_5 += FUNC_3(VAR_2, VAR_3);

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4 != ((void*)0)) {
  VAR_5 += FUNC_4(VAR_4, "mem", VAR_1,
      "%#jx");
  VAR_5 += FUNC_4(VAR_4, "irq", VAR_0,
      "%jd");
 }

 VAR_5 += FUNC_1(VAR_2, VAR_3);
 VAR_5 += FUNC_2(VAR_2, VAR_3);

 return (VAR_5);
}
