
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,int,char const*) ;

void
FUNC_3(device_t VAR_1, int VAR_2, const char *VAR_3)
{

 FUNC_2(VAR_2, FUNC_0(VAR_0), VAR_3);
 if (FUNC_0(VAR_0) >= VAR_2)
  FUNC_1(VAR_1,
      "Obsolete code will removed soon: %s\n", VAR_3);
 else
  FUNC_1(VAR_1,
      "Deprecated code (to be removed in FreeBSD %d): %s\n",
      VAR_2, VAR_3);
}
