
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlist {int dummy; } ;
struct magic_set {int ** mlist; } ;
struct magic_map {int dummy; } ;
struct magic {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,struct magic_map*,size_t) ;
 struct magic_map* FUNC_1 (struct magic_set*,struct magic*,size_t) ;
 int FUNC_2 (struct magic_set*,int) ;
 int FUNC_3 (struct magic_set*,int ) ;
 int FUNC_4 () ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;

int
FUNC_7(struct magic_set *VAR_1, struct magic **VAR_2,
    size_t *VAR_3, size_t VAR_4)
{
 size_t VAR_5, VAR_6;
 struct mlist *VAR_7;
 struct magic_map *VAR_8;

 if (VAR_4 == 0)
  return -1;

 (void)FUNC_3(VAR_1, 0);

 FUNC_4();

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_6(VAR_1->mlist[VAR_5]);
  if ((VAR_1->mlist[VAR_5] = FUNC_5()) == ((void*)0)) {
   FUNC_2(VAR_1, sizeof(*VAR_1->mlist[VAR_5]));
   goto fail;
  }
 }

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_8 = FUNC_1(VAR_1, VAR_2[VAR_5], VAR_3[VAR_5]);
  if (VAR_8 == ((void*)0))
   goto fail;

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   if (FUNC_0(VAR_1->mlist[VAR_6], VAR_8, VAR_6) == -1) {
    FUNC_2(VAR_1, sizeof(*VAR_7));
    goto fail;
   }
  }
 }

 return 0;
fail:
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_6(VAR_1->mlist[VAR_5]);
  VAR_1->mlist[VAR_5] = ((void*)0);
 }
 return -1;
}
