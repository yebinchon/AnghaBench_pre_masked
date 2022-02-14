
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mtx {int dummy; } ;
struct buf {int b_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct buf*,struct mtx*,int ,char const*,int ) ;
 int FUNC_1 (struct mtx*) ;
 struct mtx* FUNC_2 (int ,struct buf*) ;
 int FUNC_3 (struct mtx*) ;
 int VAR_1 ;

void
FUNC_4(struct buf *VAR_2, u_char VAR_3, const char *VAR_4)
{
 struct mtx *VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_2);
 FUNC_1(VAR_5);
 while ((VAR_2->b_flags & VAR_0) == 0)
  FUNC_0(VAR_2, VAR_5, VAR_3, VAR_4, 0);
 FUNC_3(VAR_5);
}
