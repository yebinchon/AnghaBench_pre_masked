
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
 int FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (struct futx*,int,int,int *) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct futx *VAR_4)
{
 FILE *VAR_5;
 struct futx VAR_6;
 int VAR_7, VAR_8;




 VAR_5 = FUNC_3(VAR_2);
 if (VAR_5 == ((void*)0))
  return (-1);
 VAR_7 = VAR_0;
 VAR_8 = -1;
 while (FUNC_1(&VAR_6, sizeof(VAR_6), 1, VAR_5) == 1 && VAR_8 != 0)
  switch (VAR_6.fu_type) {
  case 128:
  case 130:
  case 129:
   if (FUNC_5(VAR_4->fu_id, VAR_6.fu_id, sizeof(VAR_6.fu_id)) != 0)
    continue;


   if (FUNC_2(VAR_5, -(off_t)sizeof(VAR_6), VAR_1) == -1)
    VAR_7 = VAR_3;
   else if (FUNC_4(VAR_4, sizeof(*VAR_4), 1, VAR_5) < 1)
    VAR_7 = VAR_3;
   else
    VAR_8 = 0;

  }

 FUNC_0(VAR_5);
 if (VAR_8 != 0)
  VAR_3 = VAR_7;
 return (VAR_8);
}
