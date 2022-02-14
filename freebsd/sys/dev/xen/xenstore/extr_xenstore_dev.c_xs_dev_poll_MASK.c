
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xs_dev_data {scalar_t__ read_cons; scalar_t__ read_prod; int ev_rsel; } ;
struct thread {int dummy; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void**) ;
 int FUNC_1 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_5, int VAR_6, struct thread *VAR_7)
{
 struct xs_dev_data *VAR_8;
 int VAR_9, VAR_10;

 VAR_9 = FUNC_0((void **)&VAR_8);
 if (VAR_9 != 0)
  return (VAR_0);


 VAR_10 = VAR_6 & (VAR_2 | VAR_4);

 if (VAR_6 & (VAR_1 | VAR_3)) {
  if (VAR_8->read_cons != VAR_8->read_prod) {
   VAR_10 |= VAR_6 & (VAR_1 | VAR_3);
  } else {

   FUNC_1(VAR_7, &VAR_8->ev_rsel);
  }
 }

 return (VAR_10);
}
