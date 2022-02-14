
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ refcnt; int end; scalar_t__ start; int color; int * right; int * left; int * parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (void*) ;
 unsigned long FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (void*,unsigned long,int ) ;
 TYPE_1__* FUNC_4 (int) ;
 TYPE_1__* VAR_10 ;
 unsigned long VAR_11 ;
 scalar_t__ FUNC_5 (void**,unsigned long,unsigned long) ;
 unsigned long FUNC_6 (int ) ;
 scalar_t__ VAR_12 ;

int FUNC_7(void)
{
 void *VAR_13, *VAR_14;
 int VAR_15;
 unsigned long VAR_16;

 if (FUNC_2("RDMAV_HUGEPAGES_SAFE"))
  VAR_9 = 1;

 if (VAR_10)
  return 0;

 if (VAR_12)
  return VAR_0;

 VAR_11 = FUNC_6(VAR_7);
 if (VAR_11 < 0)
  return VAR_8;

 if (FUNC_5(&VAR_13, VAR_11, VAR_11))
  return VAR_1;

 if (VAR_9) {
  VAR_16 = FUNC_1(VAR_13);
  VAR_14 = (void *) ((uintptr_t) VAR_13 & ~(VAR_16 - 1));
 } else {
  VAR_16 = VAR_11;
  VAR_14 = VAR_13;
 }

 VAR_15 = FUNC_3(VAR_14, VAR_16, VAR_5) ||
       FUNC_3(VAR_14, VAR_16, VAR_4);

 FUNC_0(VAR_13);

 if (VAR_15)
  return VAR_2;

 VAR_10 = FUNC_4(sizeof *VAR_10);
 if (!VAR_10)
  return VAR_1;

 VAR_10->parent = ((void*)0);
 VAR_10->left = ((void*)0);
 VAR_10->right = ((void*)0);
 VAR_10->color = VAR_3;
 VAR_10->start = 0;
 VAR_10->end = VAR_6;
 VAR_10->refcnt = 0;

 return 0;
}
