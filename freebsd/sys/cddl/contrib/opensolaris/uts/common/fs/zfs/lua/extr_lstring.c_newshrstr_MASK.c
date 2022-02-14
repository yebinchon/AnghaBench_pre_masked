
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nuse; int size; int ** hash; } ;
typedef TYPE_1__ stringtable ;
typedef int lua_State ;
struct TYPE_4__ {TYPE_1__ strt; } ;
typedef int TString ;
typedef int GCObject ;


 TYPE_2__* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int * FUNC_2 (int *,char const*,size_t,int ,unsigned int,int **) ;
 size_t FUNC_3 (unsigned int,int) ;
 int VAR_2 ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static TString *FUNC_5 (lua_State *VAR_3, const char *VAR_4, size_t VAR_5,
                                       unsigned int VAR_6) {
  GCObject **VAR_7;
  stringtable *VAR_8 = &FUNC_0(VAR_3)->strt;
  TString *VAR_9;
  if (VAR_8->nuse >= FUNC_1(VAR_2, VAR_8->size) && VAR_8->size <= VAR_1/2)
    FUNC_4(VAR_3, VAR_8->size*2);
  VAR_7 = &VAR_8->hash[FUNC_3(VAR_6, VAR_8->size)];
  VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_0, VAR_6, VAR_7);
  VAR_8->nuse++;
  return VAR_9;
}
