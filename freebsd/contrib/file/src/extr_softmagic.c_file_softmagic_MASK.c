
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct mlist {int nmagic; int magic; struct mlist* next; } ;
struct magic_set {struct mlist** mlist; } ;
struct buffer {int dummy; } ;


 int FUNC_0 (struct magic_set*,int ,int ,struct buffer const*,int ,int,int,int ,scalar_t__*,scalar_t__*,int*,int*,int *,int *) ;

int
FUNC_1(struct magic_set *VAR_0, const struct buffer *VAR_1,
    uint16_t *VAR_2, uint16_t *VAR_3, int VAR_4, int VAR_5)
{
 struct mlist *VAR_6;
 int VAR_7, VAR_8 = 0, VAR_9 = 0;
 uint16_t VAR_10, VAR_11;

 if (VAR_3 == ((void*)0)) {
  VAR_10 = 0;
  VAR_3 = &VAR_10;
 }
 if (VAR_2 == ((void*)0)) {
  VAR_11 = 0;
  VAR_2 = &VAR_11;
 }

 for (VAR_6 = VAR_0->mlist[0]->next; VAR_6 != VAR_0->mlist[0]; VAR_6 = VAR_6->next)
  if ((VAR_7 = FUNC_0(VAR_0, VAR_6->magic, VAR_6->nmagic, VAR_1, 0, VAR_4,
      VAR_5, 0, VAR_2, VAR_3,
      &VAR_8, &VAR_9, ((void*)0), ((void*)0))) != 0)
   return VAR_7;

 return 0;
}
