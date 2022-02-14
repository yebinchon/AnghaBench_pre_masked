
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse {scalar_t__ error; int slen; int ssize; int * strip; } ;
typedef int sop ;


 int VAR_0 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct parse*,int) ;

__attribute__((used)) static void
FUNC_3(struct parse *VAR_1, sop VAR_2, size_t VAR_3)
{

 if (VAR_1->error != 0)
  return;


 FUNC_1(VAR_3 < 1<<VAR_0);


 if (VAR_1->slen >= VAR_1->ssize)
  FUNC_2(VAR_1, (VAR_1->ssize+1) / 2 * 3);
 FUNC_1(VAR_1->slen < VAR_1->ssize);


 VAR_1->strip[VAR_1->slen++] = FUNC_0(VAR_2, VAR_3);
}
