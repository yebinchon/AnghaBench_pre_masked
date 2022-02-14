
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sglist_seg {int dummy; } ;
struct sglist {int dummy; } ;


 int VAR_0 ;
 struct sglist* FUNC_0 (int,int ,int) ;
 int FUNC_1 (struct sglist*,int,struct sglist_seg*) ;

struct sglist *
FUNC_2(int VAR_1, int VAR_2)
{
 struct sglist *VAR_3;

 VAR_3 = FUNC_0(sizeof(struct sglist) + VAR_1 * sizeof(struct sglist_seg),
     VAR_0, VAR_2);
 if (VAR_3 == ((void*)0))
  return (((void*)0));
 FUNC_1(VAR_3, VAR_1, (struct sglist_seg *)(VAR_3 + 1));
 return (VAR_3);
}
