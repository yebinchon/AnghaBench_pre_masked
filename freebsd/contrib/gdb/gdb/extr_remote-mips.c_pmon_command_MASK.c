
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,char*) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_2, int VAR_3)
{
  char VAR_4[VAR_0 + 1];
  int VAR_5;

  FUNC_3 (VAR_4, "0x0 %s", VAR_2);
  FUNC_1 (VAR_4, 1);
  FUNC_2 ("Send packet: %s\n", VAR_4);

  VAR_5 = FUNC_0 (VAR_4, 1, VAR_1);
  VAR_4[VAR_5] = '\0';
  FUNC_2 ("Received packet: %s\n", VAR_4);
}
