
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inotab {int t_seekpt; } ;
typedef int ino_t ;
typedef void RST_DIR ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 struct inotab* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (void*,int ,int ) ;

void *
FUNC_4(const char *VAR_1)
{
 struct inotab *VAR_2;
 RST_DIR *VAR_3;
 ino_t VAR_4;

 if ((VAR_4 = FUNC_0(VAR_1)) > 0 &&
     (VAR_2 = FUNC_1(VAR_4)) != ((void*)0)) {
  VAR_3 = FUNC_2(VAR_0);
  FUNC_3(VAR_3, VAR_2->t_seekpt, VAR_2->t_seekpt);
  return (VAR_3);
 }
 return (((void*)0));
}
