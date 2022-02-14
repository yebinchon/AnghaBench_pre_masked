
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unionargs ;
struct union_args {char* target; int mntflags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct union_args*,int ,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,char const*,int ,struct union_args*,int) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_4, char *VAR_5)
{
 struct union_args VAR_6;

 FUNC_5(VAR_5, "/lower");
 FUNC_3(VAR_5, 0777);


 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.target = VAR_5;
 VAR_6.mntflags = VAR_2;

 if (FUNC_4(VAR_1, VAR_4, 0,
     &VAR_6, sizeof(VAR_6)) == -1) {
  if (VAR_3 == VAR_0) {
   FUNC_1("fs does not support VOP_WHITEOUT");
  } else {
   FUNC_0("union mount");
  }
 }
}
