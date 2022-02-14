
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union dinode {int dummy; } dinode ;
struct inodesc {int id_name; int id_fix; scalar_t__ id_parent; scalar_t__ id_number; int id_func; int id_type; } ;
typedef scalar_t__ ino_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (union dinode*,int ) ;
 int FUNC_1 (union dinode*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (union dinode*,struct inodesc*) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (union dinode*,char*) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__) ;
 union dinode* FUNC_5 (scalar_t__) ;
 int FUNC_6 (union dinode*) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (struct inodesc*,int ,int) ;
 int VAR_8 ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (char const*) ;

int
FUNC_10(ino_t VAR_9, ino_t VAR_10, const char *VAR_11)
{
 union dinode *VAR_12;
 struct inodesc VAR_13;
 char VAR_14[VAR_4 + 1];

 if (VAR_9 < VAR_5 || VAR_9 >= VAR_7 ||
     VAR_10 < VAR_5 || VAR_10 >= VAR_7)
  return (0);
 FUNC_7(&VAR_13, 0, sizeof(struct inodesc));
 VAR_13.id_type = VAR_1;
 VAR_13.id_func = VAR_8;
 VAR_13.id_number = VAR_9;
 VAR_13.id_parent = VAR_10;
 VAR_13.id_fix = VAR_3;
 VAR_13.id_name = FUNC_9(VAR_11);
 VAR_12 = FUNC_5(VAR_9);
 if (FUNC_0(VAR_12, VAR_6) % VAR_2) {
  FUNC_1(VAR_12, VAR_6, FUNC_8(FUNC_0(VAR_12, VAR_6), VAR_2));
  FUNC_6(VAR_12);
 }
 if ((FUNC_2(VAR_12, &VAR_13) & VAR_0) != 0)
  return (1);
 FUNC_4(VAR_14, VAR_9, VAR_9);
 VAR_12 = FUNC_5(VAR_9);
 if (FUNC_3(VAR_12, VAR_14) == 0)
  return (0);
 return (FUNC_2(VAR_12, &VAR_13) & VAR_0);
}
