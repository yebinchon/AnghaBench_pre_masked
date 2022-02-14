
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {void* upto; void* from; int * file; } ;
typedef void* lin ;


 int * VAR_0 ;
 int FUNC_0 (int ,char const*,int ,struct group*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1 (char const *VAR_2, lin VAR_3, lin VAR_4, lin VAR_5, lin VAR_6)
{
  struct group VAR_7[2];

  VAR_7[0].file = &VAR_0[0];
  VAR_7[0].from = VAR_3;
  VAR_7[0].upto = VAR_4;
  VAR_7[1].file = &VAR_0[1];
  VAR_7[1].from = VAR_5;
  VAR_7[1].upto = VAR_6;
  FUNC_0 (VAR_1, VAR_2, 0, VAR_7);
}
