
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t tlist; size_t nlist; size_t tbuff; size_t nbuff; int * buff; int ** list; } ;
typedef TYPE_1__ stringlist_t ;
typedef int Char ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 void* FUNC_1 (int *,int) ;

__attribute__((used)) static Char *
FUNC_2(stringlist_t *VAR_2, size_t VAR_3)
{
    Char *VAR_4;

    if (VAR_2->tlist <= VAR_2->nlist) {
 VAR_1++;
 VAR_2->tlist += VAR_0;
 VAR_2->list = FUNC_1(*VAR_2->list, VAR_2->tlist * sizeof(Char *));
 FUNC_0(&VAR_1);
    }
    if (VAR_2->tbuff <= VAR_2->nbuff + VAR_3) {
 size_t VAR_5;

 VAR_4 = VAR_2->buff;
 VAR_1++;
 VAR_2->tbuff += VAR_0 + VAR_3;
 VAR_2->buff = FUNC_1(VAR_2->buff, VAR_2->tbuff * sizeof(Char));

 if (VAR_4 != ((void*)0) && VAR_4 != VAR_2->buff) {
     for (VAR_5 = 0; VAR_5 < VAR_2->nlist; VAR_5++)
  VAR_2->list[VAR_5] = VAR_2->buff + (VAR_2->list[VAR_5] - VAR_4);
 }
 FUNC_0(&VAR_1);
    }
    VAR_4 = VAR_2->list[VAR_2->nlist++] = &VAR_2->buff[VAR_2->nbuff];
    VAR_2->nbuff += VAR_3;
    return VAR_4;
}
