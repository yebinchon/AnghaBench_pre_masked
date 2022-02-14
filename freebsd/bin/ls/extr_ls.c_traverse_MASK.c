
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int fts_info; char* fts_name; int fts_path; int fts_level; int fts_errno; } ;
typedef TYPE_1__ FTSENT ;
typedef int FTS ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int * FUNC_3 (char**,int,int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*,int ) ;
 int * VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char) ;
 int FUNC_8 (char*) ;
 int VAR_12 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,char*,...) ;

__attribute__((used)) static void
FUNC_11(int VAR_13, char *VAR_14[], int VAR_15)
{
 FTS *VAR_16;
 FTSENT *VAR_17, *VAR_18;
 int VAR_19;

 if ((VAR_16 =
     FUNC_3(VAR_14, VAR_15, VAR_8 ? ((void*)0) : VAR_10)) == ((void*)0))
  FUNC_1(1, "fts_open");





 VAR_18 = FUNC_2(VAR_16, 0);
 if (VAR_18 != ((void*)0))
  FUNC_0(((void*)0), VAR_18, VAR_15);
 if (VAR_6)
  return;





 VAR_19 = !VAR_9 && !VAR_5 &&
     VAR_15 & VAR_1 ? VAR_0 : 0;

 while ((VAR_17 = FUNC_4(VAR_16)) != ((void*)0))
  switch (VAR_17->fts_info) {
  case 130:
   FUNC_10("%s: directory causes a cycle", VAR_17->fts_name);
   break;
  case 129:
  case 128:
   FUNC_10("%s: %s", VAR_17->fts_path, FUNC_9(VAR_17->fts_errno));
   VAR_12 = 1;
   break;
  case 131:
   if (VAR_17->fts_level != VAR_2 &&
       VAR_17->fts_name[0] == '.' && !VAR_7)
    break;






   if (VAR_11) {
    FUNC_7('\n');
    (void)FUNC_6(VAR_17->fts_path);
    FUNC_8(":");
   } else if (VAR_13 > 1) {
    (void)FUNC_6(VAR_17->fts_path);
    FUNC_8(":");
    VAR_11 = 1;
   }
   VAR_18 = FUNC_2(VAR_16, VAR_19);
   FUNC_0(VAR_17, VAR_18, VAR_15);

   if (!VAR_9 && VAR_18 != ((void*)0))
    (void)FUNC_5(VAR_16, VAR_17, VAR_3);
   break;
  default:
   break;
  }
 if (VAR_4)
  FUNC_1(1, "fts_read");
}
