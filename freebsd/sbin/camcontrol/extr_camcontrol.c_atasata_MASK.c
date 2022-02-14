
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_params {int satacapabilities; } ;



__attribute__((used)) static int
FUNC_0(struct ata_params *VAR_0)
{


 if (VAR_0->satacapabilities != 0xffff &&
     VAR_0->satacapabilities != 0x0000)
  return 1;

 return 0;
}
