
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct elfcopy {scalar_t__* secndx; scalar_t__ strip; int flags; int * v_rel; int * v_grp; } ;
struct TYPE_6__ {size_t member_5; size_t st_shndx; int st_info; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ GElf_Sym ;


 scalar_t__ FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct elfcopy*,int,TYPE_1__*) ;
 int * FUNC_5 (struct elfcopy*,char const*,int ) ;
 int FUNC_6 (struct elfcopy*,size_t) ;
 int FUNC_7 (struct elfcopy*,size_t) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_9 (char*,char const*) ;

__attribute__((used)) static int
FUNC_10(struct elfcopy *VAR_9, size_t VAR_10, int VAR_11, GElf_Sym *VAR_12,
    const char *VAR_13)
{
 GElf_Sym VAR_14 = {
  0,
  0,
  0,
  0,
  0,
  VAR_3,
 };





 if (VAR_11 == 0 && !FUNC_8(VAR_12, &VAR_14, sizeof(GElf_Sym)))
  return (0);


 if (VAR_12->st_shndx != VAR_3 && VAR_12->st_shndx < VAR_2 &&
     VAR_9->secndx[VAR_12->st_shndx] == 0)
  return (1);


 if (FUNC_5(VAR_9, VAR_13, VAR_7) != ((void*)0))
  return (0);

 if (VAR_9->strip == VAR_4)
  return (1);


 if (VAR_9->v_rel == ((void*)0))
  FUNC_6(VAR_9, VAR_10);


 if (VAR_9->v_grp == ((void*)0))
  FUNC_7(VAR_9, VAR_10);





 if (FUNC_5(VAR_9, VAR_13, VAR_8) != ((void*)0)) {
  if (FUNC_0(VAR_9->v_rel, VAR_11)) {
   FUNC_9("not stripping symbol `%s' because it is named"
       " in a relocation", VAR_13);
   return (0);
  }
  return (1);
 }

 if (FUNC_4(VAR_9, VAR_11, VAR_12))
  return (0);

 if (VAR_9->strip == VAR_6)
  return (1);

 if ((VAR_9->flags & VAR_1) && FUNC_3(VAR_12->st_info) &&
     !FUNC_1(VAR_12->st_info))
  return (1);

 if ((VAR_9->flags & VAR_0) && FUNC_3(VAR_12->st_info) &&
     !FUNC_1(VAR_12->st_info) && FUNC_2(VAR_13))
  return (1);

 if (VAR_9->strip == VAR_5 && FUNC_1(VAR_12->st_info))
  return (1);

 return (0);
}
