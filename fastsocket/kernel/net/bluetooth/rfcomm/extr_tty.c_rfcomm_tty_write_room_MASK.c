
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ driver_data; } ;
struct rfcomm_dev {int wmem_alloc; int dlc; } ;


 int FUNC_0 (char*,struct tty_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_0)
{
 struct rfcomm_dev *VAR_1 = (struct rfcomm_dev *) VAR_0->driver_data;
 int VAR_2;

 FUNC_0("tty %p", VAR_0);

 if (!VAR_1 || !VAR_1->dlc)
  return 0;

 VAR_2 = FUNC_2(VAR_1->dlc) - FUNC_1(&VAR_1->wmem_alloc);
 if (VAR_2 < 0)
  VAR_2 = 0;

 return VAR_2;
}
