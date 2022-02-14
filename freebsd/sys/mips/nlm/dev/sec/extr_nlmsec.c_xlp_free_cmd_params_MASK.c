
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlp_sec_command {struct xlp_sec_command* hashdest; struct xlp_sec_command* iv; struct xlp_sec_command* paramp; struct xlp_sec_command* ctrlp; } ;


 int VAR_0 ;
 int FUNC_0 (struct xlp_sec_command*,int ) ;

__attribute__((used)) static void
FUNC_1(struct xlp_sec_command *VAR_1)
{
 if (VAR_1->ctrlp != ((void*)0))
  FUNC_0(VAR_1->ctrlp, VAR_0);
 if (VAR_1->paramp != ((void*)0))
  FUNC_0(VAR_1->paramp, VAR_0);
 if (VAR_1->iv != ((void*)0))
  FUNC_0(VAR_1->iv, VAR_0);
 if (VAR_1->hashdest != ((void*)0))
  FUNC_0(VAR_1->hashdest, VAR_0);
 if (VAR_1 != ((void*)0))
  FUNC_0(VAR_1, VAR_0);
 return;
}
