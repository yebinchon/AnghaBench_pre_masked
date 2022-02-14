
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct nat44_cfg_spool {int port; TYPE_1__ addr; } ;
struct nat44_cfg_redir {TYPE_1__ paddr; TYPE_1__ laddr; int spool_cnt; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_1__*) ;
 int * FUNC_1 (char*,char) ;
 char* FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(char *VAR_2, int *VAR_3, char ***VAR_4)
{
 struct nat44_cfg_redir *VAR_5;
 char *VAR_6;
 size_t VAR_7;

 VAR_5 = (struct nat44_cfg_redir *)VAR_2;
 VAR_5->mode = VAR_1;

 VAR_2 = &VAR_2[sizeof(struct nat44_cfg_redir)];
 VAR_7 = sizeof(struct nat44_cfg_redir);


 if (FUNC_1(**VAR_4, ',') != ((void*)0)) {
  struct nat44_cfg_spool *VAR_8;


  VAR_5->laddr.s_addr = VAR_0;
  VAR_6 = FUNC_2(**VAR_4, ",");
  while (VAR_6 != ((void*)0)) {
   VAR_8 = (struct nat44_cfg_spool *)VAR_2;
   VAR_7 += sizeof(struct nat44_cfg_spool);
   FUNC_0(VAR_6, &VAR_8->addr);
   VAR_8->port = ~0;
   VAR_5->spool_cnt++;

   VAR_2 = &VAR_2[sizeof(struct nat44_cfg_spool)];
   VAR_6 = FUNC_2(((void*)0), ",");
  }
 } else
  FUNC_0(**VAR_4, &VAR_5->laddr);
 (*VAR_4)++; (*VAR_3)--;


 FUNC_0(**VAR_4, &VAR_5->paddr);
 (*VAR_4)++; (*VAR_3)--;

 return (VAR_7);
}
