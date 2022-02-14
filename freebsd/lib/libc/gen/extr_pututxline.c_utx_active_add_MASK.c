
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct futx {int fu_type; int fu_id; } ;
typedef int off_t ;
typedef int fe ;
typedef int FILE ;






 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct futx*,int,int,int *) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (struct futx const*,int,int,int *) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_7(const struct futx *VAR_4)
{
 FILE *VAR_5;
 struct futx VAR_6;
 off_t VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = -1;
 VAR_9 = 0;





 VAR_5 = FUNC_4(VAR_2);
 if (VAR_5 == ((void*)0))
  return (-1);
 while (FUNC_1(&VAR_6, sizeof(VAR_6), 1, VAR_5) == 1) {
  switch (VAR_6.fu_type) {
  case 132:

   break;
  case 128:
  case 130:
  case 129:
  case 131:

   if (FUNC_6(VAR_4->fu_id, VAR_6.fu_id, sizeof(VAR_6.fu_id)) ==
       0) {
    VAR_9 = FUNC_2(VAR_5, -(off_t)sizeof(VAR_6), VAR_0);
    goto exact;
   }
   if (VAR_6.fu_type != 131)
    break;

  default:

   if (VAR_7 == -1) {
    VAR_7 = FUNC_3(VAR_5);




    if (VAR_7 != -1)
     VAR_7 -= (off_t)sizeof(VAR_6);
   }
   break;
  }
 }





 if (VAR_7 != -1)
  VAR_9 = FUNC_2(VAR_5, VAR_7, VAR_1);
exact:
 if (VAR_9 == -1)
  VAR_8 = VAR_3;
 else if (FUNC_5(VAR_4, sizeof(*VAR_4), 1, VAR_5) < 1)
  VAR_8 = VAR_3;
 else
  VAR_8 = 0;
 FUNC_0(VAR_5);
 if (VAR_8 != 0)
  VAR_3 = VAR_8;
 return (VAR_8 == 0 ? 0 : 1);
}
