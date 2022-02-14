
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int voidp ;
struct TYPE_3__ {scalar_t__ nentries; int * wildcard; scalar_t__ kvhash; } ;
typedef TYPE_1__ mnt_map ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(mnt_map *VAR_0)
{
  FUNC_1(VAR_0->kvhash);




  FUNC_2((voidp) VAR_0->kvhash, 0, sizeof(VAR_0->kvhash));




  FUNC_0(VAR_0->wildcard);
  VAR_0->wildcard = ((void*)0);

  VAR_0->nentries = 0;
}
