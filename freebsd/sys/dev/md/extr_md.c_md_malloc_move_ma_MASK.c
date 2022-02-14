
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_page_t ;
typedef int u_char ;
struct sf_buf {int dummy; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,void*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int,unsigned int) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 struct sf_buf* FUNC_8 (int *,int) ;
 int FUNC_9 (struct sf_buf*) ;
 scalar_t__ FUNC_10 (struct sf_buf*) ;

__attribute__((used)) static int
FUNC_11(vm_page_t **VAR_6, int *VAR_7, unsigned VAR_8,
    void *VAR_9, u_char VAR_10, int VAR_11)
{
 struct sf_buf *VAR_12;
 vm_page_t VAR_13, *VAR_14;
 char *VAR_15, VAR_16;
 off_t *VAR_17;
 unsigned VAR_18;
 int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;

 VAR_13 = ((void*)0);
 VAR_19 = 0;
 VAR_12 = ((void*)0);

  VAR_16 = 0;
  VAR_23 = 0;
  VAR_17 = VAR_9;
  VAR_14 = *VAR_6;
  VAR_21 = *VAR_7;

 FUNC_6();
 for (VAR_18 = VAR_8; VAR_18 != 0; VAR_18 -= VAR_22) {
  VAR_22 = FUNC_4(VAR_2 - *VAR_7, VAR_18);
  if (VAR_13 != **VAR_6) {
   if (VAR_12 != ((void*)0))
    FUNC_9(VAR_12);
   VAR_13 = **VAR_6;
   VAR_12 = FUNC_8(VAR_13, VAR_3 |
       (VAR_5 ? 0 : VAR_4));
   if (VAR_12 == ((void*)0)) {
    VAR_19 = VAR_1;
    break;
   }
  }
  VAR_15 = (char *)FUNC_10(VAR_12) + *VAR_7;
  switch (VAR_11) {
  case 128:
   FUNC_2(VAR_15, VAR_22);
   break;
  case 131:
   FUNC_5(VAR_15, VAR_10, VAR_22);
   break;
  case 130:
   FUNC_1(VAR_9, VAR_15, VAR_22);
   FUNC_3(VAR_15, VAR_22);
   break;
  case 129:
   FUNC_1(VAR_15, VAR_9, VAR_22);
   break;
  case 132:
   for (VAR_20 = 0; VAR_20 < VAR_22; VAR_20++, VAR_15++) {
    if (!VAR_23) {
     *VAR_17 = (u_char)*VAR_15;
     VAR_16 = *VAR_15;
     VAR_23 = 1;
    } else if (*VAR_15 != VAR_16) {
     VAR_19 = VAR_0;
     break;
    }
   }
   break;
  default:
   FUNC_0(0, ("md_malloc_move_ma unknown op %d\n", VAR_11));
   break;
  }
  if (VAR_19 != 0)
   break;
  *VAR_7 += VAR_22;
  *VAR_7 %= VAR_2;
  if (*VAR_7 == 0)
   (*VAR_6)++;
  VAR_9 = (char *)VAR_9 + VAR_22;
 }

 if (VAR_12 != ((void*)0))
  FUNC_9(VAR_12);
 FUNC_7();
 if (VAR_11 == 132 && VAR_19 != 0) {
  *VAR_6 = VAR_14;
  *VAR_7 = VAR_21;
 }
 return (VAR_19);
}
