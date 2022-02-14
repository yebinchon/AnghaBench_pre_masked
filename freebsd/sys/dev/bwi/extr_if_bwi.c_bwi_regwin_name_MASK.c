
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_regwin {int rw_type; } ;






 int FUNC_0 (char*,int) ;

__attribute__((used)) static const char *
FUNC_1(const struct bwi_regwin *VAR_0)
{
 switch (VAR_0->rw_type) {
 case 129:
  return "COM";
 case 131:
  return "PCI";
 case 128:
  return "MAC";
 case 130:
  return "PCIE";
 }
 FUNC_0("unknown regwin type 0x%04x\n", VAR_0->rw_type);
 return ((void*)0);
}
