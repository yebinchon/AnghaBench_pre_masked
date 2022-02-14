
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct statstime {int dummy; } ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ,int ,int ,char*,int ,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

enum clnt_stat
FUNC_1(char *VAR_5, struct statstime *VAR_6)
{
 return (FUNC_0(VAR_5, VAR_1, VAR_2, VAR_0,
   (xdrproc_t)VAR_4, (char *) ((void*)0),
   (xdrproc_t)VAR_3, (char *) VAR_6));
}
