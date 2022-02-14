
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lacp_peerinfo {int dummy; } ;
typedef int bstr ;
typedef int astr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct lacp_peerinfo const*,struct lacp_peerinfo const*) ;
 char* FUNC_1 (struct lacp_peerinfo const*,char*,int) ;
 int FUNC_2 (char*,size_t,char*,char*,char*) ;

const char *
FUNC_3(const struct lacp_peerinfo *VAR_1,
    const struct lacp_peerinfo *VAR_2, char *VAR_3, size_t VAR_4)
{
 char VAR_5[VAR_0+1];
 char VAR_6[VAR_0+1];
 FUNC_2(VAR_3, VAR_4, "[%s,%s]",
     FUNC_1(VAR_1, VAR_5, sizeof(VAR_5)),
     FUNC_1(VAR_2, VAR_6, sizeof(VAR_6)));

 return (VAR_3);
}
