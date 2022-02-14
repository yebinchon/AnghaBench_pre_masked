
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
typedef enum ptracereq { ____Placeholder_ptracereq } ptracereq ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,char*,int ,char*,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum clnt_stat
FUNC_2 (enum ptracereq VAR_3, xdrproc_t VAR_4, char *VAR_5,
        xdrproc_t VAR_6, char *VAR_7)
{
  enum clnt_stat VAR_8;

  VAR_8 = FUNC_0 (VAR_1, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_2);

  if (VAR_8 != VAR_0)
    FUNC_1 (VAR_8);

  return VAR_8;
}
