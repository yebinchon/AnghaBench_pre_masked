
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct tuple_callbacks {char* name; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int,int,int*,int ,int *,struct tuple_callbacks*,void*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, device_t VAR_3, int VAR_4,
    int VAR_5, uint8_t *VAR_6, uint32_t VAR_7, uint32_t *VAR_8,
    struct tuple_callbacks *VAR_9, void *VAR_10)
{
 int VAR_11;

 if (VAR_1) {
  FUNC_1("TUPLE: %s [%d]:", VAR_9->name, VAR_5);

  for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
   if (VAR_11 % 0x10 == 0 && VAR_5 > 0x10)
    FUNC_1("\n       0x%02x:", VAR_11);
   FUNC_1(" %02x", VAR_6[VAR_11]);
  }
  FUNC_1("\n");
 }
 if (VAR_5 != 3 || VAR_6[0] != 'C' || VAR_6[1] != 'I' ||
     VAR_6[2] != 'S') {
  FUNC_1("Invalid data for CIS Link Target!\n");
  FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_7, VAR_8, VAR_9, VAR_10);
  return (VAR_0);
 }
 return (0);
}
