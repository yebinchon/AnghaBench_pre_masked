
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int,char const*) ;
 int FUNC_2 (char*,...) ;

void
FUNC_3(int VAR_1, const char *VAR_2)
{

 FUNC_1(VAR_1, FUNC_0(VAR_0), VAR_2);
 if (FUNC_0(VAR_0) >= VAR_1)
  FUNC_2("Obsolete code will removed soon: %s\n", VAR_2);
 else
  FUNC_2("Deprecated code (to be removed in FreeBSD %d): %s\n",
      VAR_1, VAR_2);
}
