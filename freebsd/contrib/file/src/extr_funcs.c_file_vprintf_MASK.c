
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_2__ {char* buf; } ;
struct magic_set {int event_flags; TYPE_1__ o; } ;


 int VAR_0 ;
 int FUNC_0 (char**,char*,char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char**,char const*,int ) ;

int
FUNC_5(struct magic_set *VAR_3, const char *VAR_4, va_list VAR_5)
{
 int VAR_6;
 char *VAR_7, *VAR_8;

 if (VAR_3->event_flags & VAR_0)
  return 0;
 VAR_6 = FUNC_4(&VAR_7, VAR_4, VAR_5);
 if (VAR_6 < 0)
  goto out;

 if (VAR_3->o.buf != ((void*)0)) {
  VAR_6 = FUNC_0(&VAR_8, "%s%s", VAR_3->o.buf, VAR_7);
  FUNC_2(VAR_7);
  if (VAR_6 < 0)
   goto out;
  FUNC_2(VAR_3->o.buf);
  VAR_7 = VAR_8;
 }
 VAR_3->o.buf = VAR_7;
 return 0;
out:
 FUNC_1(VAR_2, "vasprintf failed (%s)", FUNC_3(VAR_1));
 return -1;
}
