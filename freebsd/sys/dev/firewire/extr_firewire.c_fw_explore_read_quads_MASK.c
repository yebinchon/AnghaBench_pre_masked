
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fw_xfer {int resp; } ;
struct fw_device {int dummy; } ;


 int FUNC_0 (struct fw_xfer*) ;
 int FUNC_1 (struct fw_xfer*) ;
 int VAR_0 ;
 struct fw_xfer* FUNC_2 (struct fw_device*,int *,int,int,int,int *,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct fw_device *VAR_1, int VAR_2,
    uint32_t *VAR_3, int VAR_4)
{
 struct fw_xfer *VAR_5;
 uint32_t VAR_6;
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++, VAR_2 += sizeof(uint32_t)) {
  VAR_5 = FUNC_2(VAR_1, ((void*)0), -1, 0xffff,
      0xf0000000 | VAR_2, &VAR_6, VAR_0);
  if (VAR_5 == ((void*)0))
   return (-1);
  FUNC_1(VAR_5);

  if (VAR_5->resp == 0)
   VAR_3[VAR_7] = FUNC_3(VAR_6);

  VAR_8 = VAR_5->resp;
  FUNC_0(VAR_5);
  if (VAR_8)
   return (VAR_8);
 }
 return (0);
}
