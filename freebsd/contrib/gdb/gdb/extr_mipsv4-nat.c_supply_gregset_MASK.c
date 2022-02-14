
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * gregset_t ;
typedef int greg_t ;
struct TYPE_2__ {int pc; int hi; int lo; int cause; int badvaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*,int ,int) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;

void
FUNC_3 (gregset_t *VAR_12)
{
  int VAR_13;
  greg_t *VAR_14 = &(*VAR_12)[0];
  char VAR_15[VAR_8];
  FUNC_0 (VAR_15, 0, VAR_8);

  for (VAR_13 = 0; VAR_13 <= VAR_4; VAR_13++)
    FUNC_2 (VAR_13, (char *) (VAR_14 + VAR_13));

  FUNC_2 (FUNC_1 (VAR_11)->pc,
     (char *) (VAR_14 + VAR_1));
  FUNC_2 (FUNC_1 (VAR_11)->hi,
     (char *) (VAR_14 + VAR_2));
  FUNC_2 (FUNC_1 (VAR_11)->lo,
     (char *) (VAR_14 + VAR_3));
  FUNC_2 (FUNC_1 (VAR_11)->cause,
     (char *) (VAR_14 + VAR_0));


  FUNC_2 (VAR_9, VAR_15);
  FUNC_2 (FUNC_1 (VAR_11)->badvaddr, VAR_15);
  FUNC_2 (VAR_5, VAR_15);
  FUNC_2 (VAR_10, VAR_15);
  for (VAR_13 = VAR_6; VAR_13 <= VAR_7; VAR_13++)
    FUNC_2 (VAR_13, VAR_15);
}
