
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sp_ctx {int sp_magic; int sp_side; int sp_fd; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sp_ctx*) ;
 struct sp_ctx* FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_5, const char *VAR_6, void **VAR_7)
{
 struct sp_ctx *VAR_8;
 int VAR_9;

 if (FUNC_4(VAR_6, "socketpair://") != 0)
  return (-1);

 FUNC_0(VAR_5 == ((void*)0));

 VAR_8 = FUNC_2(sizeof(*VAR_8));
 if (VAR_8 == ((void*)0))
  return (VAR_4);

 if (FUNC_3(VAR_0, VAR_1, 0, VAR_8->sp_fd) == -1) {
  VAR_9 = VAR_4;
  FUNC_1(VAR_8);
  return (VAR_9);
 }

 VAR_8->sp_side = VAR_3;
 VAR_8->sp_magic = VAR_2;
 *VAR_7 = VAR_8;

 return (0);
}
