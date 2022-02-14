
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_softc {char channel; int bugs; int instruction_ram_size; int features; int chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_0(struct ahc_softc *VAR_5)
{

 VAR_5->channel = 'A';
 VAR_5->chip = VAR_0;
 VAR_5->features = VAR_1;
 VAR_5->bugs |= VAR_4|VAR_2|VAR_3;
 VAR_5->instruction_ram_size = 512;
 return (0);
}
