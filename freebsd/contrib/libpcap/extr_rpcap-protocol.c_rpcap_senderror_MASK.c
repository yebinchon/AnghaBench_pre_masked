
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint16 ;
struct rpcap_header {int dummy; } ;
typedef int SOCKET ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rpcap_header*,int ,int ,unsigned short,int) ;
 scalar_t__ FUNC_1 (char const*,int,char*,int*,int,int ,char*,int) ;
 scalar_t__ FUNC_2 (int ,char*,int,char*,int) ;
 scalar_t__ FUNC_3 (char const*) ;

int
FUNC_4(SOCKET VAR_5, uint8 VAR_6, unsigned short VAR_7, const char *VAR_8, char *VAR_9)
{
 char VAR_10[VAR_2];
 int VAR_11 = 0;
 uint16 VAR_12;

 VAR_12 = (uint16)FUNC_3(VAR_8);

 if (VAR_12 > VAR_0)
  VAR_12 = VAR_0;

 FUNC_0((struct rpcap_header *) VAR_10, VAR_6, VAR_1, VAR_7, VAR_12);

 if (FUNC_1(((void*)0), sizeof(struct rpcap_header), ((void*)0), &VAR_11,
  VAR_2, VAR_4, VAR_9, VAR_0))
  return -1;

 if (FUNC_1(VAR_8, VAR_12, VAR_10, &VAR_11,
  VAR_2, VAR_3, VAR_9, VAR_0))
  return -1;

 if (FUNC_2(VAR_5, VAR_10, VAR_11, VAR_9, VAR_0) < 0)
  return -1;

 return 0;
}
