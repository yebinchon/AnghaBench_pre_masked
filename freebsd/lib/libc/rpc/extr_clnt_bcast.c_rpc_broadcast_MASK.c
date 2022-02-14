
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
typedef int rpcvers_t ;
typedef int rpcprog_t ;
typedef int rpcproc_t ;
typedef int resultproc_t ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,char const*) ;

enum clnt_stat
FUNC_1(rpcprog_t VAR_2, rpcvers_t VAR_3, rpcproc_t VAR_4, xdrproc_t VAR_5,
    caddr_t VAR_6, xdrproc_t VAR_7, caddr_t VAR_8,
    resultproc_t VAR_9, const char *VAR_10)
{
 enum clnt_stat VAR_11;

 VAR_11 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
  VAR_7, VAR_8, VAR_9,
  VAR_0, VAR_1, VAR_10);
 return (VAR_11);
}
