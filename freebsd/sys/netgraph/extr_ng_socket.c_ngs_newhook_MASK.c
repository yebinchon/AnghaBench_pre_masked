
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct ngsock {int hmask; int * hash; } ;
struct hookpriv {int hook; } ;
typedef TYPE_1__* node_p ;
typedef int hook_p ;
struct TYPE_5__ {int nd_numhooks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct hookpriv*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct hookpriv*) ;
 struct ngsock* FUNC_2 (TYPE_1__*) ;
 size_t FUNC_3 (char const*,int ) ;
 struct hookpriv* FUNC_4 (int,int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(node_p VAR_5, hook_p VAR_6, const char *VAR_7)
{
 struct ngsock *const VAR_8 = FUNC_2(VAR_5);
 struct hookpriv *VAR_9;
 uint32_t VAR_10;

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_2, VAR_3);
 if (VAR_9 == ((void*)0))
  return (VAR_0);
 if (VAR_5->nd_numhooks * 2 > VAR_8->hmask)
  FUNC_5(VAR_5);
 VAR_9->hook = VAR_6;
 VAR_10 = FUNC_3(VAR_7, VAR_1) & VAR_8->hmask;
 FUNC_0(&VAR_8->hash[VAR_10], VAR_9, VAR_4);
 FUNC_1(VAR_6, VAR_9);

 return (0);
}
