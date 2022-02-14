
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _region {int dummy; } ;
struct _citrus_lookup {scalar_t__ cl_dbidx; scalar_t__ cl_dbnum; int cl_db; scalar_t__ cl_rewind; int cl_dblocator; scalar_t__ cl_key; int cl_keylen; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct _region*,struct _region*) ;
 int FUNC_1 (int ,scalar_t__,struct _region*,int *) ;
 int FUNC_2 (struct _region*,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_3(struct _citrus_lookup *VAR_1, struct _region *VAR_2,
    struct _region *VAR_3)
{

 if (VAR_1->cl_key) {
  if (VAR_2)
   FUNC_2(VAR_2, VAR_1->cl_key, VAR_1->cl_keylen);
  return (FUNC_1(VAR_1->cl_db, VAR_1->cl_key, VAR_3,
      &VAR_1->cl_dblocator));
 }

 if (VAR_1->cl_rewind) {
  VAR_1->cl_dbidx = 0;
 }
 VAR_1->cl_rewind = 0;
 if (VAR_1->cl_dbidx >= VAR_1->cl_dbnum)
  return (VAR_0);

 return (FUNC_0(VAR_1->cl_db, VAR_1->cl_dbidx++, VAR_2, VAR_3));
}
