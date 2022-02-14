
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsproxy {int count; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 struct nsproxy* FUNC_1 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static inline struct nsproxy *FUNC_2(void)
{
 struct nsproxy *VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2)
  FUNC_0(&VAR_2->count, 1);
 return VAR_2;
}
