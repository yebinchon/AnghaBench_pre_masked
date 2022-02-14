
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inbuf {int ptr; int base; scalar_t__ limit; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct inbuf *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_0->ptr - VAR_0->base;

 VAR_0->ptr = VAR_0->base + FUNC_0(VAR_2, VAR_1);
 if (VAR_0->ptr > VAR_0->limit)
  FUNC_1("Premature end of data parsing flat device tree\n");
}
