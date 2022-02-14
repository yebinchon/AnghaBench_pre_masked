
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sshkey {scalar_t__ type; } ;
struct ssh {TYPE_1__* kex; } ;
struct TYPE_4__ {char* pubkey_key_types; } ;
struct TYPE_3__ {char* server_sig_algs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,char*,int *) ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct sshkey const*) ;
 scalar_t__ FUNC_4 (char*) ;
 char* FUNC_5 (char**,char*) ;
 char* FUNC_6 (char*) ;

__attribute__((used)) static char *
FUNC_7(struct ssh *VAR_3, const struct sshkey *VAR_4)
{
 char *VAR_5, *VAR_6, *VAR_7, *VAR_8, *VAR_9 = ((void*)0);






 if (VAR_3 == ((void*)0) || VAR_3->kex->server_sig_algs == ((void*)0) ||
     (VAR_4->type != VAR_0 && VAR_4->type != VAR_1)) {

  return FUNC_1(FUNC_3(VAR_4),
      VAR_2.pubkey_key_types, ((void*)0));
 }







 VAR_6 = VAR_5 = FUNC_6(VAR_2.pubkey_key_types);
 while ((VAR_7 = FUNC_5(&VAR_5, ",")) != ((void*)0)) {
  if (FUNC_4(VAR_7) != VAR_4->type)
   continue;
  VAR_8 = FUNC_1(FUNC_2(VAR_7), VAR_3->kex->server_sig_algs, ((void*)0));
  if (VAR_8 != ((void*)0))
   VAR_9 = FUNC_6(VAR_7);
  FUNC_0(VAR_8);
  if (VAR_9 != ((void*)0))
   break;
 }
 FUNC_0(VAR_6);
 return VAR_9;
}
