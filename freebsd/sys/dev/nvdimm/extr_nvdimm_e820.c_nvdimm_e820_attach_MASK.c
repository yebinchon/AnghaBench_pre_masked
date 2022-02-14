
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int uint32_t ;
struct bios_smap {scalar_t__ type; scalar_t__ length; scalar_t__ base; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ start; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;
 unsigned int VAR_2 ;
 TYPE_1__* VAR_3 ;
 struct bios_smap* VAR_4 ;

__attribute__((used)) static int
FUNC_2(device_t VAR_5)
{
 const struct bios_smap *VAR_6, *VAR_7;
 uint32_t VAR_8;
 unsigned VAR_9;
 int VAR_10;

 VAR_8 = *((const uint32_t *)VAR_4 - 1);
 VAR_6 = (const void *)((const char *)VAR_4 + VAR_8);

 for (VAR_9 = 0, VAR_7 = VAR_4; VAR_7 < VAR_6; VAR_7++) {
  if (VAR_7->type != VAR_1 || VAR_7->length == 0)
   continue;
  VAR_3[VAR_9].start = VAR_7->base;
  VAR_3[VAR_9].size = VAR_7->length;

  FUNC_0(VAR_5, "Found PRAM 0x%jx +0x%jx\n",
      (uintmax_t)VAR_7->base, (uintmax_t)VAR_7->length);

  VAR_9++;
 }

 if (VAR_9 == 0) {
  FUNC_0(VAR_5, "No e820 PRAM regions detected\n");
  return (VAR_0);
 }
 VAR_2 = VAR_9;

 VAR_10 = FUNC_1(VAR_5);
 return (VAR_10);
}
