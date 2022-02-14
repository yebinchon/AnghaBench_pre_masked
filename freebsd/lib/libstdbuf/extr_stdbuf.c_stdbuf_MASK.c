
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) __attribute__ ((constructor)) static void
FUNC_2(void)
{
 char *VAR_3, *VAR_4, *VAR_5;

 VAR_3 = FUNC_1("_STDBUF_I");
 VAR_4 = FUNC_1("_STDBUF_O");
 VAR_5 = FUNC_1("_STDBUF_E");

 if (VAR_5 != ((void*)0))
  FUNC_0(VAR_0, VAR_5);
 if (VAR_3 != ((void*)0))
  FUNC_0(VAR_1, VAR_3);
 if (VAR_4 != ((void*)0))
  FUNC_0(VAR_2, VAR_4);
}
