
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sshkey {int dummy; } ;
struct TYPE_3__ {char* c_output_name; char* c_name; } ;
typedef TYPE_1__ con ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,struct sshkey*) ;
 scalar_t__ VAR_3 ;
 char* FUNC_2 (char**,char*) ;
 char* FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(con *VAR_4, struct sshkey *VAR_5)
{
 char *VAR_6 = VAR_4->c_output_name ? VAR_4->c_output_name : VAR_4->c_name;
 char *VAR_7, *VAR_8;

 if (VAR_5 == ((void*)0))
  return;
 if (VAR_1 || (!VAR_2 && VAR_3 == VAR_0)) {
  FUNC_1(VAR_6, VAR_5);
  return;
 }
 VAR_8 = VAR_6 = FUNC_3(VAR_6);
 while ((VAR_7 = FUNC_2(&VAR_6, ",")) != ((void*)0))
  FUNC_1(VAR_7, VAR_5);
 FUNC_0(VAR_8);
}
