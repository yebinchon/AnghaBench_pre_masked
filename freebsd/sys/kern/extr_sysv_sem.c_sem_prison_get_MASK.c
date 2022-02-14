
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsoptlist {int dummy; } ;
struct prison {int dummy; } ;
typedef int jsys ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct prison* FUNC_0 (struct prison*,int ) ;
 int FUNC_1 (struct prison*) ;
 int FUNC_2 (struct prison*) ;
 int VAR_4 ;
 int FUNC_3 (struct vfsoptlist*,char*,int*,int) ;

__attribute__((used)) static int
FUNC_4(void *VAR_5, void *VAR_6)
{
 struct prison *VAR_7 = VAR_5;
 struct prison *VAR_8;
 struct vfsoptlist *VAR_9 = VAR_6;
 int VAR_10, VAR_11;


 FUNC_1(VAR_7);
 VAR_8 = FUNC_0(VAR_7, VAR_4);
 FUNC_2(VAR_7);
 VAR_11 = VAR_8 == ((void*)0) ? VAR_1
     : VAR_8 == VAR_7 ? VAR_3 : VAR_2;
 VAR_10 = FUNC_3(VAR_9, "sysvsem", &VAR_11, sizeof(VAR_11));
 if (VAR_10 == VAR_0)
  VAR_10 = 0;
 return (VAR_10);
}
