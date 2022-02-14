
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_pci_chip {int features; } ;
struct sym_fw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sym_fw const VAR_4 ;
 struct sym_fw const VAR_5 ;

__attribute__((used)) static const struct sym_fw *
FUNC_0(const struct sym_pci_chip *VAR_6)
{
 if (VAR_6->features & VAR_1)
  return &VAR_5;




 else
  return ((void*)0);
}
