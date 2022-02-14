
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppb_device {scalar_t__ flags; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0, device_t VAR_1)
{
 struct ppb_device *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);

 VAR_2 = (struct ppb_device *)FUNC_2(VAR_1);

 if (VAR_2->flags != 0)
  VAR_3 += FUNC_3(" flags 0x%x", VAR_2->flags);

 VAR_3 += FUNC_0(VAR_0, VAR_1);

 return (VAR_3);
}
