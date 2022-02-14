
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct print_buf {char* buf; char* crs; int size; scalar_t__ echo; } ;


 int VAR_0 ;

void FUNC_0(struct print_buf *VAR_1, char *VAR_2, u32 VAR_3)
{
 VAR_1->buf = VAR_2;
 VAR_1->crs = VAR_2;
 VAR_1->size = VAR_3;
 VAR_1->echo = 0;

 if (VAR_3 < VAR_0) {
  VAR_1->buf = ((void*)0);
 } else if (VAR_2) {
  VAR_1->buf[0] = 0;
  VAR_1->buf[VAR_3 - 1] = ~0;
 }
}
