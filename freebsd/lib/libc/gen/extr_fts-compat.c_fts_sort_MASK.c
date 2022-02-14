
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int fts_nitems; TYPE_1__** fts_array; } ;
struct TYPE_9__ {struct TYPE_9__* fts_link; } ;
typedef TYPE_1__ FTSENT ;
typedef TYPE_2__ FTS ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__**,int,int,int ) ;
 TYPE_1__** FUNC_1 (TYPE_1__**,int) ;

__attribute__((used)) static FTSENT *
FUNC_2(FTS *VAR_1, FTSENT *VAR_2, int VAR_3)
{
 FTSENT **VAR_4, *VAR_5;
 if (VAR_3 > VAR_1->fts_nitems) {
  VAR_1->fts_nitems = VAR_3 + 40;
  if ((VAR_1->fts_array = FUNC_1(VAR_1->fts_array,
      VAR_1->fts_nitems * sizeof(FTSENT *))) == ((void*)0)) {
   VAR_1->fts_nitems = 0;
   return (VAR_2);
  }
 }
 for (VAR_4 = VAR_1->fts_array, VAR_5 = VAR_2; VAR_5; VAR_5 = VAR_5->fts_link)
  *VAR_4++ = VAR_5;
 FUNC_0(VAR_1->fts_array, VAR_3, sizeof(FTSENT *), VAR_0);
 for (VAR_2 = *(VAR_4 = VAR_1->fts_array); --VAR_3; ++VAR_4)
  VAR_4[0]->fts_link = VAR_4[1];
 VAR_4[0]->fts_link = ((void*)0);
 return (VAR_2);
}
