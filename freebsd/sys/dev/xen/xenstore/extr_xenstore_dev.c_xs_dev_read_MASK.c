
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xs_dev_data {scalar_t__ read_prod; scalar_t__ read_cons; int * read_buffer; } ;
struct uio {scalar_t__ uio_resid; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (void**) ;
 int VAR_2 ;
 int FUNC_2 (struct xs_dev_data*,int ,char*,int) ;
 int FUNC_3 (int *,int,struct uio*) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_3, struct uio *VAR_4, int VAR_5)
{
 int VAR_6;
 struct xs_dev_data *VAR_7;

 VAR_6 = FUNC_1((void **)&VAR_7);
 if (VAR_6 != 0)
  return (VAR_6);

 while (VAR_7->read_prod == VAR_7->read_cons) {
  VAR_6 = FUNC_2(VAR_7, VAR_1, "xsdread", VAR_2/10);
  if (VAR_6 && VAR_6 != VAR_0)
   return (VAR_6);
 }

 while (VAR_4->uio_resid > 0) {
  if (VAR_7->read_cons == VAR_7->read_prod)
   break;
  VAR_6 = FUNC_3(&VAR_7->read_buffer[FUNC_0(VAR_7->read_cons)],
      1, VAR_4);
  if (VAR_6)
   return (VAR_6);
  VAR_7->read_cons++;
 }
 return (0);
}
