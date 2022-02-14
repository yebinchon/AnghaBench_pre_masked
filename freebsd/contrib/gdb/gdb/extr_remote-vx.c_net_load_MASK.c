
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct ldfile {scalar_t__* name; int bss_addr; int data_addr; int txt_addr; } ;
typedef int ldstruct ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char**,int ,struct ldfile*,struct timeval) ;
 int FUNC_1 (char*,char,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_2 (char *VAR_5, CORE_ADDR *VAR_6, CORE_ADDR *VAR_7,
   CORE_ADDR *VAR_8)
{
  enum clnt_stat VAR_9;
  struct ldfile VAR_10;
  struct timeval VAR_11;

  FUNC_1 ((char *) &VAR_10, '\0', sizeof (VAR_10));
  VAR_11.tv_sec = 99999999;
  VAR_11.tv_usec = 0;

  VAR_9 = FUNC_0 (VAR_2, VAR_1, VAR_4, &VAR_5, VAR_3,
        &VAR_10, VAR_11);

  if (VAR_9 == VAR_0)
    {
      if (*VAR_10.name == 0)
 return -1;
      *VAR_6 = VAR_10.txt_addr;
      *VAR_7 = VAR_10.data_addr;
      *VAR_8 = VAR_10.bss_addr;
      return 0;
    }
  else
    return -1;
}
