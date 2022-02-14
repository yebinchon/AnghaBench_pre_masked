
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fdc_readid {int cyl; int head; scalar_t__ secshift; } ;
struct fd_type {int heads; scalar_t__ secsize; } ;
struct fd_data {size_t type; int options; TYPE_1__* ft; int dev; } ;
struct TYPE_2__ {int flags; scalar_t__ heads; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 struct fd_type** VAR_5 ;
 int FUNC_1 (struct fd_data*,int ,struct fdc_readid*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct fd_data*,struct fd_type*) ;

__attribute__((used)) static int
FUNC_4(struct fd_data *VAR_6)
{
 struct fd_type *VAR_7;
 struct fdc_readid VAR_8;
 int VAR_9, VAR_10;

 if (!(VAR_6->ft->flags & VAR_3))
  return (0);

 VAR_7 = VAR_5[VAR_6->type];
 FUNC_3(VAR_6, VAR_7);
 if (!(VAR_6->ft->flags & VAR_3))
  return (0);
 VAR_9 = VAR_6->options;
 VAR_6->options |= VAR_1 | VAR_2;
 for (; VAR_7->heads; VAR_7++) {
  FUNC_3(VAR_6, VAR_7);

  VAR_8.cyl = VAR_8.head = 0;
  VAR_10 = FUNC_1(VAR_6, VAR_0, &VAR_8);
  if (VAR_10 != 0)
   continue;
  if (VAR_8.cyl != 0 || VAR_8.head != 0 || VAR_8.secshift != VAR_7->secsize)
   continue;
  VAR_8.cyl = 2;
  VAR_8.head = VAR_6->ft->heads - 1;
  VAR_10 = FUNC_1(VAR_6, VAR_0, &VAR_8);
  if (VAR_8.cyl != 2 || VAR_8.head != VAR_7->heads - 1 ||
      VAR_8.secshift != VAR_7->secsize)
   continue;
  if (VAR_10 == 0)
   break;
 }

 VAR_6->options = VAR_9;
 if (VAR_7->heads == 0) {
  if (VAR_4 & 0x40)
   FUNC_0(VAR_6->dev, "autoselection failed\n");
  FUNC_3(VAR_6, VAR_5[VAR_6->type]);
  return (-1);
 } else {
  if (VAR_4 & 0x40) {
   FUNC_0(VAR_6->dev,
       "autoselected %d KB medium\n",
       VAR_6->ft->size / 2);
   FUNC_2(VAR_6->ft);
  }
  return (0);
 }
}
