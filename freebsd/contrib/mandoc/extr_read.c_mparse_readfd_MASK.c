
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mparse {int line; int filenc; int options; struct buf* primary; } ;
struct buf {int sz; scalar_t__* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ,int,int ,int *) ;
 char* FUNC_2 () ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (struct mparse*,struct buf,size_t,int) ;
 int FUNC_5 (struct mparse*) ;
 int FUNC_6 (scalar_t__*,int) ;
 int FUNC_7 (struct mparse*,int,struct buf*,int*) ;

void
FUNC_8(struct mparse *VAR_3, int VAR_4, const char *VAR_5)
{
 static int VAR_6;

 struct buf VAR_7;
 struct buf *VAR_8;
 const char *VAR_9;
 size_t VAR_10;
 int VAR_11, VAR_12;
 int VAR_13;

 if (VAR_6 > 64) {
  FUNC_1(VAR_0, VAR_3->line, 0, ((void*)0));
  return;
 }
 if (FUNC_7(VAR_3, VAR_4, &VAR_7, &VAR_13) == -1)
  return;





 VAR_8 = VAR_3->primary;
 VAR_11 = VAR_3->filenc;
 VAR_12 = VAR_3->line;
 VAR_9 = FUNC_2();

 VAR_3->primary = &VAR_7;
 VAR_3->filenc = VAR_3->options & (VAR_2 | VAR_1);
 VAR_3->line = 1;
 FUNC_3(VAR_5);


 if (VAR_3->filenc & VAR_2 && VAR_7.sz > 2 &&
     (unsigned char)VAR_7.buf[0] == 0xef &&
     (unsigned char)VAR_7.buf[1] == 0xbb &&
     (unsigned char)VAR_7.buf[2] == 0xbf) {
  VAR_10 = 3;
  VAR_3->filenc &= ~VAR_1;
 } else
  VAR_10 = 0;

 VAR_6++;
 FUNC_4(VAR_3, VAR_7, VAR_10, 1);
 if (--VAR_6 == 0)
  FUNC_5(VAR_3);





 if (VAR_13)
  FUNC_6(VAR_7.buf, VAR_7.sz);
 else
  FUNC_0(VAR_7.buf);

 VAR_3->primary = VAR_8;
 VAR_3->filenc = VAR_11;
 VAR_3->line = VAR_12;
 if (VAR_9 != ((void*)0))
  FUNC_3(VAR_9);
}
