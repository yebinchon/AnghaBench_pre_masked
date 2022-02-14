
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct thread {int dummy; } ;
struct proc {int dummy; } ;
typedef int id_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;

 int FUNC_0 (struct proc*) ;
 int VAR_7 ;
 int FUNC_1 (void*,int*,int) ;
 int FUNC_2 (int*,void*,int) ;
 int FUNC_3 (struct proc*,int,int*) ;
 int FUNC_4 (int ,int,struct proc**) ;
 int FUNC_5 (struct thread*,int ) ;

int
FUNC_6(struct thread *VAR_8, int VAR_9, id_t VAR_10, int VAR_11, void *VAR_12)
{
 struct proc *VAR_13;
 int VAR_14, VAR_15;

 switch (VAR_11) {
 case 129:
 case 128:
  if (VAR_9 != VAR_7) {
   VAR_14 = VAR_0;
   break;
  }
  if (VAR_11 == 129) {

   VAR_14 = FUNC_5(VAR_8, VAR_4);
   if (VAR_14 != 0)
    break;
   VAR_14 = FUNC_1(VAR_12, &VAR_15, sizeof(VAR_15));
   if (VAR_14 != 0)
    break;
   if (VAR_15 != VAR_6 &&
       VAR_15 != VAR_5) {
    VAR_14 = VAR_0;
    break;
   }
  }
  VAR_14 = FUNC_4(VAR_10, VAR_1 | VAR_3 | VAR_2, &VAR_13);
  if (VAR_14 == 0) {
   FUNC_3(VAR_13, VAR_11, &VAR_15);
   FUNC_0(VAR_13);
   if (VAR_11 == 128)
    VAR_14 = FUNC_2(&VAR_15, VAR_12, sizeof(VAR_15));
  }
  break;
 default:
  VAR_14 = VAR_0;
  break;
 }
 return (VAR_14);
}
