
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct edd_params {int dummy; } ;
struct dsk {int drive; } ;
struct TYPE_6__ {int len; int sectors; } ;
struct TYPE_5__ {int addr; int eax; int efl; int esi; int ds; int edx; int ctl; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__ VAR_1 ;
 int FUNC_3 (char*,int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 () ;

uint64_t
FUNC_5(struct dsk *VAR_3)
{

 VAR_1.len = sizeof(struct edd_params);
 VAR_2 = VAR_0;
 VAR_2 = 0x13;
 VAR_2 = 0x4800;
 VAR_2 = VAR_3->drive;
 VAR_2 = FUNC_2(&VAR_1);
 VAR_2 = FUNC_1(&VAR_1);
 FUNC_4();
 if (FUNC_0(VAR_2)) {
  FUNC_3("error %u\n", VAR_2 >> 8 & 0xff);
  return (0);
 }
 return (VAR_1.sectors);
}
