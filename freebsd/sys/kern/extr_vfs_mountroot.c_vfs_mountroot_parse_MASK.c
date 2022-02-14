
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct mount {int dummy; } ;






 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mount* FUNC_0 (struct mount*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (char**) ;
 int FUNC_5 (char**) ;
 char FUNC_6 (char**) ;
 int FUNC_7 (char**,char) ;
 int FUNC_8 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_9 (struct sbuf*) ;

__attribute__((used)) static int
FUNC_10(struct sbuf *VAR_7, struct mount *VAR_8)
{
 struct mount *VAR_9;
 char *VAR_10;
 int VAR_11;

 VAR_5 = -1;

retry:
 VAR_10 = FUNC_9(VAR_7);
 VAR_9 = FUNC_0(VAR_8, VAR_4);
 VAR_11 = (VAR_9 == ((void*)0)) ? 0 : VAR_1;
 VAR_6 = 131;
 while (VAR_9 == ((void*)0)) {
  VAR_11 = FUNC_7(&VAR_10, VAR_0);
  if (VAR_11 == VAR_2) {
   FUNC_3(&VAR_10);
   continue;
  }
  if (VAR_11 < 0)
   break;
  switch (FUNC_6(&VAR_10)) {
  case '#':
   VAR_11 = FUNC_7(&VAR_10, '\n');
   break;
  case '.':
   VAR_11 = FUNC_4(&VAR_10);
   break;
  default:
   VAR_11 = FUNC_5(&VAR_10);
   if (VAR_11 == -1) {
    FUNC_8("mountroot: invalid file system "
        "specification.\n");
    VAR_11 = 0;
   }
   break;
  }
  if (VAR_11 < 0)
   break;

  if (FUNC_6(&VAR_10) != '\n') {
   FUNC_8("mountroot: advancing to next directive...\n");
   (void)FUNC_7(&VAR_10, '\n');
  }
  VAR_9 = FUNC_0(VAR_8, VAR_4);
 }
 if (VAR_9 != ((void*)0))
  return (0);




 switch (VAR_6) {
 case 131:
  break;
 case 130:
  FUNC_2("mountroot: unable to (re-)mount root.");

 case 128:
  goto retry;
 case 129:
  FUNC_1(VAR_3);

 }

 return (VAR_11);
}
