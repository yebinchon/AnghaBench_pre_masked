
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_drive {int device; } ;


 int FUNC_0 (int ,char const*,int) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static void
FUNC_2(struct gv_drive *VAR_0, const char *VAR_1)
{

 if (FUNC_1(VAR_1, "/dev/", 5) == 0)
  FUNC_0(VAR_0->device, (VAR_1 + 5), sizeof(VAR_0->device));
 else
  FUNC_0(VAR_0->device, VAR_1, sizeof(VAR_0->device));
}
