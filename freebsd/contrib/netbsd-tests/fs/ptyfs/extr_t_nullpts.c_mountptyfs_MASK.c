
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptyfs_args {int mode; int version; } ;
typedef int args ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct ptyfs_args*,int ,int) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (int ,char const*,int,struct ptyfs_args*,int) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_4, int VAR_5)
{
 struct ptyfs_args VAR_6;

 if (FUNC_2(VAR_4, 0777) == -1) {
  if (VAR_3 != VAR_0)
   FUNC_0("null create %s", VAR_4);
 }
 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.version = VAR_2;
 VAR_6.mode = 0777;
 if (FUNC_3(VAR_1, VAR_4, VAR_5, &VAR_6, sizeof(VAR_6)) == -1)
  FUNC_0("could not mount ptyfs");
}
