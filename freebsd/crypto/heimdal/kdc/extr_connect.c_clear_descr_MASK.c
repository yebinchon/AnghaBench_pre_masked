
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct descr {scalar_t__ s; scalar_t__ len; int size; scalar_t__ buf; } ;


 int FUNC_0 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct descr *VAR_1)
{
    if(VAR_1->buf)
 FUNC_0(VAR_1->buf, 0, VAR_1->size);
    VAR_1->len = 0;
    if(VAR_1->s != VAR_0)
 FUNC_1(VAR_1->s);
    VAR_1->s = VAR_0;
}
