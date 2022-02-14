
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u_int16_t ;
typedef int u_char ;
struct TYPE_15__ {int addr; scalar_t__ page; } ;
struct TYPE_14__ {int size; int * data; } ;
struct TYPE_13__ {int cndx; scalar_t__ tmp_buf; TYPE_1__* cpage; int cbucket; } ;
struct TYPE_12__ {scalar_t__ page; } ;
typedef TYPE_2__ HTAB ;
typedef TYPE_3__ DBT ;
typedef TYPE_4__ BUFHEAD ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (TYPE_2__*,int,TYPE_4__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_4__*,int,int) ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;

int
FUNC_4(HTAB *VAR_4, BUFHEAD *VAR_5, int VAR_6, DBT *VAR_7, int VAR_8)
{
 BUFHEAD *VAR_9;
 u_int16_t *VAR_10, VAR_11, VAR_12, VAR_13;
 char *VAR_14;

 VAR_10 = (u_int16_t *)VAR_5->page;
 while (VAR_10[VAR_6 + 1] == VAR_2) {
  VAR_5 = FUNC_1(VAR_4, VAR_10[VAR_10[0] - 1], VAR_5, 0);
  if (!VAR_5)
   return (-1);
  VAR_10 = (u_int16_t *)VAR_5->page;
  VAR_6 = 1;
 }

 if (VAR_10[VAR_6 + 1] == VAR_1) {
  VAR_5 = FUNC_1(VAR_4, VAR_10[VAR_10[0] - 1], VAR_5, 0);
  if (!VAR_5)
   return (-1);
  VAR_10 = (u_int16_t *)VAR_5->page;
  VAR_9 = VAR_5;
  VAR_13 = VAR_9->addr;
  VAR_12 = VAR_10[1];
  VAR_11 = 0;
 } else
  if (!FUNC_0(VAR_10)) {







   VAR_12 = VAR_10[VAR_10[0]];
   VAR_11 = VAR_10[1] - VAR_12;
   VAR_9 = VAR_5;
   VAR_13 = VAR_5->addr;
   VAR_5 = FUNC_1(VAR_4, VAR_10[VAR_10[0] - 1], VAR_5, 0);
   if (!VAR_5)
    return (-1);
   VAR_10 = (u_int16_t *)VAR_5->page;
  } else {

   VAR_14 = (char *)VAR_10;
   VAR_12 = VAR_10[VAR_10[0]];
   VAR_7->data = (u_char *)VAR_14 + VAR_12;
   VAR_7->size = VAR_10[1] - VAR_12;
   if (VAR_8) {
    if (VAR_10[0] == 2) {

     VAR_4->cpage = ((void*)0);
     VAR_4->cbucket++;
     VAR_4->cndx = 1;
    } else {
     VAR_4->cpage = FUNC_1(VAR_4,
         VAR_10[VAR_10[0] - 1], VAR_5, 0);
     if (!VAR_4->cpage)
      return (-1);
     VAR_4->cndx = 1;
     if (!((u_int16_t *)
         VAR_4->cpage->page)[0]) {
      VAR_4->cbucket++;
      VAR_4->cpage = ((void*)0);
     }
    }
   }
   return (0);
  }

 VAR_7->size = (size_t)FUNC_2(VAR_4, VAR_5, (int)VAR_11, VAR_8);
 if (VAR_7->size == (size_t)-1)
  return (-1);
 if (VAR_9->addr != VAR_13) {

  VAR_3 = VAR_0;
  return (-1);
 }
 FUNC_3(VAR_4->tmp_buf, (VAR_9->page) + VAR_12, VAR_11);
 VAR_7->data = (u_char *)VAR_4->tmp_buf;
 return (0);
}
