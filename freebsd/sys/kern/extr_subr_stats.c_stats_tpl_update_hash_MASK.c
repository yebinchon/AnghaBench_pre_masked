
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct statsblob_tpl {TYPE_2__* mb; TYPE_3__* sb; } ;
struct TYPE_7__ {int cursz; } ;
struct TYPE_6__ {void* tplhash; TYPE_1__* voi_meta; int * tplname; } ;
struct TYPE_5__ {int * name; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 () ;
 void* FUNC_2 (TYPE_3__*,int ,void*) ;
 void* FUNC_3 (int *,void*) ;

__attribute__((used)) static inline void
FUNC_4(struct statsblob_tpl *VAR_0)
{

 FUNC_1();
 VAR_0->mb->tplhash = FUNC_3(VAR_0->mb->tplname, 0);
 for (int VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->sb); VAR_1++) {
  if (VAR_0->mb->voi_meta[VAR_1].name != ((void*)0))
   VAR_0->mb->tplhash = FUNC_3(
       VAR_0->mb->voi_meta[VAR_1].name, VAR_0->mb->tplhash);
 }
 VAR_0->mb->tplhash = FUNC_2(VAR_0->sb, VAR_0->sb->cursz,
     VAR_0->mb->tplhash);
}
