
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tpm_sc {int dev_lock; int (* transmit ) (struct tpm_sc*,int) ;int * buf; } ;
typedef int save_cmd ;
typedef int device_t ;


 struct tpm_sc* FUNC_0 (int ) ;
 int FUNC_1 (int *,int*,int) ;
 int FUNC_2 (struct tpm_sc*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0, bool VAR_1)
{
 struct tpm_sc *VAR_2;
 uint8_t VAR_3[] = {
  0x80, 0x01,
  0x00, 0x00, 0x00, 0x0C,
  0x00, 0x00, 0x01, 0x45,
  0x00, 0x00
 };

 VAR_2 = FUNC_0(VAR_0);




 if (VAR_1)
  VAR_3[11] = 1;

 if (VAR_2 == ((void*)0) || VAR_2->buf == ((void*)0))
  return (0);

 FUNC_3(&VAR_2->dev_lock);

 FUNC_1(VAR_2->buf, VAR_3, sizeof(VAR_3));
 VAR_2->transmit(VAR_2, sizeof(VAR_3));

 FUNC_4(&VAR_2->dev_lock);

 return (0);
}
