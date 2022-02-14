
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dumperinfo {int blocksize; int blockbuf; } ;


 int FUNC_0 (struct dumperinfo*,int ,int ,int ) ;
 scalar_t__ VAR_0 ;

int
FUNC_1(struct dumperinfo *VAR_1)
{
 int VAR_2;

 if (VAR_0 == 0)
  return (0);

 VAR_2 = FUNC_0(VAR_1, VAR_1->blockbuf, 0, VAR_1->blocksize);
 VAR_0 = 0;
 return (VAR_2);
}
