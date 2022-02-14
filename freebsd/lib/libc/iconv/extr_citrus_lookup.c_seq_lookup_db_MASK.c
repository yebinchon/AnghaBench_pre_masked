
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _region {int dummy; } ;
struct _citrus_lookup {int cl_dblocator; int cl_key; int cl_db; int cl_keylen; scalar_t__ cl_ignore_case; scalar_t__ cl_rewind; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,struct _region*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct _citrus_lookup *VAR_0, const char *VAR_1, struct _region *VAR_2)
{

 VAR_0->cl_rewind = 0;
 FUNC_3(VAR_0->cl_key);
 VAR_0->cl_key = FUNC_4(VAR_1);
 if (VAR_0->cl_ignore_case)
  FUNC_0(VAR_0->cl_key);
 VAR_0->cl_keylen = FUNC_5(VAR_0->cl_key);
 FUNC_1(&VAR_0->cl_dblocator);
 return (FUNC_2(VAR_0->cl_db, VAR_0->cl_key, VAR_2,
     &VAR_0->cl_dblocator));
}
