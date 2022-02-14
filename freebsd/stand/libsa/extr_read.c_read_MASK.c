
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct open_file {int f_flags; size_t f_offset; size_t f_ralen; void* f_rabuf; int f_raoffset; TYPE_2__* f_ops; int f_devdata; TYPE_1__* f_dev; } ;
typedef int ssize_t ;
struct TYPE_4__ {scalar_t__ (* fo_read ) (struct open_file*,void*,size_t,size_t*) ;} ;
struct TYPE_3__ {scalar_t__ (* dv_strategy ) (int ,int,int ,size_t,void*,size_t*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (void*,void*,size_t) ;
 int FUNC_1 (size_t) ;
 scalar_t__ VAR_5 ;
 struct open_file* VAR_6 ;
 size_t FUNC_2 (size_t,size_t) ;
 scalar_t__ FUNC_3 (int ,int,int ,size_t,void*,size_t*) ;
 scalar_t__ FUNC_4 (struct open_file*,void*,size_t,size_t*) ;
 scalar_t__ FUNC_5 (struct open_file*,void*,size_t,size_t*) ;
 int FUNC_6 (int) ;

ssize_t
FUNC_7(int VAR_7, void *VAR_8, size_t VAR_9)
{
 struct open_file *VAR_10 = &VAR_6[VAR_7];
 size_t VAR_11;

 if ((unsigned)VAR_7 >= VAR_3 || !(VAR_10->f_flags & VAR_2)) {
  VAR_5 = VAR_0;
  return (-1);
 }
 if (VAR_10->f_flags & VAR_1) {
  FUNC_6(4);
  VAR_5 = (VAR_10->f_dev->dv_strategy)(VAR_10->f_devdata, VAR_2,
      FUNC_1(VAR_10->f_offset), VAR_9, VAR_8, &VAR_11);
  if (VAR_5)
   return (-1);
  VAR_10->f_offset += VAR_11;
  return (VAR_11);
 }







 VAR_11 = VAR_9;
 for (;;) {
  size_t VAR_12, VAR_13;

  VAR_12 = FUNC_2(VAR_10->f_ralen, VAR_11);
  if (VAR_12 > 0) {
   FUNC_0(VAR_10->f_rabuf + VAR_10->f_raoffset, VAR_8, VAR_12);
   VAR_10->f_raoffset += VAR_12;
   VAR_10->f_ralen -= VAR_12;
   VAR_11 -= VAR_12;
   if (VAR_11 == 0)
    return (VAR_9);
   VAR_8 = (char *)VAR_8 + VAR_12;
  }


  if (VAR_10->f_rabuf == ((void*)0) || VAR_11 >= VAR_4) {




   VAR_5 = (VAR_10->f_ops->fo_read)(VAR_10, VAR_8, VAR_11, &VAR_13);
   if (VAR_5 != 0)
    return (-1);
   return (VAR_9 - VAR_13);
  }


  VAR_5 = (VAR_10->f_ops->fo_read)(VAR_10, VAR_10->f_rabuf, VAR_4,
      &VAR_13);
  if (VAR_5 != 0)
   return (-1);
  VAR_10->f_raoffset = 0;
  VAR_10->f_ralen = VAR_4 - VAR_13;

  if (VAR_10->f_ralen == 0)
   return (VAR_9 - VAR_11);
 }
}
