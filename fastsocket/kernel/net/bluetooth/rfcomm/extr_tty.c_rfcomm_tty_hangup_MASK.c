
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ driver_data; } ;
struct rfcomm_dev {int id; int flags; } ;


 int FUNC_0 (char*,struct tty_struct*,struct rfcomm_dev*) ;
 int VAR_0 ;
 int FUNC_1 (struct rfcomm_dev*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (struct rfcomm_dev*) ;
 int FUNC_4 (struct tty_struct*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct tty_struct *VAR_1)
{
 struct rfcomm_dev *VAR_2 = (struct rfcomm_dev *) VAR_1->driver_data;

 FUNC_0("tty %p dev %p", VAR_1, VAR_2);

 if (!VAR_2)
  return;

 FUNC_4(VAR_1);

 if (FUNC_5(VAR_0, &VAR_2->flags)) {
  if (FUNC_2(VAR_2->id) == ((void*)0))
   return;
  FUNC_1(VAR_2);
  FUNC_3(VAR_2);
 }
}
