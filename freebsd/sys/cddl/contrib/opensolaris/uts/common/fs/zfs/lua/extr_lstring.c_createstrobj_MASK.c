
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_6__ {size_t len; unsigned int hash; scalar_t__ extra; } ;
struct TYPE_7__ {TYPE_1__ tsv; } ;
struct TYPE_8__ {TYPE_2__ ts; } ;
typedef TYPE_2__ TString ;
typedef int GCObject ;


 TYPE_4__* FUNC_0 (int *,int,size_t,int **,int ) ;
 int FUNC_1 (TYPE_2__*,char const*,size_t) ;

__attribute__((used)) static TString *FUNC_2 (lua_State *VAR_0, const char *VAR_1, size_t VAR_2,
                              int VAR_3, unsigned int VAR_4, GCObject **VAR_5) {
  TString *VAR_6;
  size_t VAR_7;
  VAR_7 = sizeof(TString) + ((VAR_2 + 1) * sizeof(char));
  VAR_6 = &FUNC_0(VAR_0, VAR_3, VAR_7, VAR_5, 0)->ts;
  VAR_6->tsv.len = VAR_2;
  VAR_6->tsv.hash = VAR_4;
  VAR_6->tsv.extra = 0;
  FUNC_1(VAR_6+1, VAR_1, VAR_2*sizeof(char));
  ((char *)(VAR_6+1))[VAR_2] = '\0';
  return VAR_6;
}
