
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {int gr_name; } ;
typedef int gid_t ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 struct group* FUNC_3 (int ) ;
 int FUNC_4 (char const*,int ,int *,int*) ;
 int * VAR_2 ;
 int FUNC_5 (char*) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int,int) ;
 int FUNC_8 (int ) ;

int
FUNC_9(const char *VAR_4, gid_t VAR_5)
{
 gid_t *VAR_6;
 int VAR_7, VAR_8;
 struct group *VAR_9;

 if (VAR_3 > 0)
  FUNC_2();

 VAR_3 = VAR_0;




 VAR_6 = FUNC_7(VAR_3, sizeof(*VAR_6));
 VAR_2 = FUNC_7(VAR_3, sizeof(*VAR_2));

 if (FUNC_4(VAR_4, VAR_5, VAR_6, &VAR_3) == -1)
  FUNC_5("getgrouplist: groups list too small");
 for (VAR_7 = 0, VAR_8 = 0; VAR_7 < VAR_3; VAR_7++)
  if ((VAR_9 = FUNC_3(VAR_6[VAR_7])) != ((void*)0))
   VAR_2[VAR_8++] = FUNC_8(VAR_9->gr_name);
 FUNC_1(VAR_6);
 return (VAR_3 = VAR_8);
}
