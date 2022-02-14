
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tar {int dummy; } ;
struct gnu_sparse {scalar_t__* offset; scalar_t__* numbytes; } ;
struct archive_read {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct archive_read*,struct tar*,int ,int ) ;
 int FUNC_1 (scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_2, struct tar *VAR_3,
    const struct gnu_sparse *VAR_4, int VAR_5)
{
 while (VAR_5 > 0 && VAR_4->offset[0] != 0) {
  if (FUNC_0(VAR_2, VAR_3,
      FUNC_1(VAR_4->offset, sizeof(VAR_4->offset)),
      FUNC_1(VAR_4->numbytes, sizeof(VAR_4->numbytes)))
      != VAR_1)
   return (VAR_0);
  VAR_4++;
  VAR_5--;
 }
 return (VAR_1);
}
