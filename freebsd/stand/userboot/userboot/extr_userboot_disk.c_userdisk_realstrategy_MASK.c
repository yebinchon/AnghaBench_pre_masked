
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {size_t d_unit; } ;
struct disk_devdesc {TYPE_1__ dd; } ;
typedef int daddr_t ;
struct TYPE_4__ {int sectorsize; } ;


 int FUNC_0 (int ,size_t,int,char*,size_t,size_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;

__attribute__((used)) static int
FUNC_1(void *VAR_7, int VAR_8, daddr_t VAR_9, size_t VAR_10,
    char *VAR_11, size_t *VAR_12)
{
 struct disk_devdesc *VAR_13 = VAR_7;
 uint64_t VAR_14;
 size_t VAR_15;
 int VAR_16;

 VAR_8 &= VAR_2;
 if (VAR_8 == VAR_4)
  return (VAR_1);
 if (VAR_8 != VAR_3)
  return (VAR_0);
 if (VAR_12)
  *VAR_12 = 0;
 VAR_14 = VAR_9 * VAR_6[VAR_13->dd.d_unit].sectorsize;
 VAR_16 = FUNC_0(VAR_5, VAR_13->dd.d_unit, VAR_14, VAR_11, VAR_10, &VAR_15);
 if (VAR_16)
  return (VAR_16);
 if (VAR_12)
  *VAR_12 = VAR_10 - VAR_15;
 return (0);
}
