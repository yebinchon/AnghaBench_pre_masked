
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;


 scalar_t__ FUNC_0 (int ,unsigned char,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_6, unsigned char *VAR_7, size_t VAR_8,
  unsigned char VAR_9)
{
 switch (VAR_9) {
 case 129:
  VAR_9 = VAR_5 | VAR_2;
  break;
 case 128:
  VAR_9 = VAR_4 | VAR_3;
  break;
 default:
  return -VAR_0;
 }

 if (FUNC_0(VAR_6->driver_data, VAR_9,
   VAR_7, VAR_8))
  return -VAR_1;
 return VAR_8;
}
