
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ driver_data; } ;
struct rfcomm_dev {int modem_status; } ;
struct file {int dummy; } ;


 int FUNC_0 (char*,struct tty_struct*,struct rfcomm_dev*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_0, struct file *VAR_1)
{
 struct rfcomm_dev *VAR_2 = (struct rfcomm_dev *) VAR_0->driver_data;

 FUNC_0("tty %p dev %p", VAR_0, VAR_2);

 return VAR_2->modem_status;
}
