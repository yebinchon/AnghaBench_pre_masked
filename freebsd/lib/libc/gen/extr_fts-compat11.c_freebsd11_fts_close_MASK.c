
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ fts_level; int fts_rfd; struct TYPE_5__* fts_path; struct TYPE_5__* fts_array; scalar_t__ fts_child; struct TYPE_5__* fts_parent; struct TYPE_5__* fts_link; struct TYPE_5__* fts_cur; } ;
typedef TYPE_1__ FTSENT11 ;
typedef TYPE_1__ FTS11 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;

int
FUNC_5(FTS11 *VAR_3)
{
 FTSENT11 *VAR_4, *VAR_5;
 int VAR_6;






 if (VAR_3->fts_cur) {
  for (VAR_5 = VAR_3->fts_cur; VAR_5->fts_level >= VAR_1;) {
   VAR_4 = VAR_5;
   VAR_5 = VAR_5->fts_link != ((void*)0) ? VAR_5->fts_link : VAR_5->fts_parent;
   FUNC_3(VAR_4);
  }
  FUNC_3(VAR_5);
 }


 if (VAR_3->fts_child)
  FUNC_4(VAR_3->fts_child);
 if (VAR_3->fts_array)
  FUNC_3(VAR_3->fts_array);
 FUNC_3(VAR_3->fts_path);


 if (!FUNC_0(VAR_0)) {
  VAR_6 = FUNC_2(VAR_3->fts_rfd) ? VAR_2 : 0;
  (void)FUNC_1(VAR_3->fts_rfd);


  if (VAR_6 != 0) {

   FUNC_3(VAR_3);
   VAR_2 = VAR_6;
   return (-1);
  }
 }


 FUNC_3(VAR_3);
 return (0);
}
