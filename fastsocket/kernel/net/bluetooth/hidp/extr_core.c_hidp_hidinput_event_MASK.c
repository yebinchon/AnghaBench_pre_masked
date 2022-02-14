
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct hidp_session {int dummy; } ;
struct hid_device {struct hidp_session* driver_data; } ;


 int FUNC_0 (struct hidp_session*,struct input_dev*,unsigned int,unsigned int,int) ;
 struct hid_device* FUNC_1 (struct input_dev*) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_0, unsigned int VAR_1, unsigned int VAR_2, int VAR_3)
{
 struct hid_device *VAR_4 = FUNC_1(VAR_0);
 struct hidp_session *VAR_5 = VAR_4->driver_data;

 return FUNC_0(VAR_5, VAR_0, VAR_1, VAR_2, VAR_3);
}
