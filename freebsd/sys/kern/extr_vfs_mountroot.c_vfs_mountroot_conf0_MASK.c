
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char**,char**) ;
 int VAR_6 ;
 int ** VAR_7 ;
 int FUNC_4 (struct sbuf*,char*,...) ;

__attribute__((used)) static void
FUNC_5(struct sbuf *VAR_8)
{
 char *VAR_9, *VAR_10, *VAR_11, *VAR_12;
 int VAR_13;

 FUNC_4(VAR_8, ".onfail panic\n");
 FUNC_4(VAR_8, ".timeout %d\n", VAR_6);
 if (VAR_5 & VAR_1)
  FUNC_4(VAR_8, ".ask\n");




 if (VAR_5 & VAR_2) {
  FUNC_4(VAR_8, "cd9660:/dev/cd0 ro\n");
  FUNC_4(VAR_8, ".timeout 0\n");
  FUNC_4(VAR_8, "cd9660:/dev/cd1 ro\n");
  FUNC_4(VAR_8, ".timeout %d\n", VAR_6);
 }
 VAR_9 = FUNC_2("vfs.root.mountfrom");
 if (VAR_9 != ((void*)0)) {
  VAR_12 = FUNC_2("vfs.root.mountfrom.options");
  VAR_10 = VAR_9;
  VAR_13 = FUNC_3(&VAR_10, &VAR_11);
  while (!VAR_13) {
   FUNC_4(VAR_8, "%s %s\n", VAR_11,
       (VAR_12 != ((void*)0)) ? VAR_12 : "");
   FUNC_0(VAR_11, VAR_0);
   VAR_13 = FUNC_3(&VAR_10, &VAR_11);
  }
  if (VAR_12 != ((void*)0))
   FUNC_1(VAR_12);
  FUNC_1(VAR_9);
 }
 if (VAR_7[0] != ((void*)0))
  FUNC_4(VAR_8, "%s\n", VAR_7[0]);
 if (VAR_7[1] != ((void*)0))
  FUNC_4(VAR_8, "%s\n", VAR_7[1]);




 if (!(VAR_5 & VAR_1))
  FUNC_4(VAR_8, ".ask\n");
}
