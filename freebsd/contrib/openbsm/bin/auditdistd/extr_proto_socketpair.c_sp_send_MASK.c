
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sp_ctx {scalar_t__ sp_magic; int sp_side; int* sp_fd; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;



 int FUNC_2 (int) ;
 int FUNC_3 (int,unsigned char const*,size_t,int) ;

__attribute__((used)) static int
FUNC_4(void *VAR_1, const unsigned char *VAR_2, size_t VAR_3, int VAR_4)
{
 struct sp_ctx *VAR_5 = VAR_1;
 int VAR_6;

 FUNC_1(VAR_5 != ((void*)0));
 FUNC_1(VAR_5->sp_magic == VAR_0);

 switch (VAR_5->sp_side) {
 case 128:





  VAR_5->sp_side = 130;

  FUNC_2(VAR_5->sp_fd[1]);
  VAR_5->sp_fd[1] = -1;
 case 130:
  FUNC_1(VAR_5->sp_fd[0] >= 0);
  VAR_6 = VAR_5->sp_fd[0];
  break;
 case 129:
  FUNC_1(VAR_5->sp_fd[1] >= 0);
  VAR_6 = VAR_5->sp_fd[1];
  break;
 default:
  FUNC_0("Invalid socket side (%d).", VAR_5->sp_side);
 }


 if (VAR_2 == ((void*)0))
  return (0);

 return (FUNC_3(VAR_6, VAR_2, VAR_3, VAR_4));
}
