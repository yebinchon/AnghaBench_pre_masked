
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trail {scalar_t__ tr_magic; int tr_filename; int tr_dirfp; } ;
struct dirent {int d_name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 struct dirent* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static bool
FUNC_7(struct trail *VAR_2)
{
 struct dirent *VAR_3;

 FUNC_0(VAR_2->tr_magic == VAR_1);
 FUNC_0(FUNC_6(VAR_2->tr_filename));

 FUNC_3(VAR_2->tr_dirfp);
 while ((VAR_3 = FUNC_2(VAR_2->tr_dirfp)) != ((void*)0)) {
  if (FUNC_5(VAR_3->d_name, VAR_2->tr_filename, VAR_0 + 1) == 0)
   break;
 }
 if (VAR_3 == ((void*)0))
  return (0);
 FUNC_1(FUNC_4(VAR_2->tr_filename, VAR_3->d_name,
     sizeof(VAR_2->tr_filename)) < sizeof(VAR_2->tr_filename));
 return (1);
}
