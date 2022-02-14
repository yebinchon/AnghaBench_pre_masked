
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u_long ;
struct termios {long c_cflag; long c_iflag; long c_ispeed; long c_lflag; long c_oflag; long c_ospeed; long* c_cc; } ;
struct cchar {char* name; size_t sub; } ;


 scalar_t__ FUNC_0 (char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 struct cchar* VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,long*) ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (char**,char*) ;

void
FUNC_5(struct termios *VAR_3, char *VAR_4)
{
 struct cchar *VAR_5;
 char *VAR_6, *VAR_7;
 long VAR_8;

 if ((VAR_4 = FUNC_3(VAR_4, ':')) == ((void*)0))
  FUNC_1(((void*)0));
 for (++VAR_4; VAR_4 != ((void*)0);) {
  VAR_7 = FUNC_4(&VAR_4, ":\0");
  if (!VAR_7 || !*VAR_7)
   break;
  if (!(VAR_6 = FUNC_3(VAR_7, '=')))
   FUNC_1(VAR_7);
  *VAR_6++ = '\0';
  (void)FUNC_2(VAR_6, "%lx", (u_long *)&VAR_8);


  if ((*VAR_7 == "cflag"[0] && !strcmp(VAR_7, "cflag"))) {
   VAR_3->c_cflag = VAR_8;
   continue;
  }
  if ((*VAR_7 == "iflag"[0] && !FUNC_0(VAR_7, "iflag"))) {
   VAR_3->c_iflag = VAR_8;
   continue;
  }
  if ((*VAR_7 == "ispeed"[0] && !FUNC_0(VAR_7, "ispeed"))) {
   (void)FUNC_2(VAR_6, "%ld", &VAR_8);
   VAR_3->c_ispeed = VAR_8;
   continue;
  }
  if ((*VAR_7 == "lflag"[0] && !FUNC_0(VAR_7, "lflag"))) {
   VAR_3->c_lflag = VAR_8;
   continue;
  }
  if ((*VAR_7 == "oflag"[0] && !FUNC_0(VAR_7, "oflag"))) {
   VAR_3->c_oflag = VAR_8;
   continue;
  }
  if ((*VAR_7 == "ospeed"[0] && !FUNC_0(VAR_7, "ospeed"))) {
   (void)FUNC_2(VAR_6, "%ld", &VAR_8);
   VAR_3->c_ospeed = VAR_8;
   continue;
  }
  for (VAR_5 = VAR_2; VAR_5->name != ((void*)0); ++VAR_5)
   if ((*VAR_7 == VAR_5->name[0] && !FUNC_0(VAR_7, VAR_5->name))) {
    if (VAR_5->sub == VAR_0 || VAR_5->sub == VAR_1)
     (void)FUNC_2(VAR_6, "%ld", &VAR_8);
    VAR_3->c_cc[VAR_5->sub] = VAR_8;
    break;
   }
  if (VAR_5->name == ((void*)0))
   FUNC_1(VAR_7);
 }
}
