
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_dl {int sdl_len; scalar_t__ sdl_alen; } ;
typedef int sdl ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockaddr_dl*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,struct sockaddr_dl*) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,int ,int,scalar_t__,int ) ;
 int FUNC_6 (char*,char const*) ;
 scalar_t__ FUNC_7 (char const*) ;

__attribute__((used)) static void
FUNC_8(int VAR_2, int VAR_3, const char *VAR_4)
{
 char *VAR_5;
 struct sockaddr_dl VAR_6;

 VAR_5 = FUNC_4(FUNC_7(VAR_4) + 2);
 if (VAR_5 == ((void*)0))
  FUNC_1(1, "malloc failed");
 VAR_5[0] = ':';
 FUNC_6(VAR_5 + 1, VAR_4);
 VAR_6.sdl_len = sizeof(VAR_6);
 FUNC_3(VAR_5, &VAR_6);
 FUNC_2(VAR_5);
 if (VAR_6.sdl_alen != VAR_0)
  FUNC_1(1, "malformed link-level address");
 FUNC_5(VAR_2, VAR_1, VAR_3,
     VAR_0, FUNC_0(&VAR_6));
}
