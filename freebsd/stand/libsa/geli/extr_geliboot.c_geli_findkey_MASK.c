
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct geli_dev {size_t keybuf_slot; int md; } ;


 scalar_t__ FUNC_0 (int *,int ,int *,int *) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct geli_dev *VAR_2, u_char *VAR_3)
{
 u_int VAR_4;
 int VAR_5;

 if (VAR_2->keybuf_slot >= 0) {
  if (FUNC_0(&VAR_2->md, VAR_1[VAR_2->keybuf_slot],
      VAR_3, &VAR_4) == 0) {
   return (0);
  }
 }

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (FUNC_0(&VAR_2->md, VAR_1[VAR_5], VAR_3,
      &VAR_4) == 0) {
   VAR_2->keybuf_slot = VAR_5;
   return (0);
  }
 }

 return (1);
}
