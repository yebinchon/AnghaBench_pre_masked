
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmcsd_softc {scalar_t__ enh_size; int enh_base; struct mmcsd_part** part; } ;
struct mmcsd_part {TYPE_1__* disk; } ;
struct flash_slice {scalar_t__ size; int label; int base; } ;
typedef int name ;
typedef int device_t ;
struct TYPE_2__ {char* d_name; int d_unit; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mmcsd_softc* FUNC_0 (int ) ;
 int FUNC_1 (char*,int,char*,char*,int ) ;
 scalar_t__ FUNC_2 (char*,char const*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_5, const char *VAR_6,
    struct flash_slice *VAR_7, int *VAR_8)
{
 char VAR_9[VAR_4];
 struct mmcsd_softc *VAR_10;
 struct mmcsd_part *VAR_11;

 *VAR_8 = 0;
 if (VAR_7 == ((void*)0))
  return (VAR_0);

 VAR_10 = FUNC_0(VAR_5);
 if (VAR_10->enh_size == 0)
  return (VAR_1);

 VAR_11 = VAR_10->part[VAR_2];
 FUNC_1(VAR_9, sizeof(VAR_9), "%s%d", VAR_11->disk->d_name,
     VAR_11->disk->d_unit);
 if (FUNC_2(VAR_9, VAR_6) != 0)
  return (VAR_1);

 *VAR_8 = 1;
 VAR_7[0].base = VAR_10->enh_base;
 VAR_7[0].size = VAR_10->enh_size;
 VAR_7[0].label = VAR_3;
 return (0);
}
