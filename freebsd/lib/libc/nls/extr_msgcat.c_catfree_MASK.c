
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct catentry {struct catentry* lang; struct catentry* path; struct catentry* name; struct catentry* catd; scalar_t__ __size; int __data; } ;


 struct catentry* VAR_0 ;
 int FUNC_0 (int *,struct catentry*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct catentry*) ;
 int VAR_3 ;
 int FUNC_2 (int ,size_t) ;

__attribute__((used)) static void
FUNC_3(struct catentry *VAR_4)
{

 if (VAR_4->catd != ((void*)0) && VAR_4->catd != VAR_0) {
  FUNC_2(VAR_4->catd->__data, (size_t)VAR_4->catd->__size);
  FUNC_1(VAR_4->catd);
 }
 FUNC_0(&VAR_1, VAR_4, VAR_2, VAR_3);
 FUNC_1(VAR_4->name);
 FUNC_1(VAR_4->path);
 FUNC_1(VAR_4->lang);
 FUNC_1(VAR_4);
}
