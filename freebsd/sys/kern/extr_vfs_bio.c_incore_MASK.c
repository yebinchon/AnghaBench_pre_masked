
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufobj {int dummy; } ;
struct buf {int dummy; } ;
typedef int daddr_t ;


 int FUNC_0 (struct bufobj*) ;
 int FUNC_1 (struct bufobj*) ;
 struct buf* FUNC_2 (struct bufobj*,int ) ;

struct buf *
FUNC_3(struct bufobj *VAR_0, daddr_t VAR_1)
{
 struct buf *VAR_2;

 FUNC_0(VAR_0);
 VAR_2 = FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_0);
 return (VAR_2);
}
