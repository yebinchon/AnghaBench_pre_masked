
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lzma_filter ;
typedef enum message_verbosity { ____Placeholder_message_verbosity } message_verbosity ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int FUNC_2 (char*,int const*,int) ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

extern void
FUNC_3(enum message_verbosity VAR_4, const lzma_filter *VAR_5)
{
 if (VAR_4 > VAR_3)
  return;

 char VAR_6[VAR_0];
 FUNC_2(VAR_6, VAR_5, 1);
 FUNC_1(VAR_2, FUNC_0("%s: Filter chain: %s\n"), VAR_1, VAR_6);
 return;
}
