
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DBTYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static DBTYPE
FUNC_2(const char *VAR_3)
{
 if (!FUNC_1(VAR_3, "btree"))
  return VAR_0;
 if (!FUNC_1(VAR_3, "hash"))
  return VAR_1;
 if (!FUNC_1(VAR_3, "recno"))
  return VAR_2;
 FUNC_0(1, "%s: unknown type (use btree, hash or recno)", VAR_3);

}
