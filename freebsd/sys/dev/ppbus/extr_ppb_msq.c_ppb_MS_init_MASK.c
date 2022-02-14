
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppb_xfer {struct ppb_microseq* loop; } ;
struct ppb_microseq {int dummy; } ;
struct ppb_device {int dummy; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ) ;
 struct ppb_xfer* FUNC_1 (int ,struct ppb_device*,int) ;
 int FUNC_2 (int ) ;

int
FUNC_3(device_t VAR_0, device_t VAR_1, struct ppb_microseq *VAR_2, int VAR_3)
{
 struct ppb_device *VAR_4 = (struct ppb_device *)FUNC_0(VAR_1);
 struct ppb_xfer *VAR_5 = FUNC_1(VAR_0, VAR_4, VAR_3);

 FUNC_2(VAR_0);
 VAR_5->loop = VAR_2;

 return (0);
}
