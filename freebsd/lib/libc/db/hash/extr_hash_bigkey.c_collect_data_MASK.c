
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int16_t ;
struct TYPE_10__ {char* page; int addr; } ;
struct TYPE_9__ {int BSIZE; char* tmp_buf; int cndx; TYPE_1__* cpage; int cbucket; } ;
struct TYPE_8__ {scalar_t__ page; } ;
typedef TYPE_2__ HTAB ;
typedef TYPE_3__ BUFHEAD ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (TYPE_2__*,int,TYPE_3__*,int ) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_4(HTAB *VAR_3, BUFHEAD *VAR_4, int VAR_5, int VAR_6)
{
 u_int16_t *VAR_7;
 char *VAR_8;
 BUFHEAD *VAR_9;
 u_int16_t VAR_10;
 int VAR_11, VAR_12;

 VAR_8 = VAR_4->page;
 VAR_7 = (u_int16_t *)VAR_8;
 VAR_11 = VAR_3->BSIZE - VAR_7[1];
 VAR_10 = VAR_4->addr;

 if (VAR_7[2] == VAR_1) {
  VAR_12 = VAR_5 + VAR_11;
  if (VAR_3->tmp_buf)
   FUNC_1(VAR_3->tmp_buf);
  if ((VAR_3->tmp_buf = (char *)FUNC_2(VAR_12)) == ((void*)0))
   return (-1);
  if (VAR_6) {
   VAR_3->cndx = 1;
   if (VAR_7[0] == 2) {
    VAR_3->cpage = ((void*)0);
    VAR_3->cbucket++;
   } else {
    VAR_3->cpage =
        FUNC_0(VAR_3, VAR_7[VAR_7[0] - 1], VAR_4, 0);
    if (!VAR_3->cpage)
     return (-1);
    else if (!((u_int16_t *)VAR_3->cpage->page)[0]) {
     VAR_3->cbucket++;
     VAR_3->cpage = ((void*)0);
    }
   }
  }
 } else {
  VAR_9 = FUNC_0(VAR_3, VAR_7[VAR_7[0] - 1], VAR_4, 0);
  if (!VAR_9 || ((VAR_12 =
      FUNC_4(VAR_3, VAR_9, VAR_5 + VAR_11, VAR_6)) < 1))
   return (-1);
 }
 if (VAR_4->addr != VAR_10) {
  VAR_2 = VAR_0;
  return (-1);
 }
 FUNC_3(&VAR_3->tmp_buf[VAR_5], (VAR_4->page) + VAR_7[1], VAR_11);
 return (VAR_12);
}
