
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sshkey {scalar_t__ type; } ;
struct TYPE_2__ {char* hostkeyalgorithms; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char const*,char const*,int ) ;
 TYPE_1__ VAR_3 ;
 char* FUNC_1 (struct sshkey const*) ;

__attribute__((used)) static int
FUNC_2(const struct sshkey *VAR_4)
{
 const char *VAR_5 = FUNC_1(VAR_4);
 const char *VAR_6 = VAR_3.hostkeyalgorithms != ((void*)0) ?
     VAR_3.hostkeyalgorithms : VAR_0;

 if (VAR_4 == ((void*)0) || VAR_4->type == VAR_2)
  return 0;
 if (VAR_4->type == VAR_1 &&
     (FUNC_0("rsa-sha2-256", VAR_6, 0) == 1 ||
     FUNC_0("rsa-sha2-512", VAR_6, 0) == 1))
  return 1;
 return FUNC_0(VAR_5, VAR_6, 0) == 1;
}
