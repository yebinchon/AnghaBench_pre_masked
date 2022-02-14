
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx {int dummy; } ;
struct file {int f_vnread_flags; void* f_nextoff; void* f_offset; } ;
typedef void* off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct mtx*) ;
 struct mtx* FUNC_2 (int ,struct file*) ;
 int FUNC_3 (struct mtx*) ;
 int VAR_6 ;
 int FUNC_4 (int*) ;

void
FUNC_5(struct file *VAR_7, off_t VAR_8, int VAR_9)
{
 struct mtx *VAR_10;

 FUNC_0((VAR_9 & VAR_5) == 0, ("FOF_OFFSET passed"));


 if ((VAR_9 & VAR_3) != 0) {
  if ((VAR_9 & VAR_4) == 0)
   VAR_7->f_offset = VAR_8;
  if ((VAR_9 & VAR_2) != 0)
   VAR_7->f_nextoff = VAR_8;
  return;
 }


 VAR_10 = FUNC_2(VAR_6, VAR_7);
 FUNC_1(VAR_10);
 if ((VAR_9 & VAR_4) == 0)
  VAR_7->f_offset = VAR_8;
 if ((VAR_9 & VAR_2) != 0)
  VAR_7->f_nextoff = VAR_8;
 if ((VAR_9 & VAR_3) == 0) {
  FUNC_0((VAR_7->f_vnread_flags & VAR_0) != 0,
      ("Lost FOFFSET_LOCKED"));
  if (VAR_7->f_vnread_flags & VAR_1)
   FUNC_4(&VAR_7->f_vnread_flags);
  VAR_7->f_vnread_flags = 0;
 }
 FUNC_3(VAR_10);
}
