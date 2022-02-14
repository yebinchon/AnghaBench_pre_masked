
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (char*,char*,...) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int,char*,int) ;
 scalar_t__ FUNC_4 (char*,char**,int ) ;

__attribute__((used)) static void
FUNC_5(void)
{
 char *VAR_4, *VAR_5;
 char VAR_6[10];

 if ((VAR_4 = FUNC_0("nfs.read_size")) != ((void*)0)) {
  VAR_2 = 0;
  VAR_3 = (int)FUNC_4(VAR_4, &VAR_5, 0);
  if (VAR_2 != 0 || *VAR_4 == '\0' || *VAR_5 != '\0') {
   FUNC_1("%s: bad value: \"%s\", defaulting to %d\n",
       "nfs.read_size", VAR_4, VAR_1);
   VAR_3 = VAR_1;
  }
 }
 if (VAR_3 < VAR_1) {
  FUNC_1("%s: bad value: \"%d\", defaulting to %d\n",
      "nfs.read_size", VAR_3, VAR_1);
  VAR_3 = VAR_1;
 }
 if (VAR_3 > VAR_0) {
  FUNC_1("%s: bad value: \"%d\", defaulting to %d\n",
      "nfs.read_size", VAR_3, VAR_1);
  VAR_3 = VAR_0;
 }
 FUNC_3(VAR_6, sizeof (VAR_6), "%d", VAR_3);
 FUNC_2("nfs.read_size", VAR_6, 1);
}
