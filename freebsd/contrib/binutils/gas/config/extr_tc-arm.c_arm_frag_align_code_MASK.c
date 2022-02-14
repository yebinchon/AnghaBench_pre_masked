
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbolS ;
typedef int relax_substateT ;
typedef int offsetT ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ,int,int,int ,int *,int ,char*) ;
 int VAR_1 ;

void
FUNC_3 (int VAR_2, int VAR_3)
{
  char * VAR_4;



  if (VAR_3 > VAR_0)
    FUNC_1 (FUNC_0("alignments greater than 32 bytes not supported in .text sections."));

  VAR_4 = FUNC_2 (VAR_1,
  VAR_0,
  1,
  (relax_substateT) VAR_3,
  (symbolS *) ((void*)0),
  (offsetT) VAR_2,
  (char *) ((void*)0));
  *VAR_4 = 0;
}
