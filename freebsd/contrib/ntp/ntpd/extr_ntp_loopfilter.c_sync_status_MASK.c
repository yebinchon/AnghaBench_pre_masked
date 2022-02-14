
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tbuf ;
typedef int obuf ;
typedef int nbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,char*) ;
 int FUNC_1 (char*,int,int ,int) ;
 int FUNC_2 (char*,int,char*,...) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_2, int VAR_3, int VAR_4)
{
 char VAR_5[256], VAR_6[256], VAR_7[1024];




 FUNC_2(VAR_5, sizeof(VAR_5), "%04x", VAR_3);
 FUNC_2(VAR_6, sizeof(VAR_6), "%04x", VAR_4);

 FUNC_2(VAR_7, sizeof(VAR_7), "%s status: %s -> %s", VAR_2, VAR_5, VAR_6);
 FUNC_0(VAR_0, ((void*)0), VAR_7);
}
