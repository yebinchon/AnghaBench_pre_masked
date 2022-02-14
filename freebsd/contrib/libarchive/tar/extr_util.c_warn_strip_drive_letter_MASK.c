
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdtar {int warned_lead_slash; } ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void
FUNC_1(struct bsdtar *VAR_0)
{
 if (!VAR_0->warned_lead_slash) {
  FUNC_0(0,
      "Removing leading drive letter from "
      "member names");
  VAR_0->warned_lead_slash = 1;
 }
}
