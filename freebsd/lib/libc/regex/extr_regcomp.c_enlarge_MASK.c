
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse {scalar_t__ ssize; int * strip; } ;
typedef scalar_t__ sopno ;
typedef int sop ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_2(struct parse *VAR_1, sopno VAR_2)
{
 sop *VAR_3;

 if (VAR_1->ssize >= VAR_2)
  return 1;

 VAR_3 = FUNC_1(VAR_1->strip, VAR_2, sizeof(sop));
 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_0);
  return 0;
 }
 VAR_1->strip = VAR_3;
 VAR_1->ssize = VAR_2;
 return 1;
}
