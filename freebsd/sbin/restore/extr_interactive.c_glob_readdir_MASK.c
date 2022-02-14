
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {scalar_t__ d_fileno; int d_name; scalar_t__ d_namlen; } ;
struct direct {scalar_t__ d_ino; scalar_t__ d_namlen; int d_name; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 struct direct* FUNC_2 (void*) ;
 int VAR_3 ;

struct dirent *
FUNC_3(void *VAR_4)
{
 struct direct *VAR_5;
 static struct dirent VAR_6;

 while ((VAR_5 = FUNC_2(VAR_4)) != ((void*)0)) {
  if (!VAR_3 && VAR_5->d_ino == VAR_0)
   continue;
  if (VAR_1 || FUNC_0(VAR_5->d_ino, VAR_2))
   break;
 }
 if (VAR_5 == ((void*)0))
  return (((void*)0));
 VAR_6.d_fileno = VAR_5->d_ino;
 VAR_6.d_namlen = VAR_5->d_namlen;
 FUNC_1(VAR_6.d_name, VAR_5->d_name, VAR_5->d_namlen + 1);
 return (&VAR_6);
}
