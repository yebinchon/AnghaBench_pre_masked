
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bhnd_nvram_store {int data; } ;
struct TYPE_6__ {TYPE_1__* index; int path_str; } ;
typedef TYPE_2__ bhnd_nvstore_path ;
struct TYPE_5__ {scalar_t__ count; void** cookiep; } ;


 int FUNC_0 (struct bhnd_nvram_store*,int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int * FUNC_2 (int ,void**) ;
 int FUNC_3 (struct bhnd_nvram_store*,TYPE_2__*) ;

void *
FUNC_4(struct bhnd_nvram_store *VAR_1,
     bhnd_nvstore_path *VAR_2, void **VAR_3)
{
 void **VAR_4;

 FUNC_0(VAR_1, VAR_0);


 if (VAR_2->index == ((void*)0)) {


  FUNC_1(FUNC_3(VAR_1, VAR_2),
      ("missing index for non-root path %s", VAR_2->path_str));



  if ((FUNC_2(VAR_1->data, VAR_3)) == ((void*)0))
   return (((void*)0));

  return (*VAR_3);
 }


 if (VAR_2->index->count == 0)
  return (((void*)0));

 if (*VAR_3 == ((void*)0)) {

  VAR_4 = &VAR_2->index->cookiep[0];
 } else {
  size_t VAR_5;


  VAR_4 = *VAR_3;
  VAR_4++;


  FUNC_1(VAR_4 > VAR_2->index->cookiep,
      ("invalid indexp"));

  VAR_5 = (VAR_4 - VAR_2->index->cookiep);
  if (VAR_5 >= VAR_2->index->count)
   return (((void*)0));
 }


 *VAR_3 = VAR_4;


 return (*VAR_4);
}
