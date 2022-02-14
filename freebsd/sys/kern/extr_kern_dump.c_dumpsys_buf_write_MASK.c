
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dumperinfo {int blocksize; scalar_t__ blockbuf; } ;


 int FUNC_0 (struct dumperinfo*,scalar_t__,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,size_t) ;

int
FUNC_2(struct dumperinfo *VAR_1, char *VAR_2, size_t VAR_3)
{
 size_t VAR_4;
 int VAR_5;

 while (VAR_3) {
  VAR_4 = VAR_1->blocksize - VAR_0;
  if (VAR_4 > VAR_3)
   VAR_4 = VAR_3;
  FUNC_1((char *)VAR_1->blockbuf + VAR_0, VAR_2, VAR_4);
  VAR_0 += VAR_4;
  VAR_2 += VAR_4;
  VAR_3 -= VAR_4;
  if (VAR_0 == VAR_1->blocksize) {
   VAR_5 = FUNC_0(VAR_1, VAR_1->blockbuf, 0, VAR_1->blocksize);
   if (VAR_5)
    return (VAR_5);
   VAR_0 = 0;
  }
 }
 return (0);
}
