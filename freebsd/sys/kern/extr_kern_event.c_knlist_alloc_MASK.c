
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx {int dummy; } ;
struct knlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct knlist*,struct mtx*) ;
 struct knlist* FUNC_1 (int,int ,int ) ;

struct knlist *
FUNC_2(struct mtx *VAR_2)
{
 struct knlist *VAR_3;

 VAR_3 = FUNC_1(sizeof(struct knlist), VAR_0, VAR_1);
 FUNC_0(VAR_3, VAR_2);
 return (VAR_3);
}
