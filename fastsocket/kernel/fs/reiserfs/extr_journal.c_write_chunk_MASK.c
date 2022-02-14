
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_chunk {int nr; int * bh; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct buffer_chunk *VAR_0)
{
 int VAR_1;
 FUNC_0();
 for (VAR_1 = 0; VAR_1 < VAR_0->nr; VAR_1++) {
  FUNC_2(VAR_0->bh[VAR_1]);
 }
 VAR_0->nr = 0;
 FUNC_1();
}
