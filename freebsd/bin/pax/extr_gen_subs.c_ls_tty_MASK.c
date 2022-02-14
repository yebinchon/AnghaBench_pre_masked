
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ st_mtime; int st_mode; } ;
struct TYPE_5__ {int name; TYPE_1__ sb; } ;
typedef TYPE_2__ ARCHD ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__*) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,int,char const*,int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,char*,int ) ;

void
FUNC_6(ARCHD *VAR_9)
{
 char VAR_10[VAR_2];
 char VAR_11[VAR_4];
 const char *VAR_12;

 if (VAR_8 < 0)
  VAR_8 = (*FUNC_1(VAR_3) == 'd');

 if ((VAR_9->sb.st_mtime + VAR_7) <= FUNC_4(((void*)0)))
  VAR_12 = VAR_8 ? VAR_5 : VAR_6;
 else
  VAR_12 = VAR_8 ? VAR_0 : VAR_1;




 if (FUNC_2(VAR_10, VAR_2, VAR_12,
     FUNC_0(&(VAR_9->sb.st_mtime))) == 0)
  VAR_10[0] = '\0';
 FUNC_3(VAR_9->sb.st_mode, VAR_11);
 FUNC_5("%s%s %s\n", VAR_11, VAR_10, VAR_9->name);
 return;
}
