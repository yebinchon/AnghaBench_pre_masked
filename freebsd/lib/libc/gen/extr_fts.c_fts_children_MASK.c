
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* fts_child; TYPE_1__* fts_cur; } ;
struct TYPE_7__ {scalar_t__ fts_info; scalar_t__ fts_level; char* fts_accpath; struct TYPE_7__* fts_link; } ;
typedef TYPE_1__ FTSENT ;
typedef TYPE_2__ FTS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,int ) ;
 int VAR_11 ;
 int FUNC_4 (int) ;
 void* FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_1__*) ;

FTSENT *
FUNC_7(FTS *VAR_12, int VAR_13)
{
 FTSENT *VAR_14;
 int VAR_15, VAR_16, VAR_17;

 if (VAR_13 != 0 && VAR_13 != VAR_5) {
  VAR_11 = VAR_2;
  return (((void*)0));
 }


 VAR_14 = VAR_12->fts_cur;





 VAR_11 = 0;


 if (FUNC_0(VAR_8))
  return (((void*)0));


 if (VAR_14->fts_info == VAR_4)
  return (VAR_14->fts_link);






 if (VAR_14->fts_info != VAR_3 )
  return (((void*)0));


 if (VAR_12->fts_child != ((void*)0))
  FUNC_6(VAR_12->fts_child);

 if (VAR_13 == VAR_5) {
  FUNC_1(VAR_5);
  VAR_13 = VAR_1;
 } else
  VAR_13 = VAR_0;
 if (VAR_14->fts_level != VAR_7 || VAR_14->fts_accpath[0] == '/' ||
     FUNC_0(VAR_6))
  return (VAR_12->fts_child = FUNC_5(VAR_12, VAR_13));

 if ((VAR_15 = FUNC_3(".", VAR_10 | VAR_9, 0)) < 0)
  return (((void*)0));
 VAR_12->fts_child = FUNC_5(VAR_12, VAR_13);
 VAR_17 = (VAR_12->fts_child == ((void*)0)) ? VAR_11 : 0;
 VAR_16 = FUNC_4(VAR_15);
 if (VAR_16 < 0 && VAR_17 == 0)
  VAR_17 = VAR_11;
 (void)FUNC_2(VAR_15);
 VAR_11 = VAR_17;
 if (VAR_16 < 0)
  return (((void*)0));
 return (VAR_12->fts_child);
}
