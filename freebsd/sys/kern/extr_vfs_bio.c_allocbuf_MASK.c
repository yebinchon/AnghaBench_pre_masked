
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {int b_bcount; int b_kvasize; int b_flags; int b_bufsize; int b_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct buf*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct buf*,int) ;
 int FUNC_6 (struct buf*,int) ;
 int FUNC_7 (struct buf*,int,int) ;
 int FUNC_8 (struct buf*,int) ;

int
FUNC_9(struct buf *VAR_5, int VAR_6)
{
 int VAR_7;

 if (VAR_5->b_bcount == VAR_6)
  return (1);

 if (VAR_5->b_kvasize != 0 && VAR_5->b_kvasize < VAR_6)
  FUNC_2("allocbuf: buffer too small");

 VAR_7 = FUNC_4(VAR_6, VAR_3);
 if ((VAR_5->b_flags & VAR_2) == 0) {
  if ((VAR_5->b_flags & VAR_1) == 0)
   VAR_7 = FUNC_3(VAR_7);




  if (VAR_7 < VAR_5->b_bufsize)
   FUNC_6(VAR_5, VAR_7);
  else if (VAR_7 > VAR_5->b_bufsize)
   FUNC_5(VAR_5, VAR_7);
 } else {
  int VAR_8;

  VAR_8 = (VAR_6 == 0) ? 0 :
      FUNC_1((VAR_5->b_offset & VAR_4) + VAR_7);

  if (VAR_5->b_flags & VAR_1)
   FUNC_2("allocbuf: VMIO buffer can't be malloced");




  if (VAR_6 == 0 || VAR_5->b_bufsize == 0)
   VAR_5->b_flags |= VAR_0;

  if (VAR_7 < VAR_5->b_bufsize)
   FUNC_8(VAR_5, VAR_8);

  else if (VAR_6 > VAR_5->b_bcount)
   FUNC_7(VAR_5, VAR_8, VAR_6);
  FUNC_0(VAR_5, VAR_7);
 }
 VAR_5->b_bcount = VAR_6;
 return (1);
}
