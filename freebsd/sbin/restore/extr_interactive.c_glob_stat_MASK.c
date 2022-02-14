
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct direct {scalar_t__ d_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct direct* FUNC_2 (char const*) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_3(const char *VAR_7, struct stat *VAR_8)
{
 struct direct *VAR_9;

 VAR_9 = FUNC_2(VAR_7);
 if (VAR_9 == ((void*)0) || (!VAR_4 && FUNC_0(VAR_9->d_ino, VAR_5) == 0) ||
     (!VAR_6 && VAR_9->d_ino == VAR_3))
  return (-1);
 if (FUNC_1(VAR_9->d_ino) == VAR_2)
  VAR_8->st_mode = VAR_0;
 else
  VAR_8->st_mode = VAR_1;
 return (0);
}
