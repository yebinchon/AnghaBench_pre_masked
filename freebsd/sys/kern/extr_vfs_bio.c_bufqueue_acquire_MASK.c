
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufqueue {int dummy; } ;
struct buf {int dummy; } ;


 int FUNC_0 (struct bufqueue*) ;
 int FUNC_1 (struct bufqueue*) ;
 struct bufqueue* FUNC_2 (struct buf*) ;

__attribute__((used)) static struct bufqueue *
FUNC_3(struct buf *VAR_0)
{
 struct bufqueue *VAR_1, *VAR_2;






 VAR_1 = FUNC_2(VAR_0);
 FUNC_0(VAR_1);
 for (;;) {
  VAR_2 = FUNC_2(VAR_0);
  if (VAR_1 == VAR_2)
   break;
  FUNC_1(VAR_1);
  FUNC_0(VAR_2);
  VAR_1 = VAR_2;
 }
 return (VAR_1);
}
