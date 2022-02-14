
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx {int dummy; } ;
struct file {int f_vnread_flags; int f_offset; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int*,struct mtx*,scalar_t__,char*,int ) ;
 int FUNC_2 (struct mtx*) ;
 struct mtx* FUNC_3 (int ,struct file*) ;
 int FUNC_4 (struct mtx*) ;
 int VAR_5 ;

off_t
FUNC_5(struct file *VAR_6, int VAR_7)
{
 struct mtx *VAR_8;
 off_t VAR_9;

 FUNC_0((VAR_7 & VAR_3) == 0, ("FOF_OFFSET passed"));






 if ((VAR_7 & VAR_2) != 0)
  return (VAR_6->f_offset);






 VAR_8 = FUNC_3(VAR_5, VAR_6);
 FUNC_2(VAR_8);
 if ((VAR_7 & VAR_2) == 0) {
  while (VAR_6->f_vnread_flags & VAR_0) {
   VAR_6->f_vnread_flags |= VAR_1;
   FUNC_1(&VAR_6->f_vnread_flags, VAR_8, VAR_4 -1,
       "vofflock", 0);
  }
  VAR_6->f_vnread_flags |= VAR_0;
 }
 VAR_9 = VAR_6->f_offset;
 FUNC_4(VAR_8);
 return (VAR_9);
}
