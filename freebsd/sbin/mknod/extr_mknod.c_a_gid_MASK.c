
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {int gr_gid; } ;
typedef int gid_t ;


 int FUNC_0 (int,char*) ;
 struct group* FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static gid_t
FUNC_3(const char *VAR_0)
{
 struct group *VAR_1;

 if (*VAR_0 == '\0')
  FUNC_0(1, "group must be specified when the owner is");
 return ((VAR_1 = FUNC_1(VAR_0)) == ((void*)0)) ? FUNC_2(VAR_0, "group") : VAR_1->gr_gid;
}
